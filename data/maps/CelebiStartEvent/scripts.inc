# 1 "data/maps/CelebiStartEvent/scripts.pory"

# 2 "data/maps/CelebiStartEvent/scripts.pory"
CelebiStartEvent_MapScripts::
# 3 "data/maps/CelebiStartEvent/scripts.pory"
    map_script MAP_SCRIPT_ON_LOAD, init
# 4 "data/maps/CelebiStartEvent/scripts.pory"
	.byte 0

CelebiStartEvent_TriggerSpawnScript::
# 8 "data/maps/CelebiStartEvent/scripts.pory"
	lockall
# 9 "data/maps/CelebiStartEvent/scripts.pory"
	clearflag FLAG_TEMP_1
# 10 "data/maps/CelebiStartEvent/scripts.pory"
	playmoncry SPECIES_HO_OH, 70
# 12 "data/maps/CelebiStartEvent/scripts.pory"
	playse SE_PIN
# 13 "data/maps/CelebiStartEvent/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 14 "data/maps/CelebiStartEvent/scripts.pory"
	waitmovement 0
# 15 "data/maps/CelebiStartEvent/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StepBack
# 16 "data/maps/CelebiStartEvent/scripts.pory"
	waitmovement 0
# 18 "data/maps/CelebiStartEvent/scripts.pory"
	special SpawnCameraObject
# 19 "data/maps/CelebiStartEvent/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, toHoOh
# 20 "data/maps/CelebiStartEvent/scripts.pory"
	waitmovement 0
# 21 "data/maps/CelebiStartEvent/scripts.pory"
	playmoncry SPECIES_HO_OH, 70
# 22 "data/maps/CelebiStartEvent/scripts.pory"
	waitmoncry
# 24 "data/maps/CelebiStartEvent/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, fromHoOh
# 25 "data/maps/CelebiStartEvent/scripts.pory"
	waitmovement 0
# 26 "data/maps/CelebiStartEvent/scripts.pory"
	special RemoveCameraObject
# 28 "data/maps/CelebiStartEvent/scripts.pory"
	setvar VAR_TESTING, 1
# 29 "data/maps/CelebiStartEvent/scripts.pory"
	releaseall
	return


CelebiStartEvent_FlyAway::
# 33 "data/maps/CelebiStartEvent/scripts.pory"
	lockall
# 35 "data/maps/CelebiStartEvent/scripts.pory"
	playse SE_PIN
# 36 "data/maps/CelebiStartEvent/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 37 "data/maps/CelebiStartEvent/scripts.pory"
	waitmovement 0
# 38 "data/maps/CelebiStartEvent/scripts.pory"
	faceplayer
# 39 "data/maps/CelebiStartEvent/scripts.pory"
	waitmovement 0
# 40 "data/maps/CelebiStartEvent/scripts.pory"
	applymovement 1, toPlayer_1
# 41 "data/maps/CelebiStartEvent/scripts.pory"
	waitmovement 0
# 43 "data/maps/CelebiStartEvent/scripts.pory"
	playmoncry SPECIES_HO_OH, 70
# 44 "data/maps/CelebiStartEvent/scripts.pory"
	waitmoncry
# 46 "data/maps/CelebiStartEvent/scripts.pory"
	applymovement 1, toPlayer_2
# 47 "data/maps/CelebiStartEvent/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, lookUp
# 48 "data/maps/CelebiStartEvent/scripts.pory"
	waitmovement 0
# 50 "data/maps/CelebiStartEvent/scripts.pory"
	removeobject 1
# 51 "data/maps/CelebiStartEvent/scripts.pory"
	setflag FLAG_TEMP_1
# 52 "data/maps/CelebiStartEvent/scripts.pory"
	clearflag FLAG_TEMP_2
# 53 "data/maps/CelebiStartEvent/scripts.pory"
	releaseall
	return


CelebiStartEvent_ReceivedItem::
# 57 "data/maps/CelebiStartEvent/scripts.pory"
	lockall
# 58 "data/maps/CelebiStartEvent/scripts.pory"
	giveitem ITEM_SACRED_ASH, 1
# 59 "data/maps/CelebiStartEvent/scripts.pory"
	setflag FLAG_TEMP_2
# 60 "data/maps/CelebiStartEvent/scripts.pory"
	removeobject 2
# 61 "data/maps/CelebiStartEvent/scripts.pory"
	releaseall
	return


init::
# 65 "data/maps/CelebiStartEvent/scripts.pory"
	setflag FLAG_TEMP_1
# 66 "data/maps/CelebiStartEvent/scripts.pory"
	setflag FLAG_TEMP_2
	return


# 69 "data/maps/CelebiStartEvent/scripts.pory"
StepBack:
# 70 "data/maps/CelebiStartEvent/scripts.pory"
	jump_in_place_up
	step_end

# 73 "data/maps/CelebiStartEvent/scripts.pory"
toHoOh:
# 74 "data/maps/CelebiStartEvent/scripts.pory"
	walk_diag_northeast
# 74 "data/maps/CelebiStartEvent/scripts.pory"
	walk_diag_northeast
# 74 "data/maps/CelebiStartEvent/scripts.pory"
	walk_diag_northeast
# 74 "data/maps/CelebiStartEvent/scripts.pory"
	walk_diag_northeast
# 74 "data/maps/CelebiStartEvent/scripts.pory"
	walk_diag_northeast
# 75 "data/maps/CelebiStartEvent/scripts.pory"
	walk_up
# 75 "data/maps/CelebiStartEvent/scripts.pory"
	walk_up
# 75 "data/maps/CelebiStartEvent/scripts.pory"
	walk_up
	step_end

# 78 "data/maps/CelebiStartEvent/scripts.pory"
toPlayer_1:
# 79 "data/maps/CelebiStartEvent/scripts.pory"
	walk_left
# 79 "data/maps/CelebiStartEvent/scripts.pory"
	walk_left
# 79 "data/maps/CelebiStartEvent/scripts.pory"
	walk_left
# 79 "data/maps/CelebiStartEvent/scripts.pory"
	walk_left
# 79 "data/maps/CelebiStartEvent/scripts.pory"
	walk_left
	step_end

# 82 "data/maps/CelebiStartEvent/scripts.pory"
toPlayer_2:
# 83 "data/maps/CelebiStartEvent/scripts.pory"
	fly_up
	step_end

# 86 "data/maps/CelebiStartEvent/scripts.pory"
lookUp:
# 87 "data/maps/CelebiStartEvent/scripts.pory"
	face_up
	step_end

# 90 "data/maps/CelebiStartEvent/scripts.pory"
fromHoOh:
# 91 "data/maps/CelebiStartEvent/scripts.pory"
	walk_fast_down
# 91 "data/maps/CelebiStartEvent/scripts.pory"
	walk_fast_down
# 91 "data/maps/CelebiStartEvent/scripts.pory"
	walk_fast_down
# 92 "data/maps/CelebiStartEvent/scripts.pory"
	walk_diag_southwest
# 92 "data/maps/CelebiStartEvent/scripts.pory"
	walk_diag_southwest
# 92 "data/maps/CelebiStartEvent/scripts.pory"
	walk_diag_southwest
# 92 "data/maps/CelebiStartEvent/scripts.pory"
	walk_diag_southwest
# 92 "data/maps/CelebiStartEvent/scripts.pory"
	walk_diag_southwest
	step_end

testtext::
# 95 "data/maps/CelebiStartEvent/scripts.pory"
	.string "Test...$"
