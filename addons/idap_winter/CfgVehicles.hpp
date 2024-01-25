class CfgVehicles {
class C_IDAP_Man_AidWorker_01_F;
class CLASS(C_IDAP_Man_AidWorker_01_Winter): C_IDAP_Man_AidWorker_01_F {
	editorSubcategory = QCLASS(men_winter);
	displayName = "Aid Worker (Gorka) 1";
	dlc = QUOTE(prefix);
	scope = 2;
	curatorScope = 2;
	linkedItems[] = { "H_Cap_Orange_IDAP_F", "ItemMap", "ItemGPS", "ItemRadio", "ItemCompass", "ItemWatch"};
	respawnLinkedItems[] = {"H_Cap_Orange_IDAP_F", "ItemMap", "ItemGPS", "ItemRadio", "ItemCompass", "ItemWatch"};
	uniformClass = "eou_gorka_28";
};

class C_IDAP_Man_AidWorker_01_F;
class CLASS(C_IDAP_Man_AidWorker_02_Winter): C_IDAP_Man_AidWorker_01_F {
	editorSubcategory = QCLASS(men_winter);
	displayName = "Aid Worker (Gorka) 2";
	dlc = QUOTE(prefix);
	scope = 2;
	curatorScope = 2;
	linkedItems[] = { "H_Cap_Black_IDAP_F", "ItemMap", "ItemGPS", "ItemRadio", "ItemCompass", "ItemWatch"};
	respawnLinkedItems[] = { "H_Cap_Black_IDAP_F", "ItemMap", "ItemGPS", "ItemRadio", "ItemCompass", "ItemWatch"};
	uniformClass = "eou_gorka_13";
};

class C_IDAP_Man_AidWorker_01_F;
class CLASS(C_IDAP_Man_AidWorker_03_Winter): C_IDAP_Man_AidWorker_01_F {
	editorSubcategory = QCLASS(men_winter);
	displayName = "Aid Worker (Gorka) 3";
	dlc = QUOTE(prefix);
	scope = 2;
	curatorScope = 2;
	linkedItems[] = { "H_Cap_White_IDAP_F", "ItemMap", "ItemGPS", "ItemRadio", "ItemCompass", "ItemWatch"};
	respawnLinkedItems[] = { "H_Cap_White_IDAP_F", "ItemMap", "ItemGPS", "ItemRadio", "ItemCompass", "ItemWatch"};
	uniformClass = "eou_gorka_6";
	backpack = "B_Messenger_IDAP_F";
};

class C_IDAP_Man_AidWorker_01_F;
class CLASS(C_IDAP_Man_AidWorker_04_Winter): C_IDAP_Man_AidWorker_01_F {
	editorSubcategory = QCLASS(men_winter);
	displayName = "Aid Worker (Gorka) 4";
	dlc = QUOTE(prefix);
	scope = 2;
	curatorScope = 2;
	linkedItems[] = { "H_PASGT_basic_white_F", "V_LegStrapBag_black_F",  "ItemMap", "ItemGPS", "ItemRadio", "ItemCompass", "ItemWatch"};
	respawnLinkedItems[] = { "H_PASGT_basic_white_F", "V_LegStrapBag_black_F", "ItemMap", "ItemGPS", "ItemRadio", "ItemCompass", "ItemWatch"};
	uniformClass = "eou_gorka_12";
	backpack = "B_Messenger_IDAP_F";
};

class C_IDAP_Man_EOD_01_F;
class CLASS(C_IDAP_Man_EOD_01_Winter): C_IDAP_Man_EOD_01_F {
	editorSubcategory = QCLASS(men_winter);
	displayName = "EOD Specialist (Gorka)";
	dlc = QUOTE(prefix);
	scope = 2;
	curatorScope = 2;
	linkedItems[] = { "H_PASGT_basic_white_F", "V_EOD_IDAP_blue_F", "B_LegStrapBag_coyote_repair_F",  "ItemMap", "ItemGPS", "ItemRadio", "ItemCompass", "ItemWatch"};
	respawnLinkedItems[] = { "H_PASGT_basic_white_F", "V_EOD_IDAP_blue_F", "B_LegStrapBag_coyote_repair_F", "ItemMap", "ItemGPS", "ItemRadio", "ItemCompass", "ItemWatch"};
	uniformClass = "eou_gorka_6";
};
};