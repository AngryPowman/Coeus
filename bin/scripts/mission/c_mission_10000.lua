-- $Misson : 10000
--[[
		��һ�� ׷Ѱ֮·
		
		�����������������
		������ǰ��������ѧ�о������˽��ɫ�������ϸ�����
--]]

local mission_id = 1000
local mission_npc_id = 1000


local function on_accepted_mission()
	bind_mission_npc(mission_id, mission_npc_id)
end

local function on_finished_mission()
	
end

local function on_check_conditions()
	return true
end	

local function on_mission_process()
	start_story_dialogue()
	set_dialogue_npc(mission_npc_id)
	add_npc_dialogue
	(
		{
			"�����ร��ⲻ��$player_name����²���������ǲ����������о��о���",
			"���ʵ���Ҿ������ز��㣬�Ѿ�û����������о��ˡ�"
		}
	)
	
	add_char_dialogue({"��ͷ��������λ����ǹ��������о��ġ�"})	
	add_npc_dialogue({"Ŷ������һ�����أ�������ʲô��"})
	add_char_dialogue({"����֮ǰ��һ�������������ֱ��е��ۣ�Ȼ��ͷ����������ɫ������"})
	add_npc_dialogue({"�ţ��������൱��ͨ�������ò������ļҵ����ӳ���˯��ʱ���������Ū��ȥ�İɡ�"})
	add_char_dialogue
	(
		{
			"�����Ҳ������Ϊ���ɴ����쿪ʼ��������һ���������",
			"�ҵ������ͻ���Ī�����꣬ѪҺ���������������ʶ�ͻῪʼ��ģ�����Ժ��ﲻ�ܿ��Ƶĳ���ǿ�ҵ���ɱ��ͷ��",
			"����֮�⣬�����ڵ�������Ҳ����֮��ǿ��"
		}
	)
	add_npc_dialogue({"��Ȼ����ȹ��£�"})
	add_npc_dialogue({"�⿴�������ƺ���һ�����˳����޻�������������ӡ���߻����Լ���������������ô����ס�ģ�"})
	add_char_dialogue
	(
		{
			"������������ͨ����־���˷�������ɱ����...������ʱ�������������Խ��Խǿ",
			"����������켸��������־��֧�䣬��ֻ�ܰ��Լ���ס��ֻ����������ȥ��Ȼ���꼰�޹���"
		}
	)
	add_npc_dialogue
	(
		{
			"����������ء�������ѪҺ���飬�������κ��쳣��",
			"��ȷ�Ǹ����ֵ����⣬����Ǻ���Ԥ�׵ĳ��ֱ仯�����뾡������"
			"��������������һ��ά��˹���Ļ�ѧ�о���ȥ�һ����޲�ʿ������������ֵ�����Ҳ���н���취"
		}
	)
	end_story_dialogue()
	finished_mission(mission_id)
end