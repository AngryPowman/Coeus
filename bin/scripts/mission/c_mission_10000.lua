-- $Misson : 10000
--[[
		第一章 追寻之路
		
		任务：神秘纹身的真相
		描述：前往生命科学研究生处了解红色纹身的详细情况。
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
			"喔喔喔喔喔喔，这不是$player_name嘛，无事不登三宝殿，是不是想让我研究研究？",
			"最近实验室经费严重不足，已经没有人体可以研究了。"
		}
	)
	
	add_char_dialogue({"老头儿，我这次还真是过来让你研究的。"})	
	add_npc_dialogue({"哦？看你一脸凝重，发生了什么？"})
	add_char_dialogue({"几天之前我一觉醒来，发现手臂有点疼，然后就发现了这个红色纹身……"})
	add_npc_dialogue({"嗯？看起来相当普通的纹身，该不会是哪家的娃子趁你睡着时恶作剧给你弄上去的吧。"})
	add_char_dialogue
	(
		{
			"起初我也这样认为，可从那天开始，这纹身一旦发出红光",
			"我的情绪就会变得莫名烦躁，血液像沸腾了起来，意识就会开始变模糊，脑海里不受控制的出现强烈的嗜杀念头。",
			"除此之外，我体内的宇宙能也会随之变强。"
		}
	)
	add_npc_dialogue({"居然有这等怪事！"})
	add_npc_dialogue({"这看起来这似乎是一种让人出现兽化情绪的能量封印或者基因试剂。唔……那你是怎么控制住的？"})
	add_char_dialogue
	(
		{
			"起初的两天可以通过意志力克服这种嗜杀情绪...但随着时间这种情绪变得越来越强",
			"而最近的两天几乎不受意志力支配，我只能把自己绑住，只是再这样下去必然会殃及无辜。"
		}
	)
	add_npc_dialogue
	(
		{
			"唔，事情很严重……根据血液化验，看不出任何异常。",
			"的确是个棘手的问题，如果是毫无预兆的出现变化，必须尽早解决。"
			"不如这样，你跑一趟维纳斯中心化学研究所去找霍德罗博士，他对这种奇怪的问题也许有解决办法"
		}
	)
	end_story_dialogue()
	finished_mission(mission_id)
end