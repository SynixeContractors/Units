#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {
            QCLASS(B_TeamLeader_F),
            QCLASS(B_Rifleman_F),
            QCLASS(B_Autorifleman_F),
            QCLASS(B_Grenadier_F),
            QCLASS(B_Rifleman_AT_F),
            QCLASS(B_Marksman_F),
            QCLASS(B_Medic_F),
            QCLASS(B_Soldier_exp_F),
            QCLASS(B_Engineer_F),
            QCLASS(B_Sniper_F),
            QCLASS(B_Spotter_F),
            QCLASS(B_HeliPilot_F),
            QCLASS(B_Crewman_F),
            QCLASS(B_T_MRAP_01_F),
            QCLASS(B_Offroad_01_F),
            QCLASS(B_Offroad_01_armed_F),
            QCLASS(B_Offroad_01_AT_F),
            QCLASS(B_Truck_02_covered_F),
            QCLASS(B_Heli_light_01),
            QCLASS(B_Heli_light_02),
            QCLASS(B_Mortar_01_F),
            QCLASS(B_HMG_02_F),
            QCLASS(B_HMG_02_high_F),
            QCLASS(B_PolkBaskera_FireTeam),
            QCLASS(B_PolkBaskera_FireTeam_AT),
            QCLASS(B_PolkBaskera_RifleSquad),
            QCLASS(B_PolkBaskera_RaidTeam),
            QCLASS(B_PolkBaskera_Sentry),
            QCLASS(B_PolkBaskera_SniperTeam),
            QCLASS(B_PolkBaskera_SupportSquad),
            QCLASS(B_Carryall_green_F_AT),
            QCLASS(B_Carryall_green_F_DMO),
            QCLASS(B_Kitbag_rgr_CLS),
            QCLASS(B_LegStrapBag_black_F_ENG),
        };
        weapons[] = {
            QCLASS(srifle_DMR_Burris),
            QCLASS(arifle_AK12U_CMore),
            QCLASS(arifle_AK12U_Elcan),
            QCLASS(srifle_DMR_05_KHS),
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
