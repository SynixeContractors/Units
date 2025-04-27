#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {
            QCLASS(Malden_Revolutionary),
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixeunits_main",
        };
        author = "Brett Harrison";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"

class CfgVehicles {
    #include "CfgVehicles_Units.hpp"
};

#include "CfgGroups.hpp"

class CfgFactionClasses {
    class CLASS(I_Malden_Revolution) {
        scope = 2;
        curatorScope = 2;
        displayName = "Malden Revolutionary Forces";
        side = 2;
        priority = 1;
    };
};
