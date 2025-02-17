#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {
            QCLASS(Manava_Roa_Member),
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
    class CLASS(O_Manava_Roa) {
        scope = 2;
        curatorScope = 2;
        displayName = "Te Manava Roa";
        side = 0;
        priority = 1;
    };
};
