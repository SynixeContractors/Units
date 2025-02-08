class B_GEN_Offroad_01_gen_F;
class CLASS(Emerald_Offroad): B_GEN_Offroad_01_gen_F {
    faction = QCLASS(B_Emerald);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\Offroad_01_ext_gen_CO.paa),
        QPATHTOF(data\Offroad_01_ext_gen_CO.paa)
    };
    crew = QCLASS(Emerald_Soldier);
    typicalCargo[] = {QCLASS(Emerald_Soldier)};
    textureList[] = {};
    EMPTY_VEHICLE_INVENTORY;
};

class B_GEN_Offroad_01_comms_F;
class CLASS(Emerald_Offroad_Comms): B_GEN_Offroad_01_comms_F {
    faction = QCLASS(B_Emerald);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\Offroad_01_ext_gen_CO.paa),
        QPATHTOF(data\Offroad_01_ext_gen_CO.paa),
        "\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_cover_gen_co.paa"
    };
    crew = QCLASS(Emerald_Soldier);
    typicalCargo[] = {QCLASS(Emerald_Soldier)};
    textureList[] = {};
    EMPTY_VEHICLE_INVENTORY;
};

class B_GEN_Offroad_01_covered_F;
class CLASS(Emerald_Offroad_Covered): B_GEN_Offroad_01_covered_F {
    faction = QCLASS(B_Emerald);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\Offroad_01_ext_gen_CO.paa),
        QPATHTOF(data\Offroad_01_ext_gen_CO.paa),
        "\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_cover_gen_co.paa"
    };
    crew = QCLASS(Emerald_Soldier);
    typicalCargo[] = {QCLASS(Emerald_Soldier)};
    textureList[] = {};
    EMPTY_VEHICLE_INVENTORY;
};

class B_GEN_Heli_EC_01_RF;
class CLASS(Emerald_Heli): B_GEN_Heli_EC_01_RF {
    faction = QCLASS(B_Emerald);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\as332_exterior_07_gendarmerie_co.paa),
        "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa",
        "#(argb,512,512,1)r2t(rendertarget0,1.0)",
        "\lxRF\air_rf\heli_medium_ec\data\as332_adds_07_gendarmerie_co.paa",
        QPATHTOF(data\as332_exterior_07_gendarmerie_co.paa),
        "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa"
    };
    crew = QCLASS(Emerald_Helipilot);
    typicalCargo[] = {QCLASS(Emerald_Helipilot)};
    textureList[] = {};
};

class B_GEN_Pickup_covered_rf;
class CLASS(Emerald_Pickup): B_GEN_Pickup_covered_rf {
    faction = QCLASS(B_Emerald);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\pickup_01_ext_gendarmerie_co.paa),
        "\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_gendarmerie_co.paa",
        "\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa",
        "\lxrf\vehicles_rf\pickup_01\data\pickup_01_AAT_olive_co.paa",
        "\lxrf\vehicles_rf\pickup_01\data\pickup_01_Launcher_black_co.paa",
        "lxrf\vehicles_rf\pickup_01\data\pickup_01_service_gendarmerie_co.paa"
    };
    crew = QCLASS(Emerald_Soldier);
    typicalCargo[] = {QCLASS(Emerald_Soldier)};
    textureList[] = {};
    EMPTY_VEHICLE_INVENTORY;
};
