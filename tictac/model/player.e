note
	description: "Summary description for {PLAYER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PLAYER
inherit
	ANY
	redefine
		out
	end

create
	make

feature {NONE} -- constructor
	make(name, piece: STRING; score: INTEGER_64)
		do
			create p_name.make_empty; create p_piece.make_empty
			p_name := name
			p_piece := piece
			p_score := score
		end

feature -- attributes
	p_name: STRING assign set_p_name
	p_piece: STRING
	p_score: INTEGER_64

feature {ETF_MODEL} -- player operations
	set_p_name(a_name: STRING)
		do
			p_name := a_name
		end

	set_p_piece(a_piece: STRING)
		do
			p_piece := a_piece
		end

	update_p_score
		do
			p_score := p_score+1
		end

feature -- output
	out: STRING
		do
			create Result.make_empty
			Result.append ("  " + p_score.out)
				Result.append (": score for %"")
				Result.append (p_name)
				Result.append ("%" (as ")
				Result.append (p_piece)
				Result.append (")")
		end

end
