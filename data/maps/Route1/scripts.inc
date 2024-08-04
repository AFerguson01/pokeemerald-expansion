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
	compare VAR_BELLFE_TOWN_STATE, 1
	goto_if_eq Route1_InitScript_1
	return

Route1_InitScript_1:
# 15 "data/maps/Route1/scripts.pory"
	clearflag FLAG_HIDE_RIVAL
	return


Route1_GoingToLabScript::
# 20 "data/maps/Route1/scripts.pory"
	compare VAR_BELLFE_TOWN_STATE, 1
	goto_if_eq Route1_GoingToLabScript_1
	return

Route1_GoingToLabScript_1:
# 21 "data/maps/Route1/scripts.pory"
	lockall
# 22 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_RIVAL, Route1_RivalToLab
# 23 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_PlayerToLab
# 24 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 26 "data/maps/Route1/scripts.pory"
	warp MAP_BELLFE_TOWN, 0, 20
# 27 "data/maps/Route1/scripts.pory"
	waitstate
# 28 "data/maps/Route1/scripts.pory"
	releaseall
	end


# 33 "data/maps/Route1/scripts.pory"
Route1_RivalToLab:
# 34 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 34 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 34 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 35 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 35 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 35 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 35 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 35 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 35 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 35 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 35 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 36 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 36 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 36 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 36 "data/maps/Route1/scripts.pory"
	walk_fast_right
	step_end

# 38 "data/maps/Route1/scripts.pory"
Route1_PlayerToLab:
# 39 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 39 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 39 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 39 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 40 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 40 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 40 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 40 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 40 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 40 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 40 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 40 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 41 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 41 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 41 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 41 "data/maps/Route1/scripts.pory"
	walk_fast_right
	step_end

Route1_TestingScript::
# 45 "data/maps/Route1/scripts.pory"
	lockall
# 47 "data/maps/Route1/scripts.pory"
	msgbox Route1_TestingScript_Text_0, MSGBOX_YESNO
# 48 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route1_TestingScript_2
Route1_TestingScript_1:
# 53 "data/maps/Route1/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 54 "data/maps/Route1/scripts.pory"
	msgbox Route1_TestingScript_Text_1, MSGBOX_YESNO
# 55 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route1_TestingScript_5
# 67 "data/maps/Route1/scripts.pory"
	msgbox Route1_msg1
Route1_TestingScript_4:
# 70 "data/maps/Route1/scripts.pory"
	hidemonpic
# 71 "data/maps/Route1/scripts.pory"
	waitmessage
# 72 "data/maps/Route1/scripts.pory"
	releaseall
	end

Route1_TestingScript_2:
# 49 "data/maps/Route1/scripts.pory"
	giveitem ITEM_MASTER_BALL, 99
# 50 "data/maps/Route1/scripts.pory"
	giveitem ITEM_RARE_CANDY, 999
	goto Route1_TestingScript_1

Route1_TestingScript_5:
# 56 "data/maps/Route1/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5, ITEM_MASTER_BALL
# 57 "data/maps/Route1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 58 "data/maps/Route1/scripts.pory"
	msgbox Route1_TestingScript_Text_2
# 59 "data/maps/Route1/scripts.pory"
	waitmessage
# 60 "data/maps/Route1/scripts.pory"
	setvar VAR_TEMP_0, 1
# 61 "data/maps/Route1/scripts.pory"
	msgbox Route1_TestingScript_Text_3, MSGBOX_YESNO
# 62 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route1_TestingScript_8
	goto Route1_TestingScript_4

Route1_TestingScript_8:
# 63 "data/maps/Route1/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 64 "data/maps/Route1/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route1_TestingScript_4


Route1_TestingScript_Text_0:
# 47 "data/maps/Route1/scripts.pory"
	.string "Do you need items?$"

Route1_TestingScript_Text_1:
# 54 "data/maps/Route1/scripts.pory"
	.string "Would you like this cyndaquil?$"

Route1_TestingScript_Text_2:
# 58 "data/maps/Route1/scripts.pory"
	.string "Ez clap, Cyndaquil is yours!$"

Route1_TestingScript_Text_3:
# 61 "data/maps/Route1/scripts.pory"
	.string "Would you like to give Cyndaquil a nickname?$"

Route1_msg1::
# 76 "data/maps/Route1/scripts.pory"
	.string "Weirdchamp! :($"
