note
	description: "Summary description for {NEW_GAME}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NEW_GAME

inherit
	OPERATION
	redefine
		Model
	end

create
	make

feature{NONE} -- constructor
	make(p1, p2: STRING; m: ETF_MODEL)
		do
			a_model := m
			player1 := p1
			player2 := p2

			item := ""
		end

feature -- attributes
	player1, player2 : STRING


feature -- model
	a_model: ETF_MODEL

	Model: ETF_MODEL
		once
			Result := a_model
		end

feature -- commands
	execute
		do
			Model.set_players (player1, player2)

			Model.game_board.reset_board
			Model.history.clear_history

			Model.set_is_start (true)
			Model.set_is_new(true)
		end

	undo
		do
			-- do nothing
		end

	redo
		do
			-- do nothing
		end

end
