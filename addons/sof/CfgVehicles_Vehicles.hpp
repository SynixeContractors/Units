class B_Boat_Transport_01_F;
class CLASS(O_Boat_Transport_SOF_F): B_Boat_Transport_01_F {
    SCOPE_DLC;
	side = 0;
    faction = QCLASS(O_SOF);
    crew = QCLASS(SOF_O_Rifleman_wd);
    EMPTY_VEHICLE_INVENTORY;
};

class I_C_Boat_Transport_02_F;
class CLASS(O_Boat_Transport_SOF_02_F): I_C_Boat_Transport_02_F {
    SCOPE_DLC;
	side = 0;
    faction = QCLASS(O_SOF);
    crew = QCLASS(SOF_O_Rifleman_wd);
    EMPTY_VEHICLE_INVENTORY;
};

class Heli_light_03_unarmed_base_F;
class CLASS(O_Heli_light_03_unarmed_SOF_F): Heli_light_03_unarmed_base_F {
	displayName = "AW159 Wildcat (Unarmed)";
    SCOPE_DLC;
	side = 0;
    faction = QCLASS(O_SOF);
    crew = QCLASS(O_Helipilot_wd_F);
    textureList[] = {"Green",1};
    typicalCargo[] = {QCLASS(O_Helipilot_wd_F)};
    EMPTY_VEHICLE_INVENTORY;
};

class TACU_Wildcat_Armed_Base;
class CLASS(O_Heli_light_03_dynamicLoadout_SOF_F): TACU_Wildcat_Armed_Base {
    displayName = "AW159 Wildcat";
    SCOPE_DLC;
	side = 0;
    faction = QCLASS(O_SOF);
    crew = QCLASS(O_Helipilot_wd_F);
	textureList[] = {"Green",1};
    typicalCargo[] = {QCLASS(O_Helipilot_wd_F)};
    EMPTY_VEHICLE_INVENTORY;
};

class TACU_Merlin_Base;
class CLASS(O_Merlin_Transport_SOF_F): TACU_Merlin_Base {
    SCOPE_DLC;
	side = 0;
    faction = QCLASS(O_SOF);
    crew = QCLASS(O_Helipilot_wd_F);
	textureList[] = {"South_African_Green",1};
    typicalCargo[] = {QCLASS(O_Helicrew_wd_F)};
    EMPTY_VEHICLE_INVENTORY;
};

class B_T_Mortar_01_F;
class CLASS(O_Mortar_SOF_01_F): B_T_Mortar_01_F {
    SCOPE_DLC;
    faction = QCLASS(O_SOF);
	side = 0;
    crew = QCLASS(SOF_O_Rifleman_wd);
    typicalCargo[] = {QCLASS(SOF_O_Rifleman_wd)};
    EMPTY_VEHICLE_INVENTORY;
};

class O_G_HMG_02_F;
class CLASS(O_HMG_SOF_02_F): O_G_HMG_02_F {
    SCOPE_DLC;
    faction = QCLASS(O_SOF);
    crew = QCLASS(SOF_O_Rifleman_wd);
    typicalCargo[] = {QCLASS(SOF_O_Rifleman_wd)};
    EMPTY_VEHICLE_INVENTORY;
};

class O_G_HMG_02_high_F;
class CLASS(O_HMG_SOF_02_high_F): O_G_HMG_02_high_F {
    SCOPE_DLC;
    faction = QCLASS(O_SOF);
    crew = QCLASS(SOF_O_Rifleman_wd);
    typicalCargo[] = {QCLASS(SOF_O_Rifleman_wd)};
    EMPTY_VEHICLE_INVENTORY;
};

class O_LSV_02_armed_F;
class CLASS(O_LSV_SOF_armed_wd): O_LSV_02_armed_F {
    SCOPE_DLC;
	side = 0;
    faction = QCLASS(O_SOF);
    textureList[] = {"Black",1};
    crew = QCLASS(SOF_O_Rifleman_wd);
    typicalCargo[] = {QCLASS(SOF_O_Rifleman_wd)};
    EMPTY_VEHICLE_INVENTORY;
};

class O_LSV_02_AT_F;
class CLASS(O_LSV_SOF_AT_wd): O_LSV_02_AT_F {
    SCOPE_DLC;
	side = 0;
    faction = QCLASS(O_SOF);
    textureList[] = {"Black",1};
    crew = QCLASS(SOF_O_Rifleman_wd);
    typicalCargo[] = {QCLASS(SOF_O_Rifleman_wd)};
    EMPTY_VEHICLE_INVENTORY;
};

class O_LSV_02_unarmed_F;
class CLASS(O_LSV_SOF_unarmed_wd): O_LSV_02_unarmed_F {
    SCOPE_DLC;
	side = 0;
    faction = QCLASS(O_SOF);
    textureList[] = {"Black",1};
    crew = QCLASS(SOF_O_Rifleman_wd);
    typicalCargo[] = {QCLASS(SOF_O_Rifleman_wd)};
    EMPTY_VEHICLE_INVENTORY;
};

class O_G_Quadbike_01_F;
class CLASS(O_G_Quadbike_SOF_wd): O_G_Quadbike_01_F {
    SCOPE_DLC;
	side = 0;
    faction = QCLASS(O_SOF);
    crew = QCLASS(SOF_O_Rifleman_wd);
    EMPTY_VEHICLE_INVENTORY;
};

class O_G_Offroad_01_F;
class CLASS(O_G_Offroad_SOF_wd): O_G_Offroad_01_F {
    SCOPE_DLC;
    faction = QCLASS(O_SOF);
    crew = QCLASS(SOF_O_Rifleman_wd);
	textureList[] = {"Guerilla_07",1};
    typicalCargo[] = {QCLASS(SOF_O_Rifleman_wd)};
    EMPTY_VEHICLE_INVENTORY;
};

class O_G_Offroad_01_armed_F;
class CLASS(O_G_Offroad_SOF_armed_wd): O_G_Offroad_01_armed_F {
    SCOPE_DLC;
    faction = QCLASS(O_SOF);
    crew = QCLASS(SOF_O_Rifleman_wd);
	textureList[] = {"Guerilla_07",1};
    typicalCargo[] = {QCLASS(SOF_O_Rifleman_wd)};
    EMPTY_VEHICLE_INVENTORY;
};

class TACU_African_South_V_O_Fennek;
class CLASS(O_MRAP_SOF_wd): TACU_African_South_V_O_Fennek {
    SCOPE_DLC;
    faction = QCLASS(O_SOF);
    crew = QCLASS(SOF_O_Rifleman_wd);
    typicalCargo[] = {QCLASS(SOF_O_Rifleman_wd)};
    EMPTY_VEHICLE_INVENTORY;
};

class TACU_African_South_V_O_Fennek_HMG;
class CLASS(O_MRAP_SOF_HMG_wd): TACU_African_South_V_O_Fennek_HMG {
    SCOPE_DLC;
    faction = QCLASS(O_SOF);
    crew = QCLASS(SOF_O_Rifleman_wd);
    typicalCargo[] = {QCLASS(SOF_O_Rifleman_wd)};
    EMPTY_VEHICLE_INVENTORY;
};

class TACU_Kamaz_Base;
class CLASS(O_Truck_SOF_wd): TACU_Kamaz_Base {
    SCOPE_DLC;
    faction = QCLASS(O_SOF);
    side = 0;
    textureList[] = {"South_African_Green",1};
    crew = QCLASS(SOF_O_Rifleman_wd);
    typicalCargo[] = {QCLASS(SOF_O_Rifleman_wd)};
    EMPTY_VEHICLE_INVENTORY;
};

class TACU_Kamaz_Covered_Base;
class CLASS(O_Truck_SOF_covered_wd): TACU_Kamaz_Covered_Base {
    SCOPE_DLC;
    faction = QCLASS(O_SOF);
    side = 0;
    textureList[] = {"South_African_Green",1};
    crew = QCLASS(SOF_O_Rifleman_wd);
    typicalCargo[] = {QCLASS(SOF_O_Rifleman_wd)};
    EMPTY_VEHICLE_INVENTORY;
};