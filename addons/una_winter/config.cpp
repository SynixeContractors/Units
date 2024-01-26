#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {
            QCLASS(B_UN_Soldier_TL_Winter),
            QCLASS(B_UN_Soldier_GL_Winter),
            QCLASS(B_UN_Soldier_Winter),
            QCLASS(B_UN_Soldier_02_Winter),
            QCLASS(B_UN_Soldier_AR_Winter),
            QCLASS(B_UN_HeavyGunner_Winter),
            QCLASS(B_UN_medic_Winter),
            QCLASS(B_UN_engineer_Winter),
            QCLASS(B_UN_officer_Winter),
            QCLASS(B_UN_Helipilot_Winter),
            QCLASS(B_UN_crew_Winter),
            QCLASS(B_UNA_RifleSquad_Winter),
            QCLASS(B_UNA_Sentry_Winter),
        };
        weapons[] = {
            
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixeunits_main",
            "data_f_lxWS_Loadorder",

        };
        authors[] = {"Thomas Watson"};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
