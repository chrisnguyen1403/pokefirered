SevenIsland_House_Room1_MapScripts:: @ 817088A
	map_script 3, SevenIsland_House_Room1_MapScript1_170895
	map_script 2, SevenIsland_House_Room1_MapScript2_1708CF
	.byte 0

SevenIsland_House_Room1_MapScript1_170895:: @ 8170895
	special ValidateEReaderTrainer
	compare_var_to_value VAR_RESULT, 0
	call_if 1, EventScript_1708AF
	compare_var_to_value VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 0
	call_if 5, EventScript_1708C3
	end

EventScript_1708AF:: @ 81708AF
	setvar VAR_0x4001, 1
	setobjectxyperm 1, 4, 2
	setobjectmovementtype 1, 8
	setmaplayoutindex LAYOUT_UNUSED_LAYOUT_8338B4C
	return

EventScript_1708C3:: @ 81708C3
	setobjectxyperm 1, 3, 2
	setobjectmovementtype 1, 10
	return

SevenIsland_House_Room1_MapScript2_1708CF:: @ 81708CF
	map_script_2 VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 1, EventScript_1708E9
	map_script_2 VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 2, EventScript_1708E9
	map_script_2 VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 3, EventScript_1708E9
	.2byte 0

EventScript_1708E9:: @ 1708E9
	lockall
	textcolor 1
	applymovement 255, Movement_170953
	waitmovement 0
	applymovement 1, Movement_170955
	waitmovement 0
	moveobjectoffscreen 1
	applymovement 255, Movement_1A75E9
	waitmovement 0
	compare_var_to_value VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 1
	call_if 1, EventScript_170938
	compare_var_to_value VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 2
	call_if 1, EventScript_170941
	compare_var_to_value VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 3
	call_if 1, EventScript_17094A
	special LoadPlayerParty
	setvar VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 0
	releaseall
	end

EventScript_170938:: @ 8170938
	msgbox gUnknown_81A088C
	return

EventScript_170941:: @ 8170941
	msgbox gUnknown_81A0971
	return

EventScript_17094A:: @ 817094A
	msgbox gUnknown_81A0807
	return

Movement_170953:: @ 8170953
	step_10
	step_end

Movement_170955:: @ 8170955
	step_13
	step_2d
	step_end

SevenIsland_House_Room1_EventScript_170958:: @ 8170958
	lock
	faceplayer
	special ValidateEReaderTrainer
	compare_var_to_value VAR_RESULT, 1
	call_if 1, EventScript_17097D
	compare_var_to_value VAR_0x4001, 1
	goto_if_eq EventScript_170987
	msgbox gUnknown_81A049B
	release
	end

EventScript_17097D:: @ 817097D
	msgbox gUnknown_81A049B
	release
	end

EventScript_170987:: @ 8170987
	special SavePlayerParty
	special sub_80CAAAC
	msgbox gUnknown_81A0598, MSGBOX_YESNO
	compare_var_to_value VAR_RESULT, 0
	goto_if_eq EventScript_170A11
	call EventScript_170A1E
	compare_var_to_value VAR_RESULT, 0
	goto_if_eq EventScript_170A11
	msgbox gUnknown_81A0788, MSGBOX_YESNO
	compare_var_to_value VAR_RESULT, 0
	goto_if_eq EventScript_170A11
	special LoadPlayerParty
	call EventScript_1A4EAF
	compare_var_to_value VAR_RESULT, 0
	goto_if_eq EventScript_170A11
	special SavePlayerParty
	special sub_80A03D8
	msgbox gUnknown_81A07C4
	closemessage
	compare_var_to_value VAR_FACING, 2
	call_if 1, EventScript_170A2D
	compare_var_to_value VAR_FACING, 4
	call_if 1, EventScript_170A3F
	compare_var_to_value VAR_FACING, 3
	call_if 1, EventScript_170A51
	warp MAP_SEVEN_ISLAND_HOUSE_ROOM2, 255, 3, 1
	waitstate
	release
	end

EventScript_170A11:: @ 8170A11
	special LoadPlayerParty
	msgbox gUnknown_81A064E
	release
	end

EventScript_170A1E:: @ 8170A1E
	msgbox gUnknown_81A06AB
	fadescreen 1
	special sub_80A0334
	waitstate
	return

EventScript_170A2D:: @ 8170A2D
	applymovement VAR_LAST_TALKED, Movement_170A6F
	applymovement 255, Movement_170A63
	waitmovement 0
	return

EventScript_170A3F:: @ 8170A3F
	applymovement VAR_LAST_TALKED, Movement_170A72
	applymovement 255, Movement_170A67
	waitmovement 0
	return

EventScript_170A51:: @ 8170A51
	applymovement VAR_LAST_TALKED, Movement_170A6F
	applymovement 255, Movement_170A6B
	waitmovement 0
	return

Movement_170A63:: @ 8170A63
	step_1c
	step_11
	step_11
	step_end

Movement_170A67:: @ 8170A67
	step_1c
	step_13
	step_11
	step_end

Movement_170A6B:: @ 8170A6B
	step_1c
	step_12
	step_11
	step_end

Movement_170A6F:: @ 8170A6F
	step_12
	step_30
	step_end

Movement_170A72:: @ 8170A72
	step_13
	step_2f
	step_end

SevenIsland_House_Room1_EventScript_170A75:: @ 8170A75
	msgbox gUnknown_81A0567, 3
	end
