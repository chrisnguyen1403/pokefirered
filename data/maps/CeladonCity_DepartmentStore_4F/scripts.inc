CeladonCity_DepartmentStore_4F_MapScripts:: @ 816BBEE
	.byte 0

CeladonCity_DepartmentStore_4F_EventScript_16BBEF:: @ 816BBEF
	msgbox gUnknown_8195A68, 2
	end

CeladonCity_DepartmentStore_4F_EventScript_16BBF8:: @ 816BBF8
	msgbox gUnknown_8195AC9, 2
	end

CeladonCity_DepartmentStore_4F_EventScript_16BC01:: @ 816BC01
	msgbox gUnknown_8195B5B, 3
	end

CeladonCity_DepartmentStore_4F_EventScript_16BC0A:: @ 816BC0A
	special sub_8110AB4
	compare_var_to_value VAR_RESULT, 2
	goto_if_eq EventScript_1A7AE0
	lock
	faceplayer
	message Text_1A6211
	waitmessage
	pokemart Items_16BC30
	msgbox gUnknown_81A5190
	release
	end

	.align 2
Items_16BC30:: @ 816BC30
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_RETRO_MAIL
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_THUNDER_STONE
	.2byte ITEM_WATER_STONE
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_NONE
	release
	end
