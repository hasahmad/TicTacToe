note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_PLAY
inherit
	ETF_PLAY_INTERFACE
		redefine play end
create
	make
feature -- command
	play(player: STRING ; press: INTEGER_64)
		require else
			play_precond(player, press)
		local
			play_op: PLAY
			err: BOOLEAN
    	do
			-- perform some update on the model state

			create play_op.make (player, press, model)
			model.history.extend_history (play_op)
--			play_op.execute

			if
				Model.check_valid_pos_turn(player, play_op.position) and model.is_new_game
			then
				play_op.execute
			else
				play_op.play

				if -- game is finished
					Model.is_start = false
				then
					Model.set_message (Model.message_status.err_game_finished)
				elseif -- no such player
					not (player ~ Model.player1.p_name or player ~ Model.player2.p_name)
					or not Model.check_str (model.player1.p_name) or not Model.check_str (model.player2.p_name)
				then
					Model.set_message (Model.message_status.err_invalid_player)
				elseif -- wrong player's turn
					not (player ~ model.current_turn.p_name)
				then
					Model.set_message (Model.message_status.err_invalid_turn)
				elseif -- btn taken
					not (Model.game_board.check_pos_available(play_op.position))
				then
					Model.set_message (Model.message_status.err_btn_taken)
				end
			end
			
			etf_cmd_container.on_change.notify ([Current])
    	end

end
