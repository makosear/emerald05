RustboroCity_PokemonSchool_MapScripts::
# 5 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_PokemonSchool_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 15 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_PokemonSchool_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

RustboroCity_PokemonSchool_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_unset FLAG_MET_WALLY_RUSTBORO, RustboroCity_PokemonSchool_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
RustboroCity_PokemonSchool_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	compare VAR_RUSTBORO_CITY_SCHOOL_STATE, 3
	goto_if_ge RustboroCity_PokemonSchool_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

RustboroCity_PokemonSchool_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setmetatile 5, 10, 0x206, FALSE
# 8 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setmetatile 6, 10, 0x207, FALSE
	goto RustboroCity_PokemonSchool_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

RustboroCity_PokemonSchool_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 12 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	removeobject 8
	return

RustboroCity_PokemonSchool_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 16 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	map_script_2 VAR_RUSTBORO_CITY_SCHOOL_STATE, 1, RustboroCity_PokemonSchool_EventScript_WallyEncounter
	.2byte 0


RustboroCity_PokemonSchool_EventScript_WallyEncounter::
# 21 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lockall
# 22 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement 8, RustboroCity_PokemonSchool_EventScript_WallyEncounter_Movement_0
# 23 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_PokemonSchool_EventScript_WallyEncounter_Movement_0
# 24 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 25 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_WallyEncounter_Text_0, MSGBOX_DEFAULT
# 26 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 27 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_WallyEncounter_Text_1
# 28 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 29 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	fadescreen FADE_TO_BLACK
# 30 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setobjectxy LOCALID_PLAYER, 1, 8
# 31 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_PokemonSchool_EventScript_WallyEncounter_Movement_1
# 32 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	special SpawnCameraObject
# 33 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RustboroCity_PokemonSchool_EventScript_WallyEncounter_Movement_2
# 34 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 35 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	special RemoveCameraObject
# 36 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setobjectxy 8, 1, 6
# 37 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement 8, RustboroCity_PokemonSchool_EventScript_WallyEncounter_Movement_1
# 38 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 39 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 41 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_WallyEncounter_Text_2, MSGBOX_DEFAULT
# 42 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 43 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_WallyEncounter_Text_3
# 44 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 45 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement 8, RustboroCity_PokemonSchool_EventScript_WallyEncounter_Movement_3
# 46 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 47 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_WallyEncounter_Text_4, MSGBOX_DEFAULT
# 48 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 49 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement 6, RustboroCity_PokemonSchool_EventScript_WallyEncounter_Movement_4
# 50 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 51 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_WallyEncounter_Text_5, MSGBOX_DEFAULT
# 52 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_WallyEncounter_Text_6, MSGBOX_DEFAULT
# 53 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_WallyEncounter_Text_7, MSGBOX_DEFAULT
# 54 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_WallyEncounter_Text_8, MSGBOX_YESNO
RustboroCity_PokemonSchool_EventScript_WallyEncounter_2:
# 55 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne RustboroCity_PokemonSchool_EventScript_WallyEncounter_3
# 60 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_WallyEncounter_Text_10
# 61 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	special HealPlayerParty
# 62 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setrespawn HEAL_LOCATION_RUSTBORO_CITY
# 63 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement 8, RustboroCity_PokemonSchool_EventScript_WallyEncounter_Movement_5
# 64 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_WallyEncounter_Text_11, MSGBOX_DEFAULT
# 65 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setvar VAR_RUSTBORO_CITY_SCHOOL_STATE, 2
# 66 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_RUSTBORO, RustboroCity_PokemonSchool_Text_WallyDefeat
# 67 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_WallyEncounter_Text_12
# 68 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_WallyEncounter_Text_13
# 69 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement 8, RustboroCity_PokemonSchool_EventScript_WallyEncounter_Movement_6
# 70 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	playse SE_EXIT
# 71 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	removeobject 8
# 72 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setmetatile 5, 10, 0x006, FALSE
# 73 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setmetatile 6, 10, 0x007, FALSE
# 75 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setvar VAR_RUSTBORO_CITY_SCHOOL_STATE, 3
# 76 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	releaseall
	end

RustboroCity_PokemonSchool_EventScript_WallyEncounter_3:
# 56 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 57 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_WallyEncounter_Text_9, MSGBOX_YESNO
	goto RustboroCity_PokemonSchool_EventScript_WallyEncounter_2


RustboroCity_PokemonSchool_EventScript_Blackboard::
# 84 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lockall
# 85 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_Blackboard_Text_0, MSGBOX_DEFAULT
# 86 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	return


RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic::
# 90 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	message RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_Text_0
# 91 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 92 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	multichoicegrid 8, 1, MULTI_STATUS_INFO, 3, FALSE
# 94 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	switch VAR_RESULT
# 95 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 0, RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_2
# 98 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 1, RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_3
# 101 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 2, RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_4
# 104 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 3, RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_5
# 107 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 4, RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_6
# 110 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 5, RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_7
# 111 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_7
	return

RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_2:
# 96 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_Text_1, MSGBOX_DEFAULT
# 97 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	return

RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_3:
# 99 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_Text_2, MSGBOX_DEFAULT
# 100 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	return

RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_4:
# 102 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_Text_3, MSGBOX_DEFAULT
# 103 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	return

RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_5:
# 105 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_Text_4, MSGBOX_DEFAULT
# 106 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	return

RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_6:
# 108 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_Text_5, MSGBOX_DEFAULT
# 109 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	return

RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_7:
# 112 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	releaseall
	end


RustboroCity_PokemonSchool_EventScript_GameboyKid1::
# 118 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_GameboyKid1_Text_0, MSGBOX_NPC
	return


RustboroCity_PokemonSchool_EventScript_GameboyKid2::
# 122 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_GameboyKid2_Text_0, MSGBOX_NPC
	return


RustboroCity_PokemonSchool_EventScript_RichBoy::
# 126 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_RichBoy_Text_0, MSGBOX_NPC
	return


RustboroCity_PokemonSchool_EventScript_Lass::
# 130 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_Lass_Text_0, MSGBOX_NPC
	return


RustboroCity_PokemonSchool_EventScript_SchoolKidM::
# 134 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_SchoolKidM_Text_0, MSGBOX_NPC
	return


RustboroCity_PokemonSchool_EventScript_StudentNotebook::
# 138 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_StudentNotebook_Text_0, MSGBOX_SIGN
	return


RustboroCity_PokemonSchool_EventScript_Teacher::
# 142 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock
# 143 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	faceplayer
# 145 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_RECEIVED_QUICK_CLAW, RustboroCity_PokemonSchool_EventScript_Teacher_2
# 154 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RustboroCity_PokemonSchool_EventScript_Teacher_5
# 173 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq RustboroCity_PokemonSchool_EventScript_Teacher_6
RustboroCity_PokemonSchool_EventScript_Teacher_4:
# 194 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_Teacher_Text_1, MSGBOX_DEFAULT
# 195 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	giveitem ITEM_QUICK_CLAW
# 197 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_PokemonSchool_EventScript_Teacher_10
RustboroCity_PokemonSchool_EventScript_Teacher_9:
# 201 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 202 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 203 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 204 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_RECEIVED_QUICK_CLAW
# 205 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end

RustboroCity_PokemonSchool_EventScript_Teacher_2:
# 146 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_Teacher_Text_0, MSGBOX_DEFAULT
# 147 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 148 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 149 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 150 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end

RustboroCity_PokemonSchool_EventScript_Teacher_5:
# 155 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_EventScript_Teacher_Movement_0
# 172 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
	goto RustboroCity_PokemonSchool_EventScript_Teacher_4

RustboroCity_PokemonSchool_EventScript_Teacher_6:
# 174 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_EventScript_Teacher_Movement_1
# 191 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
	goto RustboroCity_PokemonSchool_EventScript_Teacher_4

RustboroCity_PokemonSchool_EventScript_Teacher_10:
# 198 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto RustboroCity_PokemonSchool_EventScript_Teacher_9


RustboroCity_PokemonSchool_EventScript_Scott::
# 210 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock
# 211 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	faceplayer
# 213 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE, RustboroCity_PokemonSchool_EventScript_Scott_2
# 216 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_RUSTBORO, RustboroCity_PokemonSchool_EventScript_Scott_3
# 225 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_Scott_4
# 231 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_Scott_Text_3, MSGBOX_DEFAULT
# 232 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 233 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_MET_SCOTT_RUSTBORO
RustboroCity_PokemonSchool_EventScript_Scott_1:
# 236 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end

RustboroCity_PokemonSchool_EventScript_Scott_2:
# 214 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_Scott_Text_0, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_Scott_1

RustboroCity_PokemonSchool_EventScript_Scott_3:
# 217 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_Scott_9
# 222 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_Scott_Text_0, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_Scott_1

RustboroCity_PokemonSchool_EventScript_Scott_4:
# 226 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_Scott_Text_2, MSGBOX_DEFAULT
# 227 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 228 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE
	goto RustboroCity_PokemonSchool_EventScript_Scott_1

RustboroCity_PokemonSchool_EventScript_Scott_9:
# 218 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_Scott_Text_1, MSGBOX_DEFAULT
# 219 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 220 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE
	goto RustboroCity_PokemonSchool_EventScript_Scott_1


# 22 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_WallyEncounter_Movement_0:
# 22 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 22 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 22 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 22 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
	step_end

# 31 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_WallyEncounter_Movement_1:
# 31 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	face_up
	step_end

# 33 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_WallyEncounter_Movement_2:
# 33 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 33 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 33 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 33 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 33 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 33 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
	step_end

# 45 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_WallyEncounter_Movement_3:
# 45 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	face_down
	step_end

# 49 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_WallyEncounter_Movement_4:
# 49 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 49 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 49 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 49 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 49 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
	step_end

# 63 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_WallyEncounter_Movement_5:
# 63 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 63 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 63 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 63 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	face_right
	step_end

# 69 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_WallyEncounter_Movement_6:
# 69 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 69 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 69 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 69 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 69 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 69 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 69 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 69 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	face_down
	step_end

# 155 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Teacher_Movement_0:
# 156 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 156 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 157 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 157 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 158 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 158 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 159 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_down
# 160 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 160 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 160 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 161 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 162 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_left
# 163 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 163 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 164 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 165 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 165 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 166 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_8
# 167 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 168 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 169 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 169 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 170 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 170 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
	step_end

# 174 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Teacher_Movement_1:
# 175 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 176 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 176 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 177 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 178 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_down
# 179 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 179 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 179 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 180 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 181 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_left
# 182 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 182 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 183 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 184 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 184 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 185 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_8
# 186 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 187 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 187 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 188 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 188 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 189 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
	step_end

RustboroCity_PokemonSchool_EventScript_WallyEncounter_Text_0:
# 25 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "WALLY: U-umm, excuse me. I just got my\n"
	.string "first POKéMON and I wanted to learn\l"
	.string "more about taking care of it...$"

RustboroCity_PokemonSchool_EventScript_WallyEncounter_Text_1:
# 27 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "PROFESSOR: You're just in time. Please\n"
	.string "take a seat, you two.$"

RustboroCity_PokemonSchool_EventScript_WallyEncounter_Text_2:
# 41 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "PROFESSOR: And that's all for today,\n"
	.string "everyone. You should be able to\l"
	.string "understand how to strengthen your\l"
	.string "bond with POKéMON!$"

RustboroCity_PokemonSchool_EventScript_WallyEncounter_Text_3:
# 43 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "WALLY: That... was a very useful class.$"

RustboroCity_PokemonSchool_EventScript_WallyEncounter_Text_4:
# 47 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "WALLY: There's so much more to this\n"
	.string "than I thought. I want to learn more\l"
	.string "and more and more... and be able to\l"
	.string "connect with RALTS.$"

RustboroCity_PokemonSchool_EventScript_WallyEncounter_Text_5:
# 51 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "PROFESSOR: That objective is\n"
	.string "admirable! You have the spirit of a\l"
	.string "POKéMON trainer.$"

RustboroCity_PokemonSchool_EventScript_WallyEncounter_Text_6:
# 52 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "WALLY: W-what...? No, I'm not a trainer...\n"
	.string "I've never even had a battle before.$"

RustboroCity_PokemonSchool_EventScript_WallyEncounter_Text_7:
# 53 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "PROFESSOR: Hm. Well, that can be\n"
	.string "ammended right now. Why don't you two\l"
	.string "have a battle and see how you do?$"

RustboroCity_PokemonSchool_EventScript_WallyEncounter_Text_8:
# 54 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "WALLY: A battle? I-I don't know if I'm\n"
	.string "ready for that... What do you think,\l"
	.string "{PLAYER}?$"

RustboroCity_PokemonSchool_EventScript_WallyEncounter_Text_9:
# 57 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "PROFESSOR: Wrong answer! You should\n"
	.string "have a battle.$"

RustboroCity_PokemonSchool_EventScript_WallyEncounter_Text_10:
# 60 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "PROFESSOR: Good! First, let me heal your\n"
	.string "POKéMON.$"

RustboroCity_PokemonSchool_EventScript_WallyEncounter_Text_11:
# 64 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "WALLY: O-okay... I'll do my best!$"

RustboroCity_PokemonSchool_EventScript_WallyEncounter_Text_12:
# 67 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "WALLY: ...I know I lost, b-but... I feel\n"
	.string "like I gained something way more\l"
	.string "important!$"

RustboroCity_PokemonSchool_EventScript_WallyEncounter_Text_13:
# 68 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "WALLY: Thank you very much, professor!\n"
	.string "Now, I have to go... my parents must be\l"
	.string "wondering where I am. See you, {PLAYER}!$"

RustboroCity_PokemonSchool_EventScript_Blackboard_Text_0:
# 85 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "The blackboard lists status changes\n"
	.string "that may affect POKéMON in battle.$"

RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_Text_0:
# 90 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Which topic do you want to read?$"

RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_Text_1:
# 96 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a POKéMON is poisoned, it will\n"
	.string "steadily lose HP.\p"
	.string "The effects of poison remain after a\n"
	.string "battle.\p"
	.string "A poisoned POKéMON's HP will drop while\n"
	.string "it is traveling.\p"
	.string "Heal a poisoning using an ANTIDOTE.$"

RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_Text_2:
# 99 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a POKéMON becomes paralyzed, its\n"
	.string "SPEED drops.\p"
	.string "It may also not be able to move while it\n"
	.string "is in battle.\p"
	.string "Paralysis remains after battle.\p"
	.string "Cure it using a PARLYZ HEAL.$"

RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_Text_3:
# 102 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a POKéMON falls asleep, it will be\n"
	.string "unable to attack.\p"
	.string "A POKéMON may wake up on its own, but if\n"
	.string "a battle ends while it is sleeping, it\l"
	.string "will stay asleep.\p"
	.string "Wake it up using an AWAKENING.$"

RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_Text_4:
# 105 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A burn reduces ATTACK power, and it\n"
	.string "steadily reduces the victim's HP.\p"
	.string "A burn lingers after battle.\p"
	.string "Cure a burn using a BURN HEAL.$"

RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_Text_5:
# 108 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a POKéMON is frozen, it becomes\n"
	.string "completely helpless.\p"
	.string "It will remain frozen after battle.\p"
	.string "Thaw it out using an ICE HEAL.$"

RustboroCity_PokemonSchool_EventScript_GameboyKid1_Text_0:
# 118 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I'm trading POKéMON with my friend right\n"
	.string "now.$"

RustboroCity_PokemonSchool_EventScript_GameboyKid2_Text_0:
# 122 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I always wanted a SEEDOT, and I'm\n"
	.string "finally getting one!$"

RustboroCity_PokemonSchool_EventScript_RichBoy_Text_0:
# 126 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKéMON can hold items, but they don't\n"
	.string "know what to do with man-made items\l"
	.string "like POTION and ANTIDOTE.$"

RustboroCity_PokemonSchool_EventScript_Lass_Text_0:
# 130 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "You know how some POKéMON moves can\n"
	.string "confuse a POKéMON?\p"
	.string "A confused POKéMON will sometimes\n"
	.string "attack itself without meaning to.\p"
	.string "But once it leaves battle, it will return\n"
	.string "to normal.$"

RustboroCity_PokemonSchool_EventScript_SchoolKidM_Text_0:
# 134 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A POKéMON holding a BERRY will heal\n"
	.string "itself…\p"
	.string "There are many kinds of items that\n"
	.string "POKéMON can hold…\p"
	.string "Boy, it sure is hard taking notes down…$"

RustboroCity_PokemonSchool_EventScript_StudentNotebook_Text_0:
# 138 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's this student's notebook…\p"
	.string "POKéMON are to be caught using POKé\n"
	.string "BALLS.\p"
	.string "Up to six POKéMON can accompany a\n"
	.string "TRAINER.\p"
	.string "A TRAINER is someone who catches\n"
	.string "POKéMON, raises them, and battles with\l"
	.string "them.\p"
	.string "A TRAINER's mission is to defeat the\n"
	.string "strong TRAINERS who await challengers\l"
	.string "in POKéMON GYMS.$"

RustboroCity_PokemonSchool_EventScript_Teacher_Text_0:
# 146 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A POKéMON holding the QUICK CLAW will\n"
	.string "occasionally speed up and get to move\l"
	.string "before its opponent.\p"
	.string "There are many other items that are\n"
	.string "meant to be held by POKéMON.\p"
	.string "Just those alone will give you many\n"
	.string "topics to study!$"

RustboroCity_PokemonSchool_EventScript_Teacher_Text_1:
# 194 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Students who don't study get a little\n"
	.string "taste of my QUICK CLAW.\p"
	.string "Whether or not you are a good student\n"
	.string "will be evident from the way you use\l"
	.string "this item.$"

RustboroCity_PokemonSchool_EventScript_Scott_Text_0:
# 214 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "SCOTT: Hmm…\p"
	.string "The talent levels of the students here\n"
	.string "are unknown. The potential's there.$"

RustboroCity_PokemonSchool_EventScript_Scott_Text_1:
# 218 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "SCOTT: Oh, what's that?\p"
	.string "It's a STONE BADGE, isn't it?\n"
	.string "That's pretty impressive, I'd say.\p"
	.string "But, you know, I would've loved to see\n"
	.string "you in battle.\p"
	.string "It's hard to tell what you're like as a\n"
	.string "TRAINER from a LEAGUE BADGE.$"

RustboroCity_PokemonSchool_EventScript_Scott_Text_2:
# 226 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Hello? Didn't we meet before?\n"
	.string "I think back in PETALBURG CITY.\p"
	.string "Let me introduce myself.\n"
	.string "My name's SCOTT.\p"
	.string "I've been traveling everywhere in\n"
	.string "search of outstanding TRAINERS.\p"
	.string "More specifically, I'm looking for\n"
	.string "POKéMON battle experts.\p"
	.string "Oh, what's that?\n"
	.string "It's a STONE BADGE, isn't it?\p"
	.string "That's pretty impressive, I'd say, for a\n"
	.string "starting TRAINER like yourself.\p"
	.string "But, you know, I would've loved to see\n"
	.string "you in battle.\p"
	.string "It's hard to tell what you're like as a\n"
	.string "TRAINER from a LEAGUE BADGE.$"

RustboroCity_PokemonSchool_EventScript_Scott_Text_3:
# 231 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Hello? Didn't we meet before?\n"
	.string "I think back in PETALBURG CITY.\p"
	.string "Let me introduce myself.\n"
	.string "My name's SCOTT.\p"
	.string "I've been traveling everywhere in\n"
	.string "search of outstanding TRAINERS.\p"
	.string "More specifically, I'm looking for\n"
	.string "POKéMON battle experts.\p"
	.string "So, what brings you to this SCHOOL?\n"
	.string "Are you a TRAINER, too?\p"
	.string "The first thing you should do is to have\n"
	.string "a POKéMON learn the move CUT.\p"
	.string "If I remember correctly, someone in\n"
	.string "this town has CUT.$"

RustboroCity_PokemonSchool_Text_WallyDefeat::
# 80 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Ah, that was...$"
