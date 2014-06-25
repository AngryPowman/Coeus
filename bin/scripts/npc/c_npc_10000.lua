-- $NPC 老肉鸡
function on_begin_conversation(player)

end

function on_pve()
	local level = get_level()
	print(level);
	return true
end

function on_end_conversation(player)

end