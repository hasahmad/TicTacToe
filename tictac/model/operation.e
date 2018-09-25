note
	description: "Summary description for {OPERATION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	OPERATION

feature

	Model: ETF_MODEL
		local
			ma: ETF_MODEL_ACCESS
		once
			Result := ma.m
		end

	item: STRING_8
		-- operation at the UI: e.g. move(direction)

	execute
		deferred
		end

	undo
		deferred
		end

	redo
		deferred
		end

end
