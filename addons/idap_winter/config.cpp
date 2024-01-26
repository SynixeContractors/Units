#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {
            QCLASS(C_IDAP_Man_AidWorker_01_Winter);
            QCLASS(C_IDAP_Man_AidWorker_02_Winter);
            QCLASS(C_IDAP_Man_AidWorker_03_Winter);
            QCLASS(C_IDAP_Man_AidWorker_04_Winter);
            QCLASS(C_IDAP_Man_EOD_01_Winter);
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