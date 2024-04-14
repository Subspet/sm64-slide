// hlaser.c.inc

static struct ObjectHitbox hlasbox = {
    /* interactType:      */ INTERACT_SHOCK,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 3,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 100,
    /* height:            */ 120,
    /* hurtboxRadius:     */ 100,
    /* hurtboxHeight:     */ 120,
};

void bhv_HLaser_init(void) {
    o->oHomeX = o->oPosX;
    o->oHomeY = o->oPosY;
    o->oHomeZ = o->oPosZ;
    obj_set_hitbox(o, &hlasbox);
};

void bhv_HLaser_loop(void) {
    o->oInteractStatus = 0;
    switch (GET_BPARAM1(o->oBehParams)) {
        case (0): // stationary
            break;
        case (1): // y axis movement UP/DOWN
            o->oPosY = o->oHomeY - (0 - (400 * sins(o->oTimer * 600)));
            break;
        case (2): // y axis movement UP/DOWN
            o->oPosY = o->oHomeY - (0 - (400 * -sins(o->oTimer * 600)));
            break;
		default:
            break;
    }
};