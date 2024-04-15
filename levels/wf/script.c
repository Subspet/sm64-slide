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
#include "levels/wf/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_wf_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _cloud_floor_skybox_yay0SegmentRomStart, _cloud_floor_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _grass_yay0SegmentRomStart, _grass_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group1_yay0SegmentRomStart, _group1_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group1_geoSegmentRomStart, _group1_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_2), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, wf_geo_0007E0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, wf_geo_000820), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, wf_geo_000860), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, wf_geo_000878), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, wf_geo_000890), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08, wf_geo_0008A8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09, wf_geo_0008E8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A, wf_geo_000900), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C, wf_geo_000940), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_GIANT_POLE, wf_geo_000AE0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E, wf_geo_000958), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F, wf_geo_0009A0), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_ROTATING_PLATFORM, wf_geo_0009B8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11, wf_geo_0009D0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12, wf_geo_0009E8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_SMALL_BOMP, wf_geo_000A00), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_LARGE_BOMP, wf_geo_000A40), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_ROTATING_WOODEN_PLATFORM, wf_geo_000A58), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_SLIDING_PLATFORM, wf_geo_000A98), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TUMBLING_BRIDGE_PART, wf_geo_000AB0), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TUMBLING_BRIDGE, wf_geo_000AC8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_TRAPEZOID_PLATORM, wf_geo_000AF8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM, wf_geo_000B10), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM_UNUSED, wf_geo_000B38), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM_ELEVATOR, wf_geo_000B60), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_BREAKABLE_WALL_RIGHT, wf_geo_000B78), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_BREAKABLE_WALL_LEFT, wf_geo_000B90), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_KICKABLE_BOARD, wf_geo_000BA8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_DOOR, wf_geo_000BE0), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_KICKABLE_BOARD_FELLED, wf_geo_000BC8), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, wf_area_1),
		WARP_NODE(0x0A, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x41, LEVEL_WF, 0x01, 0x41, WARP_NO_CHECKPOINT),
		INSTANT_WARP(0x00, 0x02, 11196, 9024, -8200),
		OBJECT(MODEL_NONE, 11581, 9145, 8118, 0, 0, 0, (0x41 << 16) | (0x01 << 8), bhvCheckpoint_Flag),
		OBJECT(MODEL_NONE, 10896, 8916, 8094, 0, -90, 0, (0x41 << 16), bhvWarp),
		OBJECT(MODEL_NONE, 10946, 9169, 7877, 0, 90, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 1199, 7123, 6223, 0, -180, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 9942, 8941, 7854, 0, 90, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 1199, 7232, 6862, 0, -180, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 1199, 7009, 5555, 0, -180, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 8696, 8727, 8343, 0, 90, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 4239, 6105, 2266, 0, 90, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 7641, 8557, 8343, 0, 90, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 6656, 8393, 7789, 0, 90, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 7302, 5401, 2436, 0, 90, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 10078, 4942, 2436, 0, 90, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 5615, 8225, 8286, 0, 90, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 12507, 6103, 1235, 0, -180, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 12698, 6103, 1235, 0, -180, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 3789, 7812, 7764, 0, 90, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 3779, 7812, 8261, 0, 90, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 12863, 6103, 1235, 0, -180, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 13051, 6103, 1235, 0, -180, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 2248, 7565, 7747, 0, 90, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 2238, 7564, 8244, 0, 90, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 12507, 6046, 466, 0, -180, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 12698, 6046, 466, 0, -180, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 12863, 6046, 466, 0, -180, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 13051, 6046, 466, 0, -180, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 12507, 5834, -347, 0, -180, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 12698, 5834, -347, 0, -180, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 12863, 5834, -347, 0, -180, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 13051, 5834, -347, 0, -180, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 12705, 5518, -4812, 0, -180, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 12705, 5388, -5786, 0, -180, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 12705, 5099, -7061, 0, -180, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 7383, 3287, -4936, 0, 90, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 7646, 3287, -4936, 0, 90, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 7383, 3456, -5592, 0, 90, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 7646, 3456, -5592, 0, 90, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 7383, 3603, -6415, 0, 90, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 7646, 3603, -6415, 0, 90, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 7383, 3806, -7243, 0, 90, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 7646, 3806, -7243, 0, 90, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 7383, 3873, -7928, 0, 90, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 7646, 3873, -7928, 0, 90, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 6957, 3752, -10914, 0, 90, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 8180, 3663, -11090, 0, 90, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 5884, 3357, -11057, 0, 90, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 3868, 2439, -11058, 0, 90, 0, (0x02 << 8), bhvCoinFormation),
		OBJECT(MODEL_NONE, 12428, 9264, 7978, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, 12428, 9264, 7978),
		TERRAIN(wf_area_1_collision),
		MACRO_OBJECTS(wf_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_SLIDE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, wf_area_2),
		WARP_NODE(0x0A, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		INSTANT_WARP(0x00, 0x03, 6953, 13849, -3376),
		WARP_NODE(0x42, LEVEL_WF, 0x02, 0x42, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 10397, 8250, -11843, 0, 0, 0, (0x42 << 16) | (0x02 << 8), bhvCheckpoint_Flag),
		OBJECT(MODEL_NONE, 9711, 8148, -11867, 0, -90, 0, (0x42 << 16), bhvWarp),
		OBJECT(MODEL_HLASER, 6910, 6712, -5421, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 7110, 6712, -5421, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 6510, 6712, -5421, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 7310, 6712, -5421, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 6710, 6712, -5421, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 6310, 6712, -5421, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_LASER, 7264, 7471, -9884, 0, 0, -90, (0 << 24), bhvLaser),
		OBJECT(MODEL_LASER, 6323, 7471, -9884, 0, 0, -90, (0 << 24), bhvLaser),
		OBJECT(MODEL_LASER, 7264, 7239, -8551, 0, 0, -90, (0 << 24), bhvLaser),
		OBJECT(MODEL_LASER, 6753, 7239, -8551, 0, 0, -90, (0 << 24), bhvLaser),
		OBJECT(MODEL_LASER, 6586, 6932, -6845, 0, 0, -90, (0 << 24), bhvLaser),
		OBJECT(MODEL_LASER, 6323, 6932, -6845, 0, 0, -90, (0 << 24), bhvLaser),
		OBJECT(MODEL_LASER, 7002, 7239, -8551, 0, 0, -90, (0 << 24), bhvLaser),
		OBJECT(MODEL_LASER, 6846, 6932, -6845, 0, 0, -90, (0 << 24), bhvLaser),
		OBJECT(MODEL_LASER, 5185, 6069, -3579, 0, 0, -90, (4 << 24), bhvLaser),
		OBJECT(MODEL_NONE, 3790, 6116, -3470, 0, 0, 0, (1 << 24), bhvHLaser),
		OBJECT(MODEL_LASER, 2293, 5560, -3579, 0, 0, -90, (3 << 24), bhvLaser),
		OBJECT(MODEL_LASER, -1039, 4951, -3579, 0, 0, -90, (4 << 24), bhvLaser),
		OBJECT(MODEL_LASER, 3790, 6116, -3670, 0, 90, 0, (1 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 3790, 6116, -3270, 0, 0, 0, (1 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 3790, 6116, -3070, 0, 0, 0, (1 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 3790, 6116, -3870, 0, 0, 0, (1 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 3790, 6116, -4070, 0, 0, 0, (1 << 24), bhvHLaser),
		OBJECT(MODEL_LASER, 1975, 5788, -3670, 0, 90, 0, (1 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 1975, 5788, -3470, 90, 0, -90, (1 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 1975, 5788, -3270, 90, 0, -90, (1 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 1975, 5788, -3070, 90, 0, -90, (1 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 1975, 5788, -3870, 90, 0, -90, (1 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 1975, 5788, -4070, 90, 0, -90, (1 << 24), bhvHLaser),
		OBJECT(MODEL_HLASER, -3681, 3909, -1309, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3481, 3909, -1309, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3281, 3909, -1309, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3881, 3909, -1309, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -4081, 3909, -1309, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -4281, 3909, -1309, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_LASER, -3380, 3909, -1049, 0, 0, -90, (0 << 24), bhvLaser),
		OBJECT(MODEL_LASER, -4183, 3909, -1049, 0, 0, -90, (0 << 24), bhvLaser),
		OBJECT(MODEL_LASER, -3783, 3731, -481, 0, 0, -90, (0 << 24), bhvLaser),
		OBJECT(MODEL_LASER, -3783, 3455, 1067, 0, 0, -90, (1 << 24), bhvLaser),
		OBJECT(MODEL_LASER, -3783, 3389, 1467, 0, 0, -90, (1 << 24), bhvLaser),
		OBJECT(MODEL_LASER, -3783, 3319, 1867, 0, 0, -90, (2 << 24), bhvLaser),
		OBJECT(MODEL_LASER, -3783, 3248, 2267, 0, 0, -90, (2 << 24), bhvLaser),
		OBJECT(MODEL_LASER, -3783, 3176, 2667, 0, 0, -90, (1 << 24), bhvLaser),
		OBJECT(MODEL_LASER, -3783, 3106, 3067, 0, 0, -90, (1 << 24), bhvLaser),
		OBJECT(MODEL_HLASER, -3681, 2888, 4483, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3481, 2888, 4483, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3281, 2888, 4483, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3881, 2888, 4483, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -4081, 2888, 4483, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -4281, 2888, 4483, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_HLASER, -3681, 3299, 5103, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3481, 3299, 5103, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3281, 3299, 5103, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3881, 3299, 5103, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -4081, 3299, 5103, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -4281, 3299, 5103, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_HLASER, -3681, 2552, 6327, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3481, 2552, 6327, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3281, 2552, 6327, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3881, 2552, 6327, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -4081, 2552, 6327, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -4281, 2552, 6327, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_HLASER, -3681, 3085, 6327, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3481, 3085, 6327, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3281, 3085, 6327, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3881, 3085, 6327, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -4081, 3085, 6327, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -4281, 3085, 6327, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_LASER, 8818, -34, 8313, 0, 0, -90, (3 << 24), bhvLaser),
		OBJECT(MODEL_LASER, 10805, -364, 8177, 0, 90, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 10805, -364, 8377, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 10805, -364, 8577, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 10805, -364, 8777, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 10805, -364, 7977, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 10805, -364, 7777, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_HLASER, 11679, -1049, 2738, 0, 0, -90, (3 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 11879, -1049, 2738, 0, 0, -90, (3 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 12079, -1049, 2738, 0, 0, -90, (3 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 11479, -1049, 2738, 0, 0, -90, (3 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 11279, -1049, 2738, 0, 0, -90, (3 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 11079, -1049, 2738, 0, 0, -90, (3 << 24), bhvHLaser),
		OBJECT(MODEL_HLASER, 11679, -1049, 2738, 0, 0, -90, (2 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 11879, -1049, 2738, 0, 0, -90, (2 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 12079, -1049, 2738, 0, 0, -90, (2 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 11479, -1049, 2738, 0, 0, -90, (2 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 11279, -1049, 2738, 0, 0, -90, (2 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 11079, -1049, 2738, 0, 0, -90, (2 << 24), bhvHLaser),
		OBJECT(MODEL_LASER, 11574, -1492, 2738, 0, 0, -90, (2 << 24), bhvLaser),
		OBJECT(MODEL_LASER, 11574, -1492, 2738, 0, 0, -90, (1 << 24), bhvLaser),
		OBJECT(MODEL_LASER, 8735, -2675, -1276, 0, 90, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 8735, -2675, -1076, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 8735, -2675, -876, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 8735, -2675, -676, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 8735, -2675, -1476, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 8735, -2675, -1676, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_LASER, 8735, -2425, -1276, 0, 90, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 8735, -2425, -1076, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 8735, -2425, -876, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 8735, -2425, -676, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 8735, -2425, -1476, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 8735, -2425, -1676, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_LASER, 8121, -2239, -1276, 0, 90, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 8121, -2239, -1076, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 8121, -2239, -876, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 8121, -2239, -676, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 8121, -2239, -1476, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 8121, -2239, -1676, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_HLASER, 11673, -1780, -456, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 11873, -1780, -456, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 12073, -1780, -456, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 11473, -1780, -456, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 11273, -1780, -456, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 11073, -1780, -456, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_LASER, 2825, 1076, 8177, 0, 90, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 2825, 1076, 8377, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_LASER, 11574, -1030, 5370, 0, 0, -90, (5 << 24), bhvLaser),
		OBJECT(MODEL_LASER, 11574, -1030, 5370, 0, 0, -90, (6 << 24), bhvLaser),
		OBJECT(MODEL_NONE, 2825, 1076, 8577, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 2825, 1076, 8777, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_LASER, -4283, 4640, 8177, 0, 90, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -4283, 4640, 8377, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -4283, 4640, 8577, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -4283, 4640, 8777, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -4283, 4640, 7977, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -4283, 4640, 7777, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_LASER, -3305, 4640, 8177, 0, 90, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3305, 4640, 8377, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3305, 4640, 8577, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3305, 4640, 8777, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3305, 4640, 7977, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3305, 4640, 7777, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_HLASER, -3681, 4376, 8780, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3481, 4376, 8780, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3281, 4376, 8780, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3881, 4376, 8780, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -4081, 4376, 8780, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -4281, 4376, 8780, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_HLASER, -3681, 4376, 7783, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3481, 4376, 7783, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3281, 4376, 7783, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3881, 4376, 7783, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -4081, 4376, 7783, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -4281, 4376, 7783, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_LASER, -4077, 4071, 8177, 0, 90, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -4077, 4071, 8377, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -4077, 4071, 8577, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -4077, 4071, 8777, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -4077, 4071, 7977, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -4077, 4071, 7777, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_LASER, -3513, 4071, 8177, 0, 90, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3513, 4071, 8377, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3513, 4071, 8577, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3513, 4071, 8777, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3513, 4071, 7977, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3513, 4071, 7777, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_HLASER, -3681, 3846, 8564, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3481, 3846, 8564, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3281, 3846, 8564, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3881, 3846, 8564, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -4081, 3846, 8564, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -4281, 3846, 8564, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_HLASER, -3681, 3846, 7996, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3481, 3846, 7996, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3281, 3846, 7996, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -3881, 3846, 7996, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -4081, 3846, 7996, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -4281, 3846, 7996, 0, 0, -90, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 2825, 1076, 7977, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 2825, 1076, 7777, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_LASER, 4549, 1471, 8177, 0, 90, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 4549, 1471, 8377, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 4549, 1471, 8577, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 4549, 1471, 8777, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 4549, 1471, 7977, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 4549, 1471, 7777, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_LASER, 1013, 2027, 8177, 0, 90, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 1013, 2027, 8377, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 1013, 2027, 8577, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 1013, 2027, 8777, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 1013, 2027, 7977, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 1013, 2027, 7777, 0, 0, 0, (0 << 24), bhvHLaser),
		TERRAIN(wf_area_2_collision),
		MACRO_OBJECTS(wf_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_SLIDE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(3, wf_area_3),
		WARP_NODE(0x0A, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		INSTANT_WARP(0x00, 0x04, 17370, 2625, 3761),
		WARP_NODE(0x43, LEVEL_WF, 0x03, 0x43, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 13860, 10522, -5803, 0, -90, 0, (0x43 << 16) | (0x03 << 8), bhvCheckpoint_Flag),
		OBJECT(MODEL_NONE, 13884, 10301, -6488, 0, 180, 0, (0x43 << 16), bhvWarp),
		OBJECT(MODEL_FLIPPANEL, 9076, 8392, 1786, 5, 0, 0, (0 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, 9076, 8183, 4177, 5, 0, 0, (0 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, 9076, 7974, 6568, 5, 0, 0, (0 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, 8663, 7524, -4468, 5, 0, 0, (0 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, 6565, 7370, 7294, 5, -90, 0, (1 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, 4175, 7161, 7294, 5, -90, 0, (2 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, 6565, 7370, 8520, 5, -90, 0, (2 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, 4175, 7161, 8520, 5, -90, 0, (1 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, 3099, 6893, 7294, 5, -90, 0, (1 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, 709, 6684, 7294, 5, -90, 0, (2 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, 3099, 6893, 8520, 5, -90, 0, (2 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, 709, 6684, 8520, 5, -90, 0, (1 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, -1569, 5155, 3559, 5, 180, 0, (2 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, -2596, 5155, 3559, 5, 180, 0, (1 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, -1569, 4873, 879, 5, 180, 0, (1 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, -2596, 4873, 879, 5, 180, 0, (0 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, 9463, 7524, -4468, 5, 0, 0, (1 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, 8663, 7664, -6062, 5, 0, 0, (0 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, 9463, 7664, -6062, 5, 0, 0, (1 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, -1569, 4734, -419, 5, 180, 0, (2 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, -2596, 4734, -419, 5, 180, 0, (1 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, 9076, 8462, 989, 5, 0, 0, (1 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, 9076, 8252, 3380, 5, 0, 0, (1 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, 9076, 8043, 5771, 5, 0, 0, (1 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, 8663, 7594, -5265, 5, 0, 0, (0 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, 4972, 7231, 7294, 5, -90, 0, (2 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, 4972, 7231, 8520, 5, -90, 0, (1 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, 1506, 6754, 7294, 5, -90, 0, (2 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, 1506, 6754, 8520, 5, -90, 0, (1 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, -1569, 5015, 2266, 5, 180, 0, (0 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, -2596, 5015, 2266, 5, 180, 0, (2 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, -1569, 4594, -1717, 5, 180, 0, (0 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, 9463, 7594, -5265, 5, 0, 0, (1 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, 8663, 7733, -6859, 5, 0, 0, (0 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, 9463, 7733, -6859, 5, 0, 0, (1 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, -2596, 4594, -1717, 5, 180, 0, (2 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, 9076, 8531, 192, 5, 0, 0, (2 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, 9076, 8322, 2583, 5, 0, 0, (2 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, 9076, 8113, 4974, 5, 0, 0, (2 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, 5768, 7301, 7294, 5, -90, 0, (1 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, 5768, 7301, 8520, 5, -90, 0, (2 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, 2303, 6824, 7294, 5, -90, 0, (1 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, 2303, 6824, 8520, 5, -90, 0, (2 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, 8663, 7803, -7656, 5, 0, 0, (0 << 24), bhvFlipPanel),
		OBJECT(MODEL_FLIPPANEL, 9463, 7803, -7656, 5, 0, 0, (1 << 24), bhvFlipPanel),
		TERRAIN(wf_area_3_collision),
		MACRO_OBJECTS(wf_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_SLIDE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(4, wf_area_4),
		WARP_NODE(0x0A, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		INSTANT_WARP(0x00, 0x05, 13511, 1288, 860),
		WARP_NODE(0x44, LEVEL_WF, 0x04, 0x44, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 14654, 6816, -936, 0, 0, 0, (0x44 << 16) | (0x04 << 8), bhvCheckpoint_Flag),
		OBJECT(MODEL_NONE, 15204, 6726, -960, 0, -90, 0, (0x44 << 16), bhvWarp),
		OBJECT(MODEL_LASER, 13165, 6648, -898, 0, 0, -90, (3 << 24), bhvLaser),
		OBJECT(MODEL_LASER, 13659, 6737, -898, 0, 0, -90, (7 << 24), bhvLaser),
		OBJECT(MODEL_LASER, 13417, 6686, -898, 0, 0, -90, (9 << 24), bhvLaser),
		OBJECT(MODEL_LASER, 11182, 6298, -898, 0, 0, -90, (4 << 24), bhvLaser),
		OBJECT(MODEL_LASER, 10346, 6162, -898, 0, 0, -90, (8 << 24), bhvLaser),
		OBJECT(MODEL_LASER, 10944, 6252, -898, 0, 0, -90, (10 << 24), bhvLaser),
		OBJECT(MODEL_LASER, -183, 4294, -892, 0, 0, -90, (8 << 24), bhvLaser),
		OBJECT(MODEL_LASER, -183, 4294, -1367, 0, 0, -90, (0 << 24), bhvLaser),
		OBJECT(MODEL_LASER, -183, 4294, -426, 0, 0, -90, (0 << 24), bhvLaser),
		OBJECT(MODEL_LASER, -183, 4294, -892, 0, 0, -90, (9 << 24), bhvLaser),
		OBJECT(MODEL_LASER, -1000, 4157, -1029, 0, 0, -90, (0 << 24), bhvLaser),
		OBJECT(MODEL_LASER, -1000, 4157, -778, 0, 0, -90, (0 << 24), bhvLaser),
		OBJECT(MODEL_LASER, 8471, 5820, -898, 0, 0, -90, (0 << 24), bhvLaser),
		OBJECT(MODEL_LASER, 8471, 6133, -997, 0, 90, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 8471, 6133, -797, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 8471, 6133, -597, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 8471, 6133, -397, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 8471, 6133, -1197, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 8471, 6133, -1397, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_LASER, 6869, 5564, -997, 0, 90, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 6869, 5564, -797, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 6869, 5564, -597, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 6869, 5564, -397, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 6869, 5564, -1197, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 6869, 5564, -1397, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_LASER, 6869, 6088, -997, 0, 90, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 6869, 6088, -797, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 6869, 6088, -597, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 6869, 6088, -397, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 6869, 6088, -1197, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 6869, 6088, -1397, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_LASER, 4762, 5173, -997, 0, 90, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 4762, 5173, -797, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_LASER, 6654, 5513, -1334, 0, 0, -90, (0 << 24), bhvLaser),
		OBJECT(MODEL_LASER, 6654, 5513, -447, 0, 0, -90, (0 << 24), bhvLaser),
		OBJECT(MODEL_NONE, 4762, 5173, -597, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 4762, 5173, -397, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 4762, 5173, -1197, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 4762, 5173, -1397, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_LASER, 4495, 5119, -892, 0, 0, -90, (7 << 24), bhvLaser),
		OBJECT(MODEL_LASER, 4495, 5119, -892, 0, 0, -90, (10 << 24), bhvLaser),
		OBJECT(MODEL_LASER, 2290, 5040, -997, 0, 90, 0, (1 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 2290, 5040, -797, 0, 0, 0, (1 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 2290, 5040, -597, 0, 0, 0, (1 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 2290, 5040, -397, 0, 0, 0, (1 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 2290, 5040, -1197, 0, 0, 0, (1 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 2290, 5040, -1397, 0, 0, 0, (1 << 24), bhvHLaser),
		OBJECT(MODEL_LASER, 2518, 4799, -997, 0, 90, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 2518, 4799, -797, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 2518, 4799, -597, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 2518, 4799, -397, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 2518, 4799, -1197, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 2518, 4799, -1397, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_LASER, 2059, 4727, -997, 0, 90, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 2059, 4727, -797, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 2059, 4727, -597, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 2059, 4727, -397, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 2059, 4727, -1197, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, 2059, 4727, -1397, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_LASER, -2656, 3859, -892, 0, 0, -90, (3 << 24), bhvLaser),
		OBJECT(MODEL_LASER, -5056, 3435, -892, 0, 0, -90, (4 << 24), bhvLaser),
		OBJECT(MODEL_LASER, -3456, 3720, -892, 0, 0, -90, (7 << 24), bhvLaser),
		OBJECT(MODEL_LASER, -5856, 3296, -892, 0, 0, -90, (8 << 24), bhvLaser),
		OBJECT(MODEL_LASER, -4256, 3580, -892, 0, 0, -90, (9 << 24), bhvLaser),
		OBJECT(MODEL_LASER, -6656, 3156, -892, 0, 0, -90, (10 << 24), bhvLaser),
		OBJECT(MODEL_LASER, -10644, 2462, -892, 0, 0, -90, (3 << 24), bhvLaser),
		OBJECT(MODEL_LASER, -10644, 2462, -892, 0, 0, -90, (4 << 24), bhvLaser),
		OBJECT(MODEL_LASER, -11144, 2372, -892, 0, 0, -90, (7 << 24), bhvLaser),
		OBJECT(MODEL_LASER, -11144, 2372, -892, 0, 0, -90, (8 << 24), bhvLaser),
		OBJECT(MODEL_LASER, -10894, 2413, -415, 0, 0, -90, (0 << 24), bhvLaser),
		OBJECT(MODEL_LASER, -10894, 2413, -1372, 0, 0, -90, (0 << 24), bhvLaser),
		OBJECT(MODEL_LASER, -10394, 2502, -415, 0, 0, -90, (0 << 24), bhvLaser),
		OBJECT(MODEL_LASER, -10394, 2502, -1372, 0, 0, -90, (0 << 24), bhvLaser),
		OBJECT(MODEL_LASER, -11394, 2327, -415, 0, 0, -90, (0 << 24), bhvLaser),
		OBJECT(MODEL_LASER, -11394, 2327, -1372, 0, 0, -90, (0 << 24), bhvLaser),
		OBJECT(MODEL_LASER, -11644, 2285, -892, 0, 0, -90, (9 << 24), bhvLaser),
		OBJECT(MODEL_LASER, -11644, 2285, -892, 0, 0, -90, (10 << 24), bhvLaser),
		OBJECT(MODEL_LASER, -11894, 2203, -997, 0, 90, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -11894, 2203, -797, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -11894, 2203, -597, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -11894, 2203, -397, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -11894, 2203, -1197, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -11894, 2203, -1397, 0, 0, 0, (0 << 24), bhvHLaser),
		OBJECT(MODEL_LASER, -8188, 3226, -997, 0, 90, 0, (1 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -8188, 3226, -797, 0, 0, 0, (1 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -8188, 3226, -597, 0, 0, 0, (1 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -8188, 3226, -397, 0, 0, 0, (1 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -8188, 3226, -1197, 0, 0, 0, (1 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -8188, 3226, -1397, 0, 0, 0, (1 << 24), bhvHLaser),
		OBJECT(MODEL_LASER, -8438, 3171, -997, 0, 90, 0, (4 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -8438, 3171, -797, 0, 0, 0, (4 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -8438, 3171, -597, 0, 0, 0, (4 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -8438, 3171, -397, 0, 0, 0, (4 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -8438, 3171, -1197, 0, 0, 0, (4 << 24), bhvHLaser),
		OBJECT(MODEL_NONE, -8438, 3171, -1397, 0, 0, 0, (4 << 24), bhvHLaser),
		TERRAIN(wf_area_4_collision),
		MACRO_OBJECTS(wf_area_4_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_SLIDE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(5, wf_area_5),
		WARP_NODE(0x0A, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x45, LEVEL_WF, 0x05, 0x45, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -271, 3096, -47, 0, 0, 0, (0x45 << 16) | (0x05 << 8), bhvCheckpoint_Flag),
		OBJECT(MODEL_NONE, -795, -12, -66, 0, -90, 0, (0x45 << 16), bhvWarp),
		OBJECT(MODEL_STAR, 920, 1030, -20, 0, 0, 0, (1 << 24) | (1 << 16) | (1 << 8) | (1), bhvStar),
		TERRAIN(wf_area_5_collision),
		MACRO_OBJECTS(wf_area_5_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_SLIDE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 12428, 9264, 7978),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
