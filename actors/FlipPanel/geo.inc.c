
const GeoLayout FlipPanel_switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, FlipPanel_geo_mesh_layer_1_mat_override_yellow_001_0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout FlipPanel_switch_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, FlipPanel_geo_mesh_layer_1_mat_override_red_001_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout FlipPanel_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(3, geo_switch_anim_state),
		GEO_OPEN_NODE(),
			GEO_NODE_START(),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, FlipPanel_geo_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_BRANCH(1, FlipPanel_switch_opt1),
			GEO_BRANCH(1, FlipPanel_switch_opt2),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
