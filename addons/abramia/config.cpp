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

class CfgVehicles {
    class FlagCarrier_Asym;
    class CLASS(Flag_Abramia): FlagCarrier_Asym {
        scope = 2;
        scopeCurator = 2;
        displayName = "Flag (Abramia)";
        author = "Brett Harrison";
        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOF(data\abramia_co.paa)));
        };
    };
    class CLASS(Flag_Protectorate): FlagCarrier_Asym {
        scope = 2;
        scopeCurator = 2;
        displayName = "Flag (Protectorate of Abramia)";
        author = "Brett Harrison";
        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOF(data\protectorate_co.paa)));
        };
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
