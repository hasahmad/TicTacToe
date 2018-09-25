note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_PLAY_AGAIN
inherit
	ETF_PLAY_AGAIN_INTERFACE
		redefine play_again end
create
	make
feature -- command
	play_again
    	local
			play_again_op: PLAY_AGAIN
    	do
			-- perform some update on the model state

			create play_again_op.make (model)

			if
				model.is_start = false
			then
				model.history.extend_history (play_again_op)
				play_again_op.execute

				model.set_message (model.message_status.msg_ok)
				model.message_status.update_plays_next (model.current_turn.p_name)
			else
				if
					not model.is_new_game
				then
					model.set_message (model.message_status.msg_ok)
				else
					model.set_message (model.message_status.err_finish_game)
				end
			end

			etf_cmd_container.on_change.notify ([Current])
    	end

end
