SilphCo_2F_MapScripts:: @ 8161641
	map_script 1, SilphCo_2F_MapScript1_161647
	.byte 0

SilphCo_2F_MapScript1_161647:: @ 8161647
	checkflag FLAG_0x27A
	call_if 0, EventScript_1A8149
	checkflag FLAG_0x27B
	call_if 0, EventScript_1A8177
	end

SilphCo_2F_EventScript_16165A:: @ 816165A
	goto EventScript_1C4816

EventScript_16165F:: @ 816165F
	end

SilphCo_2F_EventScript_161660:: @ 8161660
	msgbox gUnknown_8175894, 3
	end

SilphCo_2F_EventScript_161669:: @ 8161669
	trainerbattle 0, 336, 0, Text_175562, Text_17557E
	msgbox gUnknown_817559F, 6
	end

SilphCo_2F_EventScript_161680:: @ 8161680
	trainerbattle 0, 337, 0, Text_1755C6, Text_1755E5
	msgbox gUnknown_81755F2, 6
	end

SilphCo_2F_EventScript_161697:: @ 8161697
	trainerbattle 0, 373, 0, Text_17562D, Text_17564A
	msgbox gUnknown_8175651, 6
	end

SilphCo_2F_EventScript_1616AE:: @ 81616AE
	trainerbattle 0, 374, 0, Text_1756AD, Text_1756D8
	msgbox gUnknown_81756E2, 6
	end
