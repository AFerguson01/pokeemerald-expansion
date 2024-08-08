# 1 "data/maps/Route1/scripts.pory"

# 2 "data/maps/Route1/scripts.pory"
.set LOCALID_RIVAL, 1

Route1_MapScripts::
# 6 "data/maps/Route1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route1_InitScript
# 7 "data/maps/Route1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/Route1/scripts.pory"
	map_script_2 VAR_BELLFE_TOWN_STATE, 1, Route1_GoingToLabScript
	.2byte 0


Route1_InitScript::
# 13 "data/maps/Route1/scripts.pory"
	setflag FLAG_HIDE_RIVAL
# 14 "data/maps/Route1/scripts.pory"
	setflag FLAG_SYS_DEXNAV_GET
# 15 "data/maps/Route1/scripts.pory"
	setflag FLAG_SYS_DETECTOR_MODE
# 16 "data/maps/Route1/scripts.pory"
	compare VAR_BELLFE_TOWN_STATE, 1
	goto_if_eq Route1_InitScript_1
	return

Route1_InitScript_1:
# 17 "data/maps/Route1/scripts.pory"
	clearflag FLAG_HIDE_RIVAL
	return


Route1_GoingToLabScript::
# 22 "data/maps/Route1/scripts.pory"
	compare VAR_BELLFE_TOWN_STATE, 1
	goto_if_eq Route1_GoingToLabScript_1
	return

Route1_GoingToLabScript_1:
# 23 "data/maps/Route1/scripts.pory"
	lockall
# 24 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_RIVAL, Route1_RivalToLab
# 25 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_PlayerToLab
# 26 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 28 "data/maps/Route1/scripts.pory"
	warp MAP_BELLFE_TOWN, 0, 20
# 29 "data/maps/Route1/scripts.pory"
	waitstate
# 30 "data/maps/Route1/scripts.pory"
	releaseall
	end


# 35 "data/maps/Route1/scripts.pory"
Route1_RivalToLab:
# 36 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 36 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 36 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 37 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 37 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 37 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 37 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 37 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 37 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 37 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 37 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 38 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 38 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 38 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 38 "data/maps/Route1/scripts.pory"
	walk_fast_right
	step_end

# 40 "data/maps/Route1/scripts.pory"
Route1_PlayerToLab:
# 41 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 41 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 41 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 41 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 42 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 42 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 42 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 42 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 42 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 42 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 42 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 42 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 43 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 43 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 43 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 43 "data/maps/Route1/scripts.pory"
	walk_fast_right
	step_end

Route1_TestingScript::
# 47 "data/maps/Route1/scripts.pory"
	lockall
# 49 "data/maps/Route1/scripts.pory"
	msgbox Route1_TestingScript_Text_0, MSGBOX_YESNO
# 50 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route1_TestingScript_2
Route1_TestingScript_1:
# 55 "data/maps/Route1/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 56 "data/maps/Route1/scripts.pory"
	msgbox Route1_TestingScript_Text_1, MSGBOX_YESNO
# 57 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route1_TestingScript_5
# 69 "data/maps/Route1/scripts.pory"
	msgbox Route1_msg1
Route1_TestingScript_4:
# 72 "data/maps/Route1/scripts.pory"
	hidemonpic
# 73 "data/maps/Route1/scripts.pory"
	waitmessage
# 74 "data/maps/Route1/scripts.pory"
	releaseall
	end

Route1_TestingScript_2:
# 51 "data/maps/Route1/scripts.pory"
	giveitem ITEM_MASTER_BALL, 99
# 52 "data/maps/Route1/scripts.pory"
	giveitem ITEM_RARE_CANDY, 999
	goto Route1_TestingScript_1

Route1_TestingScript_5:
# 58 "data/maps/Route1/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5, ITEM_MASTER_BALL
# 59 "data/maps/Route1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 60 "data/maps/Route1/scripts.pory"
	msgbox Route1_TestingScript_Text_2
# 61 "data/maps/Route1/scripts.pory"
	waitmessage
# 62 "data/maps/Route1/scripts.pory"
	setvar VAR_TEMP_0, 1
# 63 "data/maps/Route1/scripts.pory"
	msgbox Route1_TestingScript_Text_3, MSGBOX_YESNO
# 64 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route1_TestingScript_8
	goto Route1_TestingScript_4

Route1_TestingScript_8:
# 65 "data/maps/Route1/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 66 "data/maps/Route1/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route1_TestingScript_4


Route1_TestingScript_Text_0:
# 49 "data/maps/Route1/scripts.pory"
	.string "Do you need items?$"

Route1_TestingScript_Text_1:
# 56 "data/maps/Route1/scripts.pory"
	.string "Would you like this cyndaquil?$"

Route1_TestingScript_Text_2:
# 60 "data/maps/Route1/scripts.pory"
	.string "Ez clap, Cyndaquil is yours!$"

Route1_TestingScript_Text_3:
# 63 "data/maps/Route1/scripts.pory"
	.string "Would you like to give Cyndaquil a nickname?$"

Route1_msg1::
# 78 "data/maps/Route1/scripts.pory"
	.string "Weirdchamp! :($"
