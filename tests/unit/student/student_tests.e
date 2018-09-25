note
	description: "Summary description for {STUDENT_TESTS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	STUDENT_TESTS

inherit
	ES_TEST

create
	make

feature {NONE} -- Initialization

	make
			-- Initialization for `Current'.
		local
			model_access: ETF_MODEL_ACCESS
		do
			model := model_access.m

--			add_boolean_case (agent t1)
		end

feature -- attrubutes
	model : ETF_MODEL

feature
--	t1: BOOLEAN
--		local
--			a_new_game: NEW_GAME
--			p1, p2: STRING
--		do

--			p1 := "Xavier"; p2 := "Ora";

--			comment("t1: new_game(1,'" + p1 + "','"+ p2 +"')%N")
--			create a_new_game.make (p1, p2, model)

--			Result := model.player1.p_name = p1 and model.player2.p_name = p2
--			check Result end
--		end

end
