note
	description: "Summary description for {GAME_BOARD}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	GAME_BOARD

inherit
	ANY
		redefine
			out
		end

create
	make

feature{NONE} -- constructor
	make
		local
			start_pos:INTEGER_64
		do
			create grid2d.make_filled(empty_piece, height, width)
			start_pos := 0
			position := [start_pos,start_pos]
		end

feature -- attributes
	empty_piece: STRING = "_"
	piece1: STRING = "X"
	piece2: STRING = "O"

	height: INTEGER_32 = 3
	width: INTEGER_32 = 3
	grid2d: ARRAY2[STRING]
	position: TUPLE[h: INTEGER_64; w: INTEGER_64]


feature -- commands
	move (a_height, a_width: INTEGER_64; a_player: PLAYER)
			-- move the piece to position [a_height, a_width]
		require
			valid_row: 1 <= a_height and a_height <= grid2d.height
			valid_column: 1 <= a_width and a_width <= grid2d.width
		do
			grid2d [a_height.as_integer_32, a_width.as_integer_32] := a_player.p_piece
			position := [a_height, a_width]
		ensure
			position ~ [a_height, a_width]
			grid2d [a_height.as_integer_32, a_width.as_integer_32] = a_player.p_piece
		end

	reset_board
		do
			grid2d.fill_with (empty_piece)
		end

feature -- queries
	is_board_full: BOOLEAN
		do
			Result := grid2d.has (empty_piece) = false
		end

	check_valid_pos(a_pos: TUPLE[h: INTEGER_64; w: INTEGER_64]): BOOLEAN
		do
			Result := grid2d[a_pos.h.as_integer_32, a_pos.w.as_integer_32] ~ empty_piece
		end

	check_row_player_won(a_player: PLAYER): BOOLEAN
			-- check if plyer has won by rows (horizontally)
			-- XXX
			-- XOX
			-- OXO
		do
			Result := ((grid2d[1,1] = a_player.p_piece
						and grid2d[1,2] = a_player.p_piece
						and grid2d[1,3] = a_player.p_piece)

						or (grid2d[2,1] = a_player.p_piece
							and grid2d[2,2] = a_player.p_piece
							and grid2d[2,3] = a_player.p_piece)

						or (grid2d[3,1] = a_player.p_piece
							and grid2d[3,2] = a_player.p_piece
							and grid2d[3,3] = a_player.p_piece))
		end

	check_col_player_won(a_player: PLAYER): BOOLEAN
			-- check if plyer has won by cols (vertically)
			-- XXO
			-- XOX
			-- XOO
		do
			Result := ((grid2d[1,1] = a_player.p_piece
						and grid2d[2,1] = a_player.p_piece
						and grid2d[3,1] = a_player.p_piece)

						or (grid2d[1,2] = a_player.p_piece
							and grid2d[2,2] = a_player.p_piece
							and grid2d[3,2] = a_player.p_piece)

						or (grid2d[1,3] = a_player.p_piece
							and grid2d[2,3] = a_player.p_piece
							and grid2d[3,3] = a_player.p_piece))
		end

	check_cross_player_won(a_player: PLAYER): BOOLEAN
			-- check if plyer has won by cols (cross or X)
			-- XOO
			-- OXO
			-- 00X
		do
			Result := ((grid2d[1,1] = a_player.p_piece
					and grid2d[2,2] = a_player.p_piece
					and grid2d[3,3] = a_player.p_piece)

					or (grid2d[3,1] = a_player.p_piece
						and grid2d[2,2] = a_player.p_piece
						and grid2d[1,3] = a_player.p_piece))
		end

	check_player_won(a_player: PLAYER): BOOLEAN
		do
			Result := (check_row_player_won(a_player)
						or check_col_player_won(a_player)
						or check_cross_player_won(a_player))
		end

	convert_intex_to_pos(pos: INTEGER_64): TUPLE [h: INTEGER_64; w: INTEGER_64]
		require
			valid_pos: 1 <= pos and pos <= 9
		local
			a_height: INTEGER_64
			a_width: INTEGER_64
			a_pos: TUPLE [h: INTEGER_64; w: INTEGER_64]
		do
			a_height := 0
			a_width := 0
			a_pos := [a_height, a_width]

			if
				1 <= pos and pos <= 3
			then
				a_height := 1
				a_width := pos
			elseif
				4 <= pos and pos <= 6
			then
				a_height := 2
				a_width := pos-3
			elseif
				7 <= pos and pos <= 9
			then
				a_height := 3
				a_width := pos-6
			end

			a_pos := [a_height, a_width]
			Result := a_pos
		end

	convert_pos_to_index(pos: TUPLE [h: INTEGER_64; w: INTEGER_64]): INTEGER_64
		do
			Result := 0
			if
				pos.h = 1
			then
				Result := pos.w
			elseif
				pos.h = 2
			then
				Result := pos.w + 3
			elseif
				pos.h = 3
			then
				Result := pos.w + 6
			end
		end

	check_btn_available(btn_num: INTEGER_64): BOOLEAN
		require
			valid_btn: 1 <= btn_num and btn_num <= 9
		local
			a_pos: TUPLE [h: INTEGER_64; w: INTEGER_64]
		do
			a_pos := convert_intex_to_pos(btn_num)
			Result := grid2d[a_pos.h.as_integer_32, a_pos.w.as_integer_32] ~ empty_piece
		end

	check_pos_available(a_pos: TUPLE [h: INTEGER_64; w: INTEGER_64]): BOOLEAN
		local
			a_btn: INTEGER_64
		do
			a_btn := convert_pos_to_index(a_pos)
			Result := check_btn_available(a_btn)
		end

	reset_btn_position(a_btn: INTEGER_64)
		local
			a_pos: TUPLE [h: INTEGER_64; w: INTEGER_64]
		do
			a_pos := convert_intex_to_pos (a_btn)
			reset_position(a_pos)
		end

	reset_position(a_pos: TUPLE [h: INTEGER_64; w: INTEGER_64])
		do
			grid2d[a_pos.h.as_integer_32, a_pos.w.as_integer_32] := empty_piece
		end

feature -- out
	out: STRING_8
		do
			create Result.make_from_string ("  ")
			across 1 |..| height as h loop
				across 1 |..| width as w loop
					Result := Result + grid2d [h.item, w.item].out
				end
				Result := Result + "%N  "
			end
			Result := Result.substring (1, Result.count - 3)
		end

end
