#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {
            
        };
        weapons[] = {
            
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixeunits_main",
            "data_f_lxWS_Loadorder",
            "WSLV_Exp_Uniform_Config"
        };
        authors[] = {"Thomas Watson"};
        VERSION_CONFIG;
    };
};

class CfgFactionClasses {
    class CLASS(B_PolkBaskera) {
        scope = 2;
        curatorScope = 2;
        displayName = "Polk Baskera";
        // flag = QPATHTOF(data\abramia_co.paa);
        // icon = QPATHTOF(data\abramia_co.paa);
        side = 1;
        priority = 1;
    };
};
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
#include "CfgWeapons.hpp"
