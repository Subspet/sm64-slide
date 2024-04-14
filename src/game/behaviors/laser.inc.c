// laser.c.inc

static struct ObjectHitbox slasbox = {
    /* interactType:      */ INTERACT_SHOCK,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 2,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 125,
    /* height:            */ 1250,
    /* hurtboxRadius:     */ 125,
    /* hurtboxHeight:     */ 1250,
};

void bhv_laser_init(void) {
    o->oHomeX = o->oPosX;
    o->oHomeY = o->oPosY;
    o->oHomeZ = o->oPosZ;
    obj_set_hitbox(o, &slasbox);
};

void bhv_laser_loop(void) {
    o->oInteractStatus = 0;
    switch (GET_BPARAM1(o->oBehParams)) {
        case (0): // stationary
            break;
        case (1): // x axis movement 
            o->oPosX = o->oHomeX - (0 - (500 * sins(o->oTimer * 600)));
            break;
        case (2): // x axis movement opp
            o->oPosX = o->oHomeX - (0 - (500 * -sins(o->oTimer * 600)));
            break;
        case (3): // z axis movement 
            o->oPosZ = o->oHomeZ - (0 - (500 * sins(o->oTimer * 600)));
            break;
        case (4): // z axis movement opp
            o->oPosZ = o->oHomeZ - (0 - (500 * -sins(o->oTimer * 600)));
            break;
        case (5): // x axis movement fast
            o->oPosX = o->oHomeX - (0 - (500 * sins(o->oTimer * 900)));
            break;
        case (6): // x axis movement opp fast
            o->oPosX = o->oHomeX - (0 - (500 * -sins(o->oTimer * 900)));
            break;
        case (7): // z axis movement fast
            o->oPosZ = o->oHomeZ - (0 - (500 * sins(o->oTimer * 900)));
            break;
        case (8): // z axis movement opp fast
            o->oPosZ = o->oHomeZ - (0 - (500 * -sins(o->oTimer * 900)));
            break;
        case (9): // z axis movement faster
            o->oPosZ = o->oHomeZ - (0 - (500 * sins(o->oTimer * 1200)));
            break;
        case (10): // z axis movement opp faster
            o->oPosZ = o->oHomeZ - (0 - (500 * -sins(o->oTimer * 1200)));
            break;
		default:
            break;
    }
};