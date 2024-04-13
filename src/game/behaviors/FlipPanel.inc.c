// lazer.c.inc

static struct ObjectHitbox sPanNormalbox = {
    /* interactType:      */ INTERACT_SHOCK,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 2,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 400,
    /* height:            */ 150,
    /* hurtboxRadius:     */ 400,
    /* hurtboxHeight:     */ 150,
};

void bhv_FlipPanel_init(void) {
    o->oHomeX = o->oPosX;
    o->oHomeY = o->oPosY;
    o->oHomeZ = o->oPosZ;
    obj_set_hitbox(o, &sPanNormalbox);

    o->oTimer = 60 * GET_BPARAM1(o->oBehParams);
};

void bhv_FlipPanel_loop(void) {
    o->oInteractStatus = 0;


    if (o->oTimer % 180 == 0) {
        o->oAnimState = 0;
    } else if (o->oTimer % 180 == 60) {
        o->oAnimState = 1;
    } else if (o->oTimer % 180 == 120) {
        o->oAnimState = 2;
    } 
};