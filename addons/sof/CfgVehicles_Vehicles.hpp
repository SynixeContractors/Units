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

class I_Heli_EC_02_RF;
class CLASS(O_Heli_EC_SOF_F): I_Heli_EC_02_RF {
    displayName = "RAI-360M Cougar";
    SCOPE_DLC;
    side = 0;
    faction = QCLASS(O_SOF);
    crew = QCLASS(SOF_O_Helipilot_wd);
    textureList[] = {"Olive",1};
    typicalCargo[] = {QCLASS(SOF_O_Helicrew_wd)};
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
class CLASS(O_Quadbike_SOF_wd): O_G_Quadbike_01_F {
    SCOPE_DLC;
    side = 0;
    faction = QCLASS(O_SOF);
    crew = QCLASS(SOF_O_Rifleman_wd);
    EMPTY_VEHICLE_INVENTORY;
};

class O_G_Offroad_01_F;
class CLASS(O_Offroad_SOF_wd): O_G_Offroad_01_F {
    SCOPE_DLC;
    faction = QCLASS(O_SOF);
    crew = QCLASS(SOF_O_Rifleman_wd);
    textureList[] = {"Guerilla_07",1};
    typicalCargo[] = {QCLASS(SOF_O_Rifleman_wd)};
    EMPTY_VEHICLE_INVENTORY;
};

class O_G_Offroad_01_armed_F;
class CLASS(O_Offroad_SOF_armed_wd): O_G_Offroad_01_armed_F {
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

class C_Van_02_vehicle_F;
class CLASS(O_Van_SOF_vehicle_F): C_Van_02_vehicle_F {
    SCOPE_DLC;
    faction = QCLASS(O_SOF);
    side = 0;
    textureList[] = {"Black",1};
    crew = QCLASS(SOF_O_Rifleman_wd);
    typicalCargo[] = {QCLASS(SOF_O_Rifleman_wd)};
    EMPTY_VEHICLE_INVENTORY;
};

class C_Van_02_transport_F;
class CLASS(O_Van_SOF_transport_F): C_Van_02_transport_F {
    SCOPE_DLC;
    faction = QCLASS(O_SOF);
    side = 0;
    textureList[] = {"Black",1};
    crew = QCLASS(SOF_O_Rifleman_wd);
    typicalCargo[] = {QCLASS(SOF_O_Rifleman_wd)};
    EMPTY_VEHICLE_INVENTORY;
};

class O_G_Pickup_rf;
class CLASS(O_Pickup_SOF_wd): O_G_Pickup_rf {
    SCOPE_DLC;
    faction = QCLASS(O_SOF);
    side = 0;
    crew = QCLASS(SOF_O_Rifleman_wd);
    textureList[] = {"Guerilla_09",1};
    typicalCargo[] = {QCLASS(SOF_O_Rifleman_wd)};
    EMPTY_VEHICLE_INVENTORY;
};

class I_Pickup_hmg_rf;
class CLASS(O_Pickup_hmg_SOF_wd): I_Pickup_hmg_rf {
    SCOPE_DLC;
    faction = QCLASS(O_SOF);
    side = 0;
    crew = QCLASS(SOF_O_Rifleman_wd);
    textureList[] = {"Guerilla_09",1};
    typicalCargo[] = {QCLASS(SOF_O_Rifleman_wd)};
    EMPTY_VEHICLE_INVENTORY;
};

class B_Pickup_mmg_rf;
class CLASS(O_Pickup_mmg_SOF_wd): B_Pickup_mmg_rf {
    SCOPE_DLC;
    faction = QCLASS(O_SOF);
    side = 0;
    crew = QCLASS(SOF_O_Rifleman_wd);
    textureList[] = {"Guerilla_09",1};
    typicalCargo[] = {QCLASS(SOF_O_Rifleman_wd)};
    EMPTY_VEHICLE_INVENTORY;
};

class I_G_Pickup_mrl_rf;
class CLASS(O_Pickup_mrl_SOF_wd): I_G_Pickup_mrl_rf {
    SCOPE_DLC;
    faction = QCLASS(O_SOF);
    side = 0;
    crew = QCLASS(SOF_O_Rifleman_wd);
    textureList[] = {"Guerilla_09",1};
    typicalCargo[] = {QCLASS(SOF_O_Rifleman_wd)};
    EMPTY_VEHICLE_INVENTORY;
};

class I_Pickup_aat_rf;
class CLASS(O_Pickup_aat_SOF_wd): I_Pickup_aat_rf {
    SCOPE_DLC;
    faction = QCLASS(O_SOF);
    side = 0;
    crew = QCLASS(SOF_O_Rifleman_wd);
    textureList[] = {"Guerilla_09",1};
    typicalCargo[] = {QCLASS(SOF_O_Rifleman_wd)};
    EMPTY_VEHICLE_INVENTORY;
};
