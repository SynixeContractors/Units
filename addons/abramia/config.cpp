#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {
            QCLASS(I_Rifleman_F),
            QCLASS(I_Autorifleman_F),
            QCLASS(I_Medic_F),
            QCLASS(I_Engineer_F),
            QCLASS(I_Pilot_F)
        };
        weapons[] = {
            QCLASS(wdl)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixeunits_main"
        };
        authors[] = {"Brett Harrison"};
        VERSION_CONFIG;
    };
};

class CfgFactionClasses {
    class CLASS(I_Abramia) {
        scope = 2;
        curatorScope = 2;
        displayName = "Abramia";
        flag = QPATHTOF(data\abramia_co.paa);
        icon = QPATHTOF(data\abramia_co.paa);
        side = 2;
        priority = 2;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
