#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {
            QCLASS(contractors_I_Rifleman_F_F),
            QCLASS(contractors_I_Marksman_F),
            QCLASS(contractors_I_Autorifleman_F),
            QCLASS(contractors_I_Grenadier_F),
            QCLASS(contractors_I_Teamleader_F),
            QCLASS(contractors_I_Medic_F),
            QCLASS(contractors_I_Helipilot_F),
            QCLASS(contractors_I_Helicrew_F),
            QCLASS(I_SynixeContractors_FireTeam),
        };
        weapons[] = {
            QCLASS(arifle_SPAR_02_snd_xps3),
            QCLASS(arifle_SPAR_03_blk_burris),
            QCLASS(LMG_03_saber),
            QCLASS(arifle_VelkoR5_GL_cmore),
            QCLASS(arifle_TRG20_rds),
            QCLASS(arifle_AK12_RCO),
            QCLASS(hgun_Pistol_heavy_01_mrd),
            QCLASS(arifle_SPAR_01_blk_xps3),
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixeunits_main",
            "data_f_lxWS_Loadorder",
            "tacu_main",
            "synixe_contractors_units",
            "synixe_contractors_headgear",
        };
        authors[] = {"Thomas Watson"};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
#include "CfgWeapons.hpp"