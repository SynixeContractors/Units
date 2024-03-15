#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {
            QCLASS(SOF_O_Rifleman_wd),
            QCLASS(SOF_O_SquadLeader_wd),
            QCLASS(SOF_O_Grenadier_wd),
            QCLASS(SOF_O_Autorifleman_wd),
            QCLASS(SOF_O_Rifleman_LAT_wd),
            QCLASS(SOF_O_Marksman_wd),
            QCLASS(SOF_O_Medic_wd),
            QCLASS(SOF_O_TeamLeader_wd),
            QCLASS(SOF_O_HeavyGunner_wd),
            QCLASS(SOF_O_AHG_wd),
            QCLASS(SOF_O_AAR_wd),
            QCLASS(SOF_O_Rifleman_AT_wd),
            QCLASS(SOF_O_Rifleman_AA_wd),
            QCLASS(SOF_O_Engineer_wd),
            QCLASS(SOF_O_Rifleman_dmo_wd),
            QCLASS(SOF_O_RadioOperator_wd),
            QCLASS(SOF_O_Rifleman_AR2_wd),
            QCLASS(SOF_O_Rifleman_AP5_Mini_wd),
            QCLASS(SOF_O_Rifleman_AP5_Lynx_wd),
            QCLASS(SOF_O_Sniper_wd),
            QCLASS(SOF_O_Spotter_wd),
            QCLASS(SOF_O_Rifleman_SG_wd),
            QCLASS(SOF_O_Helipilot_wd),
            QCLASS(SOF_O_Helicrew_wd),
            QCLASS(SOF_O_Crewman_wd),
            QCLASS(SOF_O_Rifleman_exp_wd),
            QCLASS(SOF_O_Support_HMG_wd),
            QCLASS(SOF_O_Support_AMG_wd),
            QCLASS(SOF_O_AAT_wd),
            QCLASS(SOF_O_AAT_wd),
            QCLASS(O_Boat_Transport_SOF_F),
            QCLASS(O_Boat_Transport_SOF_02_F),
            QCLASS(O_Heli_light_03_unarmed_SOF_F),
            QCLASS(O_Heli_light_03_dynamicLoadout_SOF_F),
            QCLASS(O_Merlin_Transport_SOF_F),
            QCLASS(O_Mortar_SOF_01_F),
            QCLASS(O_HMG_SOF_02_F),
            QCLASS(O_HMG_SOF_02_high_F),
            QCLASS(O_LSV_SOF_armed_wd),
            QCLASS(O_LSV_SOF_AT_wd),
            QCLASS(O_LSV_SOF_unarmed_wd),
            QCLASS(O_G_Quadbike_SOF_wd),
            QCLASS(O_G_Offroad_SOF_wd),
            QCLASS(O_G_Offroad_SOF_armed_wd),
            QCLASS(O_MRAP_SOF_wd),
            QCLASS(O_MRAP_SOF_HMG_wd),
            QCLASS(O_Truck_SOF_wd),
            QCLASS(O_Truck_SOF_covered_wd),
            QCLASS(SOF_O_UGV_wd),
            QCLASS(SOF_O_UGV_rcws_wd),
            QCLASS(SOF_UAV_01),
            QCLASS(SOF_UAV_02_Minimi),
            QCLASS(SOF_UAV_02_GM6),
            QCLASS(O_SOF_AATeam_wd),
            QCLASS(O_SOF_LATTeam_wd),
            QCLASS(O_SOF_ATTeam_wd),
            QCLASS(O_SOF_Assault_wd),
            QCLASS(O_SOF_Rifle_wd),
            QCLASS(O_SOF_Sentry_wd),
            QCLASS(O_SOF_SniperTeam_wd),
            QCLASS(O_SOF_WeaponsSquad_wd),
            QCLASS(O_SOF_FOTeam_wd),
            QCLASS(O_SOF_HMG_wd),
            QCLASS(O_SOF_MG_wd),
            QCLASS(B_AssaultPack_blk_AT),
            QCLASS(B_Carryall_blk_AT),
            QCLASS(B_Carryall_blk_AA),
            QCLASS(B_Carryall_blk_DMO),
            QCLASS(B_Carryall_blk_MNE),
            QCLASS(B_Kitbag_rgr_CLS),
            QCLASS(B_LegStrapBag_black_F_ENG),
            QCLASS(B_AssaultPack_blk_Minimi),
            QCLASS(B_AssaultPack_blk_Lynx),
            QCLASS(B_Kitbag_rgr_AGH),
            QCLASS(B_AssaultPack_blk_AAR),
        };
        weapons[] = {
            QCLASS(arifle_Velko_MRCO),
            QCLASS(arifle_Velko_xps3),
            QCLASS(LMG_03_saber),
            QCLASS(srifle_DMR_06_olive_mos),
            QCLASS(arifle_Velko_rds),
            QCLASS(srifle_GM6_LRPS),
            QCLASS(sgun_aa40_xps3),
            QCLASS(SMG_03C_TR_rds),
            QCLASS(MMG_02_black_bipod),
            QCLASS(arifle_Mk20C_rds),
            QCLASS(arifle_Mk20_GL_saber),
            QCLASS(arifle_Mk20_GL_xps3),
        };

        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixeunits_main",
            "data_f_lxWS_Loadorder",
            "tacu_main",
        };
        authors[] = {"Thomas Watson"};
        VERSION_CONFIG;
    };
};

class CfgFactionClasses {
    class CLASS(O_SOF) {
        scope = 2;
        curatorScope = 2;
        displayName = "SoF";
        side = 0;
        priority = 1;
    };
};

#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
#include "CfgWeapons.hpp"