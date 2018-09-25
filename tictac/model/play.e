note
	description: "Summary description for {PLAY}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PLAY

inherit
	OPERATION
	redefine
		Model
	end

create
	make

feature{NONE} -- constructor
	make(a_player: STRING ; a_press: INTEGER_64; m: ETF_MODEL)
		do
			a_model := m
			player := a_player
			position := model.game_board.convert_intex_to_pos (a_press)

			old_status := model.message_status.status
			old_status_right := model.message_status.status_right

			item := ""

			play_op_valid := false
		end

feature -- attributes
	player: STRING
	position: TUPLE[h: INTEGER_64; w: INTEGER_64]
	old_status: STRING assign set_old_status
	old_status_right: STRING
	play_op_valid: BOOLEAN assign set_play_op_valid

feature -- model
	a_model: ETF_MODEL

	Model: ETF_MODEL
		once
			Result := a_model
		end

feature -- setters
	set_play_op_valid(valid_op: BOOLEAN)
		do
			play_op_valid := valid_op
		end

	set_old_status(a_status: STRING)
		do
			old_status := a_status
		end

feature -- commands

	play
		do
			play_op_valid := false
		end

	execute
		do
			old_status := model.message
			old_status_right := model.message_status.status_right

			if -- check valid turn/pos/player
				Model.check_valid_pos_turn(player, position)
			then
				play_op_valid := true

				Model.game_board.move (position.h.as_integer_32, position.w.as_integer_32, Model.current_turn)

				 -- update Model is_won, is_tie, is_start
				Model.update_players_win

				-- checks if anyone won/tie/else
					-- set is_start := false else
					-- update message status
				if
					Model.is_won
				then
					Model.set_is_start (false)
					Model.history.clear_history

					Model.set_message (Model.message_status.err_winner)
					Model.message_status.update_status (11)
				elseif
					Model.is_tie
				then
					Model.set_is_start (false)
					Model.history.clear_history

					Model.set_message (Model.message_status.err_game_tie)
					Model.message_status.update_status (11)
				else
					Model.switch_current_turn

					Model.set_message (Model.message_status.msg_ok)
					Model.message_status.update_plays_next(Model.current_turn.p_name)
				end
			end

		end

	undo
		do
			if
				Model.is_start
			then
				if
					play_op_valid
				then
					Model.game_board.reset_position(position)
					Model.switch_current_turn
				end
				if
					not Model.is_new_game
				then
					old_status := Model.message_status.msg_ok
				end

				Model.set_message (old_status)
				Model.message_status.set_status_right (old_status_right)
			end
		end

	redo
		do
			execute
		end
end
