#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {
            QCLASS(Emerald_Soldier),
            QCLASS(Emerald_Soldier_Light),
            QCLASS(Emerald_Commander),
            QCLASS(Emerald_Helipilot),
            QCLASS(Emerald_Crew),
            QCLASS(Emerald_Offroad),
            QCLASS(Emerald_Offroad_Comms),
            QCLASS(Emerald_Offroad_Covered),
            QCLASS(Emerald_Heli),
            QCLASS(Emerald_Pickup)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixeunits_main",
            "A3_Characters_F_Exp",
            "RF_Characters",
            "characters_1_F_lxWS",
            "A3_Soft_F_Exp_Offroad_01", // Gendarmerie Offroad
            "A3_Soft_F_Enoch_Offroad_01", // Gendarmerie Offroad (Comms & Covered)
            "RF_Air_heli_medium_ec", // H225 Super Puma
            "RF_Vehicles_Pickup_01", // Gendarmerie Ram
        };
        author = "Brett Harrison";
        VERSION_CONFIG;
    };
};

class CfgVehicles {
    #include "CfgVehicles_Props.hpp"
    #include "CfgVehicles_Units.hpp"
    #include "CfgVehicles_Vehicles.hpp"
};

class CfgWeapons {
    class H_Beret_gen_F;
    class CLASS(Emerald_Beret): H_Beret_gen_F {
        displayName = "Bered (Gendarme d’Émeraude)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\H_Beret_gen_F_co.paa)
        };
    };
};

class CfgFactionClasses {
    class CLASS(B_Emerald) {
        scope = 2;
        curatorScope = 2;
        displayName = "Gendarme d’Émeraude";
        side = 1;
        priority = 1;
    };
};
