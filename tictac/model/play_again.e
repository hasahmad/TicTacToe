note
	description: "Summary description for {PLAY_AGAIN}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PLAY_AGAIN

inherit
	OPERATION
	redefine
		Model
	end

create
	make

feature{NONE} -- constructor
	make(m: ETF_MODEL)
		do
			a_model := m

			old_status := model.message_status.status
			old_status_right := model.message_status.status_right

			item := ""
		end

feature -- attributes
	old_status, old_status_right: STRING


feature -- model
	a_model: ETF_MODEL

	Model: ETF_MODEL
		once
			Result := a_model
		end

feature -- commands
	execute
		do
			Model.set_is_start (true)
			Model.game_board.reset_board
			Model.history.clear_history
			Model.is_tie := false
			Model.is_won := false

			if
				Model.start_turn ~ Model.player2
			then
				Model.start_turn := Model.player1
				Model.current_turn := Model.player1
			elseif
				Model.start_turn ~ Model.player1
			then
				Model.start_turn := Model.player2
				Model.current_turn := Model.player2
			end
		end

	undo
		do
			Model.set_message (old_status)
			Model.message_status.set_status_right (old_status_right)
		end

	redo
		do
			execute
		end

end

