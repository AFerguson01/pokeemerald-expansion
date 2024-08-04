# 1 "data/maps/Route1/scripts.pory"

# 2 "data/maps/Route1/scripts.pory"
Route1_MapScripts::
# 3 "data/maps/Route1/scripts.pory"
	.byte 0

Route1_TestingScript::
# 7 "data/maps/Route1/scripts.pory"
	lockall
# 9 "data/maps/Route1/scripts.pory"
	msgbox Route1_TestingScript_Text_0, MSGBOX_YESNO
# 10 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route1_TestingScript_2
Route1_TestingScript_1:
# 15 "data/maps/Route1/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 16 "data/maps/Route1/scripts.pory"
	msgbox Route1_TestingScript_Text_1, MSGBOX_YESNO
# 17 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route1_TestingScript_5
# 29 "data/maps/Route1/scripts.pory"
	msgbox msg1
Route1_TestingScript_4:
# 32 "data/maps/Route1/scripts.pory"
	hidemonpic
# 33 "data/maps/Route1/scripts.pory"
	waitmessage
# 34 "data/maps/Route1/scripts.pory"
	releaseall
	end

Route1_TestingScript_2:
# 11 "data/maps/Route1/scripts.pory"
	giveitem ITEM_MASTER_BALL, 99
# 12 "data/maps/Route1/scripts.pory"
	giveitem ITEM_RARE_CANDY, 999
	goto Route1_TestingScript_1

Route1_TestingScript_5:
# 18 "data/maps/Route1/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5, ITEM_MASTER_BALL
# 19 "data/maps/Route1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 20 "data/maps/Route1/scripts.pory"
	msgbox Route1_TestingScript_Text_2
# 21 "data/maps/Route1/scripts.pory"
	waitmessage
# 22 "data/maps/Route1/scripts.pory"
	setvar VAR_TEMP_0, 1
# 23 "data/maps/Route1/scripts.pory"
	msgbox Route1_TestingScript_Text_3, MSGBOX_YESNO
# 24 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route1_TestingScript_8
	goto Route1_TestingScript_4

Route1_TestingScript_8:
# 25 "data/maps/Route1/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 26 "data/maps/Route1/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route1_TestingScript_4


Route1_TestingScript_Text_0:
# 9 "data/maps/Route1/scripts.pory"
	.string "Do you need items?$"

Route1_TestingScript_Text_1:
# 16 "data/maps/Route1/scripts.pory"
	.string "Would you like this cyndaquil?$"

Route1_TestingScript_Text_2:
# 20 "data/maps/Route1/scripts.pory"
	.string "Ez clap, Cyndaquil is yours!$"

Route1_TestingScript_Text_3:
# 23 "data/maps/Route1/scripts.pory"
	.string "Would you like to give Cyndaquil a nickname?$"

msg1::
# 38 "data/maps/Route1/scripts.pory"
	.string "Weirdchamp! :($"
