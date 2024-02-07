class CfgVehicles {
class C_IDAP_Man_AidWorker_01_F;
class CLASS(C_IDAP_Man_AidWorker_01_Winter): C_IDAP_Man_AidWorker_01_F {
    editorSubcategory = QCLASS(men_winter);
    displayName = "Aid Worker (Gorka) 1";
    SCOPE_DLC;
    linkedItems[] = { "H_Cap_Orange_IDAP_F", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"H_Cap_Orange_IDAP_F", DEFAULT_ITEMS_RADIO};
    uniformClass = "eou_gorka_28";
};

class C_IDAP_Man_AidWorker_01_F;
class CLASS(C_IDAP_Man_AidWorker_02_Winter): C_IDAP_Man_AidWorker_01_F {
    editorSubcategory = QCLASS(men_winter);
    displayName = "Aid Worker (Gorka) 2";
    SCOPE_DLC;
    linkedItems[] = { "H_Cap_Black_IDAP_F", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = { "H_Cap_Black_IDAP_F", DEFAULT_ITEMS_RADIO};
    uniformClass = "eou_gorka_13";
};

class C_IDAP_Man_AidWorker_01_F;
class CLASS(C_IDAP_Man_AidWorker_03_Winter): C_IDAP_Man_AidWorker_01_F {
    editorSubcategory = QCLASS(men_winter);
    displayName = "Aid Worker (Gorka) 3";
    SCOPE_DLC;
    linkedItems[] = { "H_Cap_White_IDAP_F", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = { "H_Cap_White_IDAP_F", DEFAULT_ITEMS_RADIO};
    uniformClass = "eou_gorka_6";
    backpack = "B_Messenger_IDAP_F";
};

class C_IDAP_Man_AidWorker_01_F;
class CLASS(C_IDAP_Man_AidWorker_04_Winter): C_IDAP_Man_AidWorker_01_F {
    editorSubcategory = QCLASS(men_winter);
    displayName = "Aid Worker (Gorka) 4";
    SCOPE_DLC;
    linkedItems[] = { "H_PASGT_basic_white_F", "V_LegStrapBag_black_F",  DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = { "H_PASGT_basic_white_F", "V_LegStrapBag_black_F", DEFAULT_ITEMS_RADIO};
    uniformClass = "eou_gorka_12";
    backpack = "B_Messenger_IDAP_F";
};

class C_IDAP_Man_EOD_01_F;
class CLASS(C_IDAP_Man_EOD_01_Winter): C_IDAP_Man_EOD_01_F {
    editorSubcategory = QCLASS(men_winter);
    displayName = "EOD Specialist (Gorka)";
    SCOPE_DLC;
    linkedItems[] = { "H_PASGT_basic_white_F", "V_EOD_IDAP_blue_F", "B_LegStrapBag_coyote_repair_F",  DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = { "H_PASGT_basic_white_F", "V_EOD_IDAP_blue_F", "B_LegStrapBag_coyote_repair_F", DEFAULT_ITEMS_RADIO};
    uniformClass = "eou_gorka_6";
};
};
