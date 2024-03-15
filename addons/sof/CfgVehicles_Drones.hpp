class B_T_UGV_01_olive_F;
class CLASS(SOF_O_UGV_wd): B_T_UGV_01_olive_F {
	displayName = "UGV Saif";
    SCOPE_DLC;
    faction = QCLASS(O_SOF);
	side = 0;
	crew = "O_UAV_AI";
    typicalCargo[] = {QCLASS(SOF_O_Rifleman_wd)};
};

class B_T_UGV_01_rcws_olive_F;
class CLASS(SOF_O_UGV_rcws_wd): B_T_UGV_01_rcws_olive_F {
	displayName = "UGV Saif RCWS";
    SCOPE_DLC;
    faction = QCLASS(O_SOF);
	side = 0;
	crew = "O_UAV_AI";
    typicalCargo[] = {QCLASS(SOF_O_Rifleman_wd)};
};

class ION_UAV_01_lxWS;
class SOF_UAV_01 : ION_UAV_01_lxWS {
	displayName = "Tayran AR-2";
    SCOPE_DLC;
    faction = QCLASS(O_SOF);
	side = 0;
	crew = "O_UAV_AI";
    typicalCargo[] = {"O_UAV_AI"};
};

class ION_UAV_02_lxWS;
class SOF_UAV_02_Minimi : ION_UAV_02_lxWS {
	displayName = "Roshanak AP-5 (Minimi)";
    SCOPE_DLC;
    faction = QCLASS(O_SOF);
	side = 0;
	crew = "O_UAV_AI";
    typicalCargo[] = {"O_UAV_AI"};
	editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\ION_UAV_02_lxWS.jpg";
	lxws_droneWeapon[] = {"LMG_03_F","200Rnd_556x45_Box_Tracer_Red_F",""};
};

class ION_UAV_02_lxWS;
class SOF_UAV_02_GM6 : ION_UAV_02_lxWS {
	displayName = "Roshanak AP-5 (Lynx)";
    SCOPE_DLC;
    faction = QCLASS(O_SOF);
	side = 0;
	crew = "O_UAV_AI";
    typicalCargo[] = {"O_UAV_AI"};
	editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\ION_UAV_02_lxWS.jpg";
	lxws_droneWeapon[] = {"srifle_GM6_F","5Rnd_127x108_Mag",""};
};