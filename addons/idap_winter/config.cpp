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
            "eo_gorkas"
        };
        authors[] = {"Thomas Watson"};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"