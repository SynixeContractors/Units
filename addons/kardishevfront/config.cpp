#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {
            QCLASS(O_Rifleman_F),
            QCLASS(O_TeamLeader_F),
            QCLASS(O_Marksman_F),
            QCLASS(O_MachineGunner_F),
            QCLASS(O_Rifleman_AT_F),
            QCLASS(O_Grenadier_F),
            QCLASS(O_Medic_F),
            QCLASS(O_Soldier_exp_F),
            QCLASS(O_Sapper_Sab_F),
            QCLASS(O_TeamLeader_Sab_F),
            QCLASS(O_MachineGunner_Sab_F),
            QCLASS(O_Marksman_Sab_F),
            QCLASS(O_Rifleman_AT_Sab_F),
            QCLASS(O_Medic_Sab_F),
            QCLASS(O_Sniper_Sab_F),
            QCLASS(O_Spotter_Sab_F),
            QCLASS(O_HMG_02_high_F),
            QCLASS(O_HMG_02_F),
            QCLASS(O_Mortar_01_F),
            QCLASS(O_Van_01_transport_F),
            QCLASS(O_Van_02_F),
            QCLASS(O_G_Offroad_01_armor_AT),
            QCLASS(O_G_Offroad_01_armor_armed),
            QCLASS(O_G_Offroad_01_armor_base),
            QCLASS(O_Quadbike_F),
            QCLASS(O_Offroad_01_AT_F),
            QCLASS(O_Offroad_01_armed_F),
            QCLASS(O_Offroad_01_F),
            QCLASS(O_KardishevFront_Infantry),
            QCLASS(O_KardishevFront_FireTeam),
            QCLASS(O_KardishevFront_FireTeam_AT),
            QCLASS(O_KardishevFront_RifleSquad),
            QCLASS(O_KardishevFront_Sentry),
            QCLASS(O_KardishevFront_SupportSquad),
            QCLASS(O_KardishevFront_Sab_Ambush),
            QCLASS(O_KardishevFront_Sab_Sentry),
            QCLASS(O_KardishevFront_Sab_Sapper),
            QCLASS(O_KardishevFront_Sab_MGTeam),
            QCLASS(O_KardishevFront_Sab_Recon),
            QCLASS(O_KardishevFront_Sab_Sniper),
            QCLASS(B_AssaultPack_rgr_AT),
            QCLASS(O_Carryall_green_F_AT),
        };
        weapons[] = {
            QCLASS(srifle_camo_Burris),
            QCLASS(arifle_AK12U_Supp),
            QCLASS(arifle_VelkoR5_GL_Supp),
            QCLASS(arifle_VelkoR5_MRCO_Supp),
            QCLASS(arifle_VelkoR5_Supp),
            QCLASS(LMG_S77_Compact_Supp),
            QCLASS(srifle_DMR_02_KHS_Supp),
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixeunits_main",
            "data_f_lxWS_Loadorder",
            "milgp_uniforms_cfg",
            "tacu_main",
        };
        authors[] = {"Thomas Watson"};
        VERSION_CONFIG;
    };
};

class CfgFactionClasses {
    class CLASS(O_KardishevFront) {
        scope = 2;
        curatorScope = 2;
        displayName = "Kardishev Front";
        side = 0;
        priority = 0;
    };
};

class CfgEditorSubcategories {
    class CLASS(men_saboteur) {
        displayName = "Men (Saboteur)";
    };
};

#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
#include "CfgWeapons.hpp"
