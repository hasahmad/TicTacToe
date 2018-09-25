note
	description: "A default business model."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_MODEL

inherit
	ANY
		redefine
			out
		end

create {ETF_MODEL_ACCESS}
	make

feature {NONE} -- Initialization
	make
			-- Initialization for `Current'.
		do
			create s.make_empty
			i := 0

			create game_board.make
			create history.make
			create message_status.make
			set_message(message_status.msg_ok)
			set_players("", "")

			is_start := true
			is_won := false
			is_tie := false
			is_new_game := false
		end

feature -- model attributes
	s : STRING
	i : INTEGER

feature -- messages
	message_status: MESSAGE_STATUS assign set_message_status
	message: STRING assign set_message

	set_message_status(a_msg_status: MESSAGE_STATUS)
		do
			message_status := a_msg_status
		end

	set_message (a_message: STRING_8)
		do
			message := a_message
			message_status.status := a_message
		end

feature
	game_board: GAME_BOARD

	history: HISTORY

	player1, player2: PLAYER
	start_turn: PLAYER assign set_start_turn
	current_turn: PLAYER assign set_current_turn

	is_start: BOOLEAN assign set_is_start
	is_won: BOOLEAN assign set_is_won
	is_tie: BOOLEAN assign set_is_tie
	is_new_game: BOOLEAN assign set_is_new

feature -- model operations

	default_update
			-- Perform update to the model state.
		do
			i := i + 1
		end

	reset
			-- Reset model state.
		do
			make
		end


feature -- setters

	set_is_new(a_new: BOOLEAN)
		do
			is_new_game := a_new
		end

	set_players(p1_name, p2_name: STRING)
		do
			create player1.make(p1_name, game_board.piece1, 0)
			create player2.make(p2_name, game_board.piece2, 0)
			set_start_turn(player1)
			set_current_turn(player1)
		end

	set_start_turn(a_player: PLAYER)
		do
			start_turn := a_player
		end

	set_current_turn(a_player: PLAYER)
		do
			current_turn := a_player
		end

	set_is_start(a_start: BOOLEAN)
		do
			is_start := a_start
		end

	set_is_won(a_won: BOOLEAN)
		do
			is_won := a_won
		end

	set_is_tie(a_tie: BOOLEAN)
		do
			is_tie := a_tie
		end


feature{PLAY} -- commands
	update_players_win
		do

			if -- check tie
--				(game_board.check_player_won(player1) and game_board.check_player_won(player2)) or game_board.is_board_full
				game_board.is_board_full
				and ((game_board.check_player_won(player1) and game_board.check_player_won(player2))
				or ((not game_board.check_player_won(player1)) and (not game_board.check_player_won(player2))))
			then
				is_start := false
				is_tie := true
			elseif -- check p1 win
				game_board.check_player_won(player1)
			then
				player1.update_p_score
				is_start := false
				is_won := true
			elseif -- check p2 win
				game_board.check_player_won(player2)
			then
				player2.update_p_score
				is_start := false
				is_won := true
			end
		end

	switch_current_turn
		do
			if
				current_turn ~ player1
			then
				current_turn := player2
			elseif
				current_turn ~ player2
			then
				current_turn := player1
			end
		end

	switch_start_turn
		do
			if
				start_turn ~ player1
			then
				start_turn := player2
			elseif
				start_turn ~ player2
			then
				start_turn := player1
			end
		end

feature -- check validations
	check_str(str_a: STRING): BOOLEAN
		do
			Result := (str_a.at (1).is_alpha
					and (not (str_a ~ "%U") or not (str_a.is_empty)))
		end

	get_player(name:STRING): PLAYER
		do
			Result := player1
			if
				player1.p_name ~ name
			then
				Result := player1
			elseif
				player2.p_name ~ name
			then
				Result := player2
			end
		end

	check_players_won: BOOLEAN
		do
			update_players_win
			Result := (not is_start) and (is_won or is_tie)
		end


	check_valid_pos_turn(a_player_name: STRING; a_pos: TUPLE[h: INTEGER_64; w: INTEGER_64]): BOOLEAN
		do
			Result := (a_player_name /~ ""
					and a_player_name ~ current_turn.p_name
					and game_board.check_valid_pos(a_pos)
					and is_start)
		end

	check_valid_btn_turn(a_player_name: STRING; a_btn: INTEGER_64): BOOLEAN
		local
			a_pos: TUPLE[h: INTEGER_64; w: INTEGER_64]
		do
			a_pos := game_board.convert_intex_to_pos (a_btn)
			Result := check_valid_pos_turn(a_player_name, a_pos)
		end

feature -- queries
	out : STRING
		do
			create Result.make_from_string ("  ")
			Result.append (message)
			if
				player1.p_name ~ "" or player2.p_name ~ ""
			then
				Result.append (":  => ")
			else
				Result.append (": => ")
			end

			Result.append (message_status.status_right + "%N")

			Result.append (game_board.out + "%N")
			Result.append (player1.out + "%N")
			Result.append (player2.out)
		end

end




