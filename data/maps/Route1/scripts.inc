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
	compare VAR_BELLFE_TOWN_STATE, 1
	goto_if_eq Route1_InitScript_1
	return

Route1_InitScript_1:
# 16 "data/maps/Route1/scripts.pory"
	clearflag FLAG_HIDE_RIVAL
	return


Route1_GoingToLabScript::
# 21 "data/maps/Route1/scripts.pory"
	compare VAR_BELLFE_TOWN_STATE, 1
	goto_if_eq Route1_GoingToLabScript_1
	return

Route1_GoingToLabScript_1:
# 22 "data/maps/Route1/scripts.pory"
	lockall
# 23 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_RIVAL, Route1_RivalToLab
# 24 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_PlayerToLab
# 25 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 27 "data/maps/Route1/scripts.pory"
	warp MAP_BELLFE_TOWN, 0, 20
# 28 "data/maps/Route1/scripts.pory"
	waitstate
# 29 "data/maps/Route1/scripts.pory"
	releaseall
	end


# 34 "data/maps/Route1/scripts.pory"
Route1_RivalToLab:
# 35 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 35 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 35 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 36 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 36 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 36 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 36 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 36 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 36 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 36 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 36 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 37 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 37 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 37 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 37 "data/maps/Route1/scripts.pory"
	walk_fast_right
	step_end

# 39 "data/maps/Route1/scripts.pory"
Route1_PlayerToLab:
# 40 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 40 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 40 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 40 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 41 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 41 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 41 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 41 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 41 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 41 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 41 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 41 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 42 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 42 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 42 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 42 "data/maps/Route1/scripts.pory"
	walk_fast_right
	step_end

Route1_TestingScript::
# 46 "data/maps/Route1/scripts.pory"
	lockall
# 48 "data/maps/Route1/scripts.pory"
	msgbox Route1_TestingScript_Text_0, MSGBOX_YESNO
# 49 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route1_TestingScript_2
Route1_TestingScript_1:
# 54 "data/maps/Route1/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 55 "data/maps/Route1/scripts.pory"
	msgbox Route1_TestingScript_Text_1, MSGBOX_YESNO
# 56 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route1_TestingScript_5
# 68 "data/maps/Route1/scripts.pory"
	msgbox Route1_msg1
Route1_TestingScript_4:
# 71 "data/maps/Route1/scripts.pory"
	hidemonpic
# 72 "data/maps/Route1/scripts.pory"
	waitmessage
# 73 "data/maps/Route1/scripts.pory"
	releaseall
	end

Route1_TestingScript_2:
# 50 "data/maps/Route1/scripts.pory"
	giveitem ITEM_MASTER_BALL, 99
# 51 "data/maps/Route1/scripts.pory"
	giveitem ITEM_RARE_CANDY, 999
	goto Route1_TestingScript_1

Route1_TestingScript_5:
# 57 "data/maps/Route1/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5, ITEM_MASTER_BALL
# 58 "data/maps/Route1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 59 "data/maps/Route1/scripts.pory"
	msgbox Route1_TestingScript_Text_2
# 60 "data/maps/Route1/scripts.pory"
	waitmessage
# 61 "data/maps/Route1/scripts.pory"
	setvar VAR_TEMP_0, 1
# 62 "data/maps/Route1/scripts.pory"
	msgbox Route1_TestingScript_Text_3, MSGBOX_YESNO
# 63 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route1_TestingScript_8
	goto Route1_TestingScript_4

Route1_TestingScript_8:
# 64 "data/maps/Route1/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 65 "data/maps/Route1/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route1_TestingScript_4


Route1_TestingScript_Text_0:
# 48 "data/maps/Route1/scripts.pory"
	.string "Do you need items?$"

Route1_TestingScript_Text_1:
# 55 "data/maps/Route1/scripts.pory"
	.string "Would you like this cyndaquil?$"

Route1_TestingScript_Text_2:
# 59 "data/maps/Route1/scripts.pory"
	.string "Ez clap, Cyndaquil is yours!$"

Route1_TestingScript_Text_3:
# 62 "data/maps/Route1/scripts.pory"
	.string "Would you like to give Cyndaquil a nickname?$"

Route1_msg1::
# 77 "data/maps/Route1/scripts.pory"
	.string "Weirdchamp! :($"
