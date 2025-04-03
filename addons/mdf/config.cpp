#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QCLASS(O_MDF_Rifleman),
            QCLASS(O_MDF_Marksman),
            QCLASS(O_MDF_Medic),
            QCLASS(O_MDF_Engineer),
            QCLASS(O_MDF_TeamLeader),
        };
        weapons[] = {
            QCLASS(O_MDF_HK416),
            QCLASS(O_MDF_HK416_14),
            QCLASS(O_MDF_HK417),
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixeunits_main",
            "A3_Weapons_F_Exp",
        };
        author = "Brett Harrison";
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgWeapons.hpp"

class CfgVehicles {
    #include "CfgVehicles_Units.hpp"
    #include "CfgVehicles_Backpacks.hpp"
    #include "CfgVehicles_Props.hpp"
};
