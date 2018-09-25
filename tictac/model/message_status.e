note
	description: "Summary description for {MESSAGE_STATUS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	MESSAGE_STATUS

create
	make

feature{NONE} -- constructor
	make
		do
			init_msgs

			status := msg_ok
			status_right := msg_new_game
		end

feature -- attributes
	msg_ok: STRING
	err_name_same: STRING
	err_name_start: STRING
	err_invalid_turn: STRING
	err_invalid_player: STRING
	err_btn_taken: STRING
	err_winner: STRING
	err_finish_game: STRING
	err_game_finished: STRING
	err_game_tie: STRING

	msg_new_game: STRING
	msg_play_again_start_new: STRING

	status: STRING assign set_status
	status_right: STRING assign set_status_right

feature -- commands
	init_msgs
		do
			msg_ok := "ok" -- 0
			err_name_same := "names of players must be different" -- 1
			err_name_start := "name must start with A-Z or a-z" -- 2
			err_invalid_turn := "not this player's turn" -- 3
			err_invalid_player := "no such player" -- 4
			err_btn_taken := "button already taken" -- 5
			err_winner := "there is a winner" -- 6
			err_finish_game := "finish this game first" -- 7
			err_game_finished := "game is finished" -- 8
			err_game_tie := "game ended in a tie" -- 9

			msg_new_game := "start new game" -- 10
			msg_play_again_start_new := "play again or start new game" -- 11
		end

	set_status(a_status: STRING)
		do
			status := a_status
		end

	set_status_right(a_status: STRING)
		do
			status_right := a_status
		end

	update_status(msg_num: INTEGER)
		do
			inspect msg_num
				when 0 then
					status := msg_ok
				when 1 then
					status := err_name_same
				when 2 then
					status := err_name_start
				when 3 then
					status := err_invalid_turn
				when 4 then
					status := err_invalid_player
				when 5 then
					status := err_btn_taken
				when 6 then
					status := err_winner
				when 7 then
					status := err_finish_game
				when 8 then
					status := err_game_finished
				when 9 then
					status := err_game_tie
				when 10 then
					status_right := msg_new_game
				when 11 then
					status_right := msg_play_again_start_new
				else
					status := msg_ok
			end
		end

	update_plays_next(a_player: STRING)
		do
			status_right := a_player + " plays next"
		end


end
