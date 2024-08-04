# 1 "data/maps/BellfeTown/scripts.pory"

# 2 "data/maps/BellfeTown/scripts.pory"
.set LOCALID_RIVAL, 3
# 3 "data/maps/BellfeTown/scripts.pory"

# 4 "data/maps/BellfeTown/scripts.pory"
BellfeTown_MapScripts::
# 5 "data/maps/BellfeTown/scripts.pory"
    map_script MAP_SCRIPT_ON_LOAD, BellfeTown_InitScript
# 6 "data/maps/BellfeTown/scripts.pory"
	.byte 0

BellfeTown_InitScript::
# 10 "data/maps/BellfeTown/scripts.pory"
	setflag FLAG_HIDE_RIVAL
	return


BellfeTown_GetPokemonStartScript::
# 14 "data/maps/BellfeTown/scripts.pory"
	lockall
# 15 "data/maps/BellfeTown/scripts.pory"
	setvar VAR_BELLFE_TOWN_STATE, 1
# 16 "data/maps/BellfeTown/scripts.pory"
	addobject LOCALID_RIVAL
# 18 "data/maps/BellfeTown/scripts.pory"
	applymovement LOCALID_RIVAL, BellfeTown_RivalToPlayer_1
# 19 "data/maps/BellfeTown/scripts.pory"
	waitmovement 0
# 21 "data/maps/BellfeTown/scripts.pory"
	playse SE_PIN
# 22 "data/maps/BellfeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 23 "data/maps/BellfeTown/scripts.pory"
	waitmovement 0
# 24 "data/maps/BellfeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 25 "data/maps/BellfeTown/scripts.pory"
	waitmovement 0
# 27 "data/maps/BellfeTown/scripts.pory"
	applymovement LOCALID_RIVAL, BellfeTown_RivalToPlayer_2
# 28 "data/maps/BellfeTown/scripts.pory"
	waitmovement 0
# 30 "data/maps/BellfeTown/scripts.pory"
	msgbox BellfeTown_rivalMsg1, MSGBOX_NPC
# 31 "data/maps/BellfeTown/scripts.pory"
	waitmessage
# 33 "data/maps/BellfeTown/scripts.pory"
	applymovement LOCALID_RIVAL, BellfeTown_RivalToLab_1
# 34 "data/maps/BellfeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BellfeTown_PlayerToLab_1
# 35 "data/maps/BellfeTown/scripts.pory"
	waitmovement 0
# 37 "data/maps/BellfeTown/scripts.pory"
	warp MAP_ROUTE1, 59, 7
# 38 "data/maps/BellfeTown/scripts.pory"
	waitstate
# 39 "data/maps/BellfeTown/scripts.pory"
	releaseall
	end


# 43 "data/maps/BellfeTown/scripts.pory"
BellfeTown_RivalToPlayer_1:
# 44 "data/maps/BellfeTown/scripts.pory"
	walk_right
# 44 "data/maps/BellfeTown/scripts.pory"
	walk_right
# 44 "data/maps/BellfeTown/scripts.pory"
	walk_right
# 45 "data/maps/BellfeTown/scripts.pory"
	face_up
	step_end

# 47 "data/maps/BellfeTown/scripts.pory"
BellfeTown_RivalToPlayer_2:
# 48 "data/maps/BellfeTown/scripts.pory"
	walk_fast_up
	step_end

# 54 "data/maps/BellfeTown/scripts.pory"
BellfeTown_RivalToLab_1:
# 55 "data/maps/BellfeTown/scripts.pory"
	walk_fast_down
# 56 "data/maps/BellfeTown/scripts.pory"
	walk_fast_left
# 56 "data/maps/BellfeTown/scripts.pory"
	walk_fast_left
# 56 "data/maps/BellfeTown/scripts.pory"
	walk_fast_left
	step_end

# 58 "data/maps/BellfeTown/scripts.pory"
BellfeTown_PlayerToLab_1:
# 59 "data/maps/BellfeTown/scripts.pory"
	walk_fast_down
# 59 "data/maps/BellfeTown/scripts.pory"
	walk_fast_down
# 60 "data/maps/BellfeTown/scripts.pory"
	walk_fast_left
# 60 "data/maps/BellfeTown/scripts.pory"
	walk_fast_left
# 60 "data/maps/BellfeTown/scripts.pory"
	walk_fast_left
	step_end

BellfeTown_rivalMsg1::
# 50 "data/maps/BellfeTown/scripts.pory"
	.string "Ah! {PLAYER}! Quickly, follow me!$"
