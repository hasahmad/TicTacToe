note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_NEW_GAME
inherit
	ETF_NEW_GAME_INTERFACE
		redefine new_game end
create
	make
feature -- command
	new_game(player1: STRING ; player2: STRING)
		require else
			new_game_precond(player1, player2)
		local
			a_new_game: NEW_GAME
    	do
			-- perform some update on the model state

			create a_new_game.make (player1, player2, model)

			if -- same name
				player1 ~ player2
			then
				model.set_message (model.message_status.err_name_same)
			elseif -- invalid name
				not model.check_str(player1) or not model.check_str(player2)
			then
				model.set_message (model.message_status.err_name_start)
			else
				a_new_game.execute

				model.set_message (model.message_status.msg_ok)
				model.message_status.update_plays_next(model.current_turn.p_name)
			end


			etf_cmd_container.on_change.notify ([Current])
    	end

end
