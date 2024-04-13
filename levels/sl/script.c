#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/sl/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_sl_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _sl_segment_7SegmentRomStart, _sl_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _snow_yay0SegmentRomStart, _snow_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _ccm_skybox_yay0SegmentRomStart, _ccm_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group7_yay0SegmentRomStart, _group7_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group7_geoSegmentRomStart, _group7_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group15_yay0SegmentRomStart, _group15_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _sl_segment_7SegmentRomStart, _sl_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0(0xb, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_8), 
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_SL_SNOW_TRIANGLE, sl_geo_000390), 
	LOAD_MODEL_FROM_GEO(MODEL_SL_CRACKED_ICE, sl_geo_000360), 
	LOAD_MODEL_FROM_GEO(MODEL_SL_CRACKED_ICE_CHUNK, sl_geo_000378), 
	LOAD_MODEL_FROM_GEO(MODEL_SL_SNOW_TREE, snow_tree_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, sl_area_1),
		WARP_NODE(0x0A, LEVEL_SL, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_SL, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_SL, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x12, LEVEL_BOB, 0x01, 0x11, WARP_NO_CHECKPOINT),
		WARP_NODE(0x13, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x77, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x14, LEVEL_SL, 0x01, 0x14, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -6673, 3065, 1292, 0, 0, 0, (0x14 << 16) | (0x01 << 8), bhvCheckpoint_Flag),
		OBJECT(MODEL_NONE, -6393, 2983, 1292, 0, 0, 0, (0x14 << 16) | (0x01 << 8), bhvWarp),
		OBJECT(MODEL_WOODEN_SIGNPOST, -2331, 3065, 1069, 0, -90, 0, (182 << 16), bhvMessagePanel),
		OBJECT(MODEL_NONE, -4149, 3955, 4002, 0, 0, 0, (0x77 << 16), bhvWarp),
		OBJECT(MODEL_CCM_CABIN_DOOR_GLOBAL, -6758, 3065, 1326, 0, 90, 0, (0x12 << 16), bhvDoorWarp),
		OBJECT(MODEL_NONE, -2109, 4891, 1121, 0, 0, 0, (0x13 << 16), bhvWarp),
		OBJECT(MODEL_WOODEN_SIGNPOST, -2320, 3065, 9, 0, -90, 0, (173 << 16), bhvMessagePanel),
		OBJECT(MODEL_TOAD, -3972, 3065, 1596, 0, 90, 0, (174 << 24), bhvToadMessage),
		OBJECT(MODEL_TOAD, -2855, 3065, 1749, 0, -180, 0, (170 << 24), bhvToadMessage),
		OBJECT(MODEL_NONE, -6426, 3376, 1303, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, -6426, 3376, 1303),
		TERRAIN(sl_area_1_collision),
		MACRO_OBJECTS(sl_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_SNOW),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -6426, 3376, 1303),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
