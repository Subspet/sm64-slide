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
#include "levels/ccm/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_ccm_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _ccm_segment_7SegmentRomStart, _ccm_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _snow_yay0SegmentRomStart, _snow_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _ccm_skybox_yay0SegmentRomStart, _ccm_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group7_yay0SegmentRomStart, _group7_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group7_geoSegmentRomStart, _group7_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group15_yay0SegmentRomStart, _group15_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _ccm_segment_7SegmentRomStart, _ccm_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xb, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd), 
	LOAD_MIO0(0xa, _ccm_skybox_mio0SegmentRomStart, _ccm_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_8), 
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, ccm_geo_00042C), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, ccm_geo_00045C), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, ccm_geo_000494), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, ccm_geo_0004BC), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, ccm_geo_0004E4), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_CABIN_DOOR, cabin_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOW_TREE, snow_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_ROPEWAY_LIFT, ccm_geo_0003D0), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_BASE, ccm_geo_0003F0), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_HEAD, ccm_geo_00040C), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, ccm_area_1),
		WARP_NODE(0x0A, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x11, LEVEL_CCM, 0x01, 0x11, WARP_NO_CHECKPOINT),
		INSTANT_WARP(0x00, 0x02, -6742, 12127, -29127),
		WARP_NODE(0x14, LEVEL_ENDING, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -13526, 8776, -13686, 0, 0, 0, (0x11 << 16) | (0x01 << 8), bhvCheckpoint_Flag),
		OBJECT(MODEL_NONE, -10754, 8717, -13452, 0, 90, 0, (0x11 << 16), bhvWarp),
		OBJECT(MODEL_NONE, -10165, 8895, -13069, 0, -91, 0, (0x16 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -10157, 8895, -13437, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -10149, 8895, -13783, 0, -91, 0, (0x15 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -8355, 8435, -14086, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -6812, 8256, -14008, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -4339, 8075, -14648, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -2528, 7990, -13873, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 388, 7602, -11944, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -35, 7472, -9032, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -2273, 7277, -7735, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -6765, 7002, -7721, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -13008, 6629, -6264, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -11833, 6204, -1169, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -9806, 6085, -1281, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -6074, 5914, -1307, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -1837, 5418, -1103, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -10831, 2833, 2234, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -12937, 2282, 6750, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -8747, 1662, 10338, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -8747, 1662, 10338, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -6267, 327, 4076, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -3323, 670, 4816, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -2164, 967, 7244, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -2164, 967, 7244, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -3679, 1255, 9426, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -6278, -1160, 12639, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -2236, -1820, 10966, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 4880, -367, 7785, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 10141, 2308, 5244, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 5892, 3226, 2375, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 6361, 4982, -1811, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 9608, 6931, -13090, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 9596, 6932, -12748, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 9642, 6928, -13423, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 9321, 6893, -10526, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -10149, 8895, -13783, 0, -91, 0, (0x15 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -11857, 8776, -14561, 0, -91, 0, (0x02 << 16) | (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -11927, 8776, -12217, 0, -91, 0, (0x5 << 16) | (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_MR_BLIZZARD, -4570, 5917, -690, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, -7279, 6147, -1415, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, -7279, 6147, -1415, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, -14324, 6606, -5258, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, -14324, 6606, -5258, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, 3384, 4973, -317, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, 3626, 4576, 791, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, 1419, -1995, 10680, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, 1897, -1436, 9556, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, 489, -1901, 10219, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, 384, 4540, -1521, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, 1008, 4163, 946, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, 1044, 4229, 42, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, -8871, 3365, 2246, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, -13028, 2583, 4293, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, -11546, 2109, 8501, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, 10901, 6116, -1335, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, 9429, 2672, 4751, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, -5385, 1499, 10736, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_NONE, -13524, 9088, -13701, 0, 90, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 90, -13524, 9088, -13701),
		TERRAIN(ccm_area_1_collision),
		MACRO_OBJECTS(ccm_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_SLIDE),
		TERRAIN_TYPE(TERRAIN_SLIDE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, ccm_area_2),
		WARP_NODE(0x0A, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x12, LEVEL_CCM, 0x02, 0x12, WARP_NO_CHECKPOINT),
		WARP_NODE(0x13, LEVEL_CCM, 0x02, 0x13, WARP_NO_CHECKPOINT),
		WARP_NODE(0x69, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -4646, 8659, -14868, 0, 0, 0, (0x12 << 16) | (02 << 8), bhvCheckpoint_Flag),
		OBJECT(MODEL_NONE, 9309, -2950, 9912, 0, 0, 0, (0x13 << 16) | (02 << 8), bhvCheckpoint_Flag),
		OBJECT(MODEL_NONE, 5643, -2950, 10420, 0, 0, 0, (0x13 << 16) | (02 << 8), bhvCheckpoint_Flag),
		OBJECT(MODEL_NONE, 11141, -2950, 7468, 0, 0, 0, (0x13 << 16) | (02 << 8), bhvCheckpoint_Flag),
		OBJECT(MODEL_NONE, -4626, 7799, -13755, 0, 0, 0, (0x12 << 16), bhvWarp),
		OBJECT(MODEL_NONE, 10135, -3009, 9076, 0, 25, 0, (0x13 << 16), bhvWarp),
		OBJECT(MODEL_NONE, -10321, 6390, -8633, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -7532, 6736, -9428, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -5604, -226, 10143, 0, -107, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -1001, -903, 10928, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 3169, -1668, 10724, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -205, 2350, -3780, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 2186, 2723, -4259, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 4767, 3130, -4260, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 6689, 5460, -10921, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 1990, 6230, -10496, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -1838, 6931, -10394, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 10073, 609, -1658, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 11932, -1110, 2431, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -5270, 633, 4140, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -11869, 4561, -1269, 0, -91, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -2855, -617, 10670, 0, -107, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -8415, 406, 6751, 0, -168, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, -5042, 1429, 764, 0, 159, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 8721, 3981, -6093, 0, 142, 0, (0x00 << 8), bhvCoinFormation),
		OBJECT(MODEL_TOAD, 9683, -2950, 11114, 0, 23, 0, (175 << 24), bhvToadMessage),
		OBJECT(MODEL_NONE, 14935, -2950, 8828, 0, 0, 0, (0x69 << 16), bhvWarp),
		TERRAIN(ccm_area_2_collision),
		MACRO_OBJECTS(ccm_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_SLIDE),
		TERRAIN_TYPE(TERRAIN_SLIDE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 90, -13524, 9088, -13701),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
