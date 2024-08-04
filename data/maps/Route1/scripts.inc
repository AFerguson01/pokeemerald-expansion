# 1 "data/maps/Route1/scripts.pory"

# 2 "data/maps/Route1/scripts.pory"
.set LOCALID_RIVAL, 1
# 3 "data/maps/Route1/scripts.pory"

# 4 "data/maps/Route1/scripts.pory"
Route1_MapScripts::
# 5 "data/maps/Route1/scripts.pory"
    map_script MAP_SCRIPT_ON_LOAD, Route1_InitScript
# 6 "data/maps/Route1/scripts.pory"
	.byte 0

Route1_InitScript::
# 10 "data/maps/Route1/scripts.pory"
	compare VAR_BELLFE_TOWN_STATE, 1
	goto_if_eq Route1_InitScript_1
	return

Route1_InitScript_1:
	return


# 15 "data/maps/Route1/scripts.pory"
RivalToLab:
# 16 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 16 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 16 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 17 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 17 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 17 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 17 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 17 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 17 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 17 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 17 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 18 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 18 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 18 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 18 "data/maps/Route1/scripts.pory"
	walk_fast_right
	step_end

# 20 "data/maps/Route1/scripts.pory"
PlayerToLab:
# 21 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 21 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 21 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 21 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 22 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 22 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 22 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 22 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 22 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 22 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 22 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 22 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 23 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 23 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 23 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 23 "data/maps/Route1/scripts.pory"
	walk_fast_right
	step_end

Route1_TestingScript::
# 27 "data/maps/Route1/scripts.pory"
	lockall
# 29 "data/maps/Route1/scripts.pory"
	msgbox Route1_TestingScript_Text_0, MSGBOX_YESNO
# 30 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route1_TestingScript_2
Route1_TestingScript_1:
# 35 "data/maps/Route1/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 36 "data/maps/Route1/scripts.pory"
	msgbox Route1_TestingScript_Text_1, MSGBOX_YESNO
# 37 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route1_TestingScript_5
# 49 "data/maps/Route1/scripts.pory"
	msgbox msg1
Route1_TestingScript_4:
# 52 "data/maps/Route1/scripts.pory"
	hidemonpic
# 53 "data/maps/Route1/scripts.pory"
	waitmessage
# 54 "data/maps/Route1/scripts.pory"
	releaseall
	end

Route1_TestingScript_2:
# 31 "data/maps/Route1/scripts.pory"
	giveitem ITEM_MASTER_BALL, 99
# 32 "data/maps/Route1/scripts.pory"
	giveitem ITEM_RARE_CANDY, 999
	goto Route1_TestingScript_1

Route1_TestingScript_5:
# 38 "data/maps/Route1/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5, ITEM_MASTER_BALL
# 39 "data/maps/Route1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 40 "data/maps/Route1/scripts.pory"
	msgbox Route1_TestingScript_Text_2
# 41 "data/maps/Route1/scripts.pory"
	waitmessage
# 42 "data/maps/Route1/scripts.pory"
	setvar VAR_TEMP_0, 1
# 43 "data/maps/Route1/scripts.pory"
	msgbox Route1_TestingScript_Text_3, MSGBOX_YESNO
# 44 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route1_TestingScript_8
	goto Route1_TestingScript_4

Route1_TestingScript_8:
# 45 "data/maps/Route1/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 46 "data/maps/Route1/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route1_TestingScript_4


Route1_TestingScript_Text_0:
# 29 "data/maps/Route1/scripts.pory"
	.string "Do you need items?$"

Route1_TestingScript_Text_1:
# 36 "data/maps/Route1/scripts.pory"
	.string "Would you like this cyndaquil?$"

Route1_TestingScript_Text_2:
# 40 "data/maps/Route1/scripts.pory"
	.string "Ez clap, Cyndaquil is yours!$"

Route1_TestingScript_Text_3:
# 43 "data/maps/Route1/scripts.pory"
	.string "Would you like to give Cyndaquil a nickname?$"

msg1::
# 58 "data/maps/Route1/scripts.pory"
	.string "Weirdchamp! :($"
