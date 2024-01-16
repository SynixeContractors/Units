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
        };
        authors[] = {"Thomas Watson"};
        VERSION_CONFIG;
    };
};

class CfgFactionClasses {
    class CLASS(B_KardishevFront) {
        scope = 2;
        curatorScope = 2;
        displayName = "Kardishev Front";
        // flag = QPATHTOF(data\abramia_co.paa);
        // icon = QPATHTOF(data\abramia_co.paa);
        side = 0;
        priority = 0;
    };
};
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
#include "CfgWeapons.hpp"
