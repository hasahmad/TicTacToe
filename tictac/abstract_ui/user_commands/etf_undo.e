note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_UNDO
inherit
	ETF_UNDO_INTERFACE
		redefine undo end
create
	make
feature -- command
	undo
    	do
			-- perform some update on the model state

			if
				model.history.on_item
			then
				model.history.item.undo
				model.history.back
			end

			etf_cmd_container.on_change.notify ([Current])
    	end

end
