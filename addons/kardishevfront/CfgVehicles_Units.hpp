class TACU_Main_U_OPFOR_Soldier_Base;
class CLASS(O_Rifleman_F): TACU_Main_U_OPFOR_Soldier_Base {
    displayName = "Rifleman";
    SCOPE_DLC;
    genericNames = "RussianMen";
    identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_SF"};
    faction = QCLASS(O_KardishevFront);
    weapons[] = {"arifle_AKM_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_AKM_F", "Throw", "Put"};
    magazines[] = {R6("30Rnd_762x39_Mag_F"), R2("SmokeShell"), "MiniGrenade"};
    respawnMagazines[] = {R6("30Rnd_762x39_Mag_F"), R2("SmokeShell"), "MiniGrenade"};
    linkedItems[] = {"CUP_V_O_SLA_M23_1_OD", "CUP_G_RUS_Balaclava_Ratnik", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"CUP_V_O_SLA_M23_1_OD", "CUP_G_RUS_Balaclava_Ratnik", DEFAULT_ITEMS_RADIO};
    items[] = {R4("ACE_elasticBandage"), R4("ACE_packingBandage"), R2("ACE_quikclot")};
    respawnItems[] = {R4("ACE_elasticBandage"), R4("ACE_packingBandage"), R2("ACE_quikclot")};
    uniformClass = "milgp_u_g3_field_set_tropentarn_mcalpine";
};

class CLASS(O_TeamLeader_F): CLASS(O_Rifleman_F) {
    displayName = "Team Leader";
    icon = "iconManLeader";
    weapons[] = {"arifle_Velko_lxWS", "Binocular", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Velko_lxWS", "Binocular", "Throw", "Put"};
    magazines[] = {R6("35Rnd_556x45_Velko_tracer_yellow_lxWS"), "MiniGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellGreen"};
    respawnMagazines[] = {R6("35Rnd_556x45_Velko_tracer_yellow_lxWS"), "MiniGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellGreen"};
    linkedItems[] = {"CUP_V_O_SLA_M23_1_OD", "CUP_H_RUS_Balaclava_Ratnik_Headphones_v2", "G_Shades_Blue", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"CUP_V_O_SLA_M23_1_OD", "CUP_H_RUS_Balaclava_Ratnik_Headphones_v2", "G_Shades_Blue", DEFAULT_ITEMS_RADIO};
    uniformClass = "milgp_u_g3_field_set_flecktarn_mcalpine";
};

class CLASS(O_Marksman_F): CLASS(O_Rifleman_F) {
    displayName = "Marksman";
    role = "Marksman";
    weapons[] = {"srifle_camo_Burris", "Binocular", "Throw", "Put"};
    respawnWeapons[] = {"srifle_camo_Burris", "Binocular", "Throw", "Put"};
    magazines[] = {R6("20Rnd_762x51_Mag"), "MiniGrenade", R2("SmokeShell")};
    respawnMagazines[] = {R6("20Rnd_762x51_Mag"), "MiniGrenade", R2("SmokeShell")};
    linkedItems[] = {"CUP_V_O_SLA_M23_1_OD", "CUP_G_RUS_Balaclava_Ratnik_v2", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"CUP_V_O_SLA_M23_1_OD", "CUP_G_RUS_Balaclava_Ratnik_v2", DEFAULT_ITEMS_RADIO};
};

class CLASS(O_MachineGunner_F): CLASS(O_Rifleman_F) {
    displayName = "Machine Gunner";
    icon = "iconManMG";
    role = "MachineGunner";
    weapons[] = {"LMG_S77_lxWS", "Throw", "Put"};
    respawnWeapons[] = {"LMG_S77_lxWS", "Throw", "Put"};
    magazines[] = {R5("100Rnd_762x51_S77_Yellow_Tracer_lxWS"), "SmokeShell"};
    respawnMagazines[] = {R5("100Rnd_762x51_S77_Yellow_Tracer_lxWS"), "SmokeShell"};
    uniformClass = "milgp_u_g3_field_set_mcalpine_tropentarn";
};

class CLASS(O_Rifleman_AT_F): CLASS(O_Rifleman_F) {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    weapons[] = {"arifle_AKS_F", "launch_RPG7_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_AKS_F", "launch_RPG7_F", "Throw", "Put"};
    magazines[] = {R5("30Rnd_545x39_Mag_F"), "RPG7_F", R2("SmokeShell")};
    respawnMagazines[] = {R5("30Rnd_545x39_Mag_F"), "RPG7_F", R2("SmokeShell")};
    linkedItems[] = {"CUP_V_O_SLA_M23_1_OD", "CUP_H_RUS_Balaclava_Ratnik_Headphones", "G_Shades_Blue", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"CUP_V_O_SLA_M23_1_OD", "CUP_H_RUS_Balaclava_Ratnik_Headphones", "G_Shades_Blue", DEFAULT_ITEMS_RADIO};
    backpack = QCLASS(O_AssaultPack_rgr_AT);
};

class CLASS(O_Grenadier_F): CLASS(O_Rifleman_F) {
    displayName = "Grenadier";
    role = "Grenadier";
    weapons[] = {"arifle_AK12_GL_F", "Binocular", "Throw", "Put"};
    respawnWeapons[] = {"arifle_AK12_GL_F", "Binocular", "Throw", "Put"};
    magazines[] = {R6("30Rnd_762x39_Mag_F"), R4("1Rnd_HE_Grenade_shell"), R2("1Rnd_Smoke_Grenade_shell"), "MiniGrenade", "SmokeShell"};
    respawnMagazines[] = {R6("30Rnd_762x39_Mag_F"), R4("1Rnd_HE_Grenade_shell"), R2("1Rnd_Smoke_Grenade_shell"), "MiniGrenade", "SmokeShell"};
    linkedItems[] = {"CUP_V_O_SLA_M23_1_OD", "CUP_G_RUS_Balaclava_Ratnik", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"CUP_V_O_SLA_M23_1_OD", "CUP_G_RUS_Balaclava_Ratnik", DEFAULT_ITEMS_RADIO};
    uniformClass = "milgp_u_g3_field_set_mcalpine_flecktarn";
};

class CLASS(O_Medic_F): CLASS(O_Rifleman_F) {
    displayName = "Combat Life Saver";
    icon = "iconManMedic";
    weapons[] = {"arifle_AKS_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_AKS_F", "Throw", "Put"};
    magazines[] = {R6("30Rnd_545x39_Mag_F"), "SmokeShell"};
    respawnMagazines[] = {R6("30Rnd_545x39_Mag_F"), "SmokeShell"};
    linkedItems[] = {"CUP_V_O_SLA_M23_1_OD", "H_Watchcap_camo", "G_Bandanna_tan", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"CUP_V_O_SLA_M23_1_OD", "H_Watchcap_camo", "G_Bandanna_tan", DEFAULT_ITEMS_RADIO};
    uniformClass = "milgp_u_g3_field_set_mcalpine_flecktarn";
    backpack = QCLASS(O_Kitbag_rgr_CLS);
};

class CLASS(O_Soldier_exp_F): CLASS(O_Rifleman_F) {
    displayName = "Explosvies Specialist";
    icon = "iconManExplosive";
    role = "Sapper";
    weapons[] = {"arifle_VelkoR5_lxWS", "Throw", "Put"};
    respawnWeapons[] = {"arifle_VelkoR5_lxWS", "Throw", "Put"};
    magazines[] = {R6("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"), R2("SmokeShell"), R2("DemoCharge_Remote_Mag")};
    respawnMagazines[] = {R6("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"), R2("SmokeShell"), R2("DemoCharge_Remote_Mag")};
    linkedItems[] = {"CUP_V_O_SLA_M23_1_OD", "H_Watchcap_sgg","G_Bandanna_oli", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"CUP_V_O_SLA_M23_1_OD", "H_Watchcap_sgg", "G_Bandanna_oli", DEFAULT_ITEMS_RADIO};
    uniformClass = "milgp_u_g3_field_set_flecktarn_mcalpine";
    backpack = QCLASS(O_Carryall_green_F_DMO);
};

class CLASS(O_Sapper_Sab_F): CLASS(O_Rifleman_F) {
    editorSubcategory = QCLASS(men_saboteur);
    displayName = "Sapper";
    icon = "iconManExplosive";
    role = "Sapper";
    weapons[] = {"arifle_AK12U_Supp", "Throw", "Put"};
    respawnWeapons[] = {"arifle_AK12U_Supp", "Throw", "Put"};
    magazines[] = {R6("30Rnd_762x39_Mag_F"), R4("APERSMine_Range_Mag"), R2("SmokeShell")};
    respawnMagazines[] = {R6("30Rnd_762x39_Mag_F"), R4("APERSMine_Range_Mag"), R2("SmokeShell")};
    linkedItems[] = {"V_SmershVest_01_radio_F", "CUP_H_RUS_Balaclava_Ratnik_Headphones_winter", "G_Shades_Blue", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_SmershVest_01_radio_F", "CUP_H_RUS_Balaclava_Ratnik_Headphones_winter", "G_Shades_Blue", DEFAULT_ITEMS_RADIO};
    uniformClass = "milgp_u_g3_field_set_mcalpine";
    backpack = QCLASS(O_Carryall_green_F_DMO);
};

class CLASS(O_TeamLeader_Sab_F): CLASS(O_Rifleman_F) {
    editorSubcategory = QCLASS(men_saboteur);
    displayName = "Team Leader";
    icon = "iconManLeader";
    weapons[] = {"arifle_VelkoR5_GL_Supp", "Binocular", "Throw", "Put"};
    respawnWeapons[] = {"arifle_VelkoR5_GL_Supp", "Binocular", "Throw", "Put"};
    magazines[] = {R6("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"), R2("MiniGrenade"), R2("SmokeShell"), R5("1Rnd_HE_Grenade_shell"), R2("1Rnd_Smoke_Grenade_shell"), R2("1Rnd_SmokeRed_Grenade_shell")};
    respawnMagazines[] = {R6("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"), R2("MiniGrenade"), R2("SmokeShell"), R5("1Rnd_HE_Grenade_shell"), R2("1Rnd_Smoke_Grenade_shell"), R2("1Rnd_SmokeRed_Grenade_shell")};
    linkedItems[] = {"V_SmershVest_01_radio_F", "CUP_H_RUS_Balaclava_Ratnik_Headphones_winter", "G_Shades_Blue", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_SmershVest_01_radio_F", "CUP_H_RUS_Balaclava_Ratnik_Headphones_winter", "G_Shades_Blue", DEFAULT_ITEMS_RADIO};
    uniformClass = "milgp_u_g3_field_set_mcalpine";
};

class CLASS(O_MachineGunner_Sab_F): CLASS(O_Rifleman_F) {
    editorSubcategory = QCLASS(men_saboteur);
    displayName = "Machine Gunner";
    icon = "iconManMG";
    role = "MachineGunner";
    weapons[] = {"LMG_S77_Compact_Supp", "Throw", "Put"};
    respawnWeapons[] = {"LMG_S77_Compact_Supp", "Throw", "Put"};
    magazines[] = {R6("100Rnd_762x51_S77_Yellow_Tracer_lxWS"), R2("SmokeShell")};
    respawnMagazines[] = {R6("100Rnd_762x51_S77_Yellow_Tracer_lxWS"), R2("SmokeShell")};
    linkedItems[] = {"V_SmershVest_01_F", "CUP_G_RUS_Balaclava_Ratnik_winter_v2", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_SmershVest_01_F", "CUP_G_RUS_Balaclava_Ratnik_winter_v2", DEFAULT_ITEMS_RADIO};
    uniformClass = "milgp_u_g3_field_set_mcalpine";
};

class CLASS(O_Marksman_Sab_F): CLASS(O_Rifleman_F) {
    editorSubcategory = QCLASS(men_saboteur);
    displayName = "Marksman";
    role = "Marksman";
    weapons[] = {"arifle_VelkoR5_MRCO_Supp", "Throw", "Put"};
    respawnWeapons[] = {"arifle_VelkoR5_MRCO_Supp", "Throw", "Put"};
    magazines[] = {R6("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"), R2("MiniGrenade"), R2("SmokeShell")};
    respawnMagazines[] = {R6("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"), R2("MiniGrenade"), R2("SmokeShell")};
    linkedItems[] = {"V_SmershVest_01_F", "CUP_G_RUS_Balaclava_Ratnik_winter_v2", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_SmershVest_01_F", "CUP_G_RUS_Balaclava_Ratnik_winter_v2", DEFAULT_ITEMS_RADIO};
    uniformClass = "milgp_u_g3_field_set_mcalpine";
};

class CLASS(O_Rifleman_AT_Sab_F): CLASS(O_Rifleman_F) {
    editorSubcategory = QCLASS(men_saboteur);
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    weapons[] = {"arifle_AK12U_Supp", "launch_RPG32_green_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_AK12U_Supp", "launch_RPG32_green_F", "Throw", "Put"};
    magazines[] = {R4("30Rnd_762x39_Mag_F"), "SmokeShell"};
    respawnMagazines[] = {R4("30Rnd_762x39_Mag_F"), "SmokeShell"};
    linkedItems[] = {"V_SmershVest_01_F", "CUP_G_RUS_Balaclava_Ratnik_winter_v2", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_SmershVest_01_F", "CUP_G_RUS_Balaclava_Ratnik_winter_v2", DEFAULT_ITEMS_RADIO};
    uniformClass = "milgp_u_g3_field_set_mcalpine";
    backpack = QCLASS(O_Carryall_green_F_AT);
};

class CLASS(O_Medic_Sab_F): CLASS(O_Rifleman_F) {
    editorSubcategory = QCLASS(men_saboteur);
    displayName = "Combat Life Saver";
    icon = "iconManMedic";
    weapons[] = {"arifle_AK12U_Supp", "Throw", "Put"};
    respawnWeapons[] = {"arifle_AK12U_Supp", "Throw", "Put"};
    magazines[] = {R6("30Rnd_762x39_Mag_F"), "SmokeShell"};
    respawnMagazines[] = {R6("30Rnd_762x39_Mag_F"), "SmokeShell"};
    linkedItems[] = {"V_SmershVest_01_F", "CUP_G_RUS_Balaclava_Ratnik_winter_v2", DEFAULT_ITEMS_RADIO};
    respawnlinkedItems[] = {"V_SmershVest_01_F", "CUP_G_RUS_Balaclava_Ratnik_winter_v2", DEFAULT_ITEMS_RADIO};
    uniformClass = "milgp_u_g3_field_set_mcalpine";
    backpack = QCLASS(O_Kitbag_rgr_CLS);
};

class CLASS(O_Sniper_Sab_F): CLASS(O_Rifleman_F) {
    editorSubcategory = QCLASS(men_saboteur);
    displayName = "Sniper";
    role = "Marksman";
    weapons[] = {"srifle_DMR_02_KHS_Supp", "hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"srifle_DMR_02_KHS_Supp", "hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {R7("10Rnd_338_Mag"), R2("16Rnd_9x21_Mag"), R2("SmokeShell")};
    respawnMagazines[] = {R7("10Rnd_338_Mag"), R2("16Rnd_9x21_Mag"), R2("SmokeShell")};
    linkedItems[] = {"V_SmershVest_01_F", "CUP_G_RUS_Balaclava_Ratnik_winter_v2", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_SmershVest_01_F", "CUP_G_RUS_Balaclava_Ratnik_winter_v2", DEFAULT_ITEMS_RADIO};
    uniformClass = "milgp_u_g3_field_set_mcalpine";
};

class CLASS(O_Spotter_Sab_F): CLASS(O_Rifleman_F) {
    editorSubcategory = QCLASS(men_saboteur);
    displayName = "Spotter";
    weapons[] = {"arifle_VelkoR5_Supp", "Rangefinder", "Throw", "Put"};
    respawnWeapons[] = {"arifle_VelkoR5_Supp", "Rangefinder", "Throw", "Put"};
    magazines[] = {R6("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"), R2("MiniGrenade"), R2("SmokeShell")};
    respawnMagazines[] = {R6("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"), R2("MiniGrenade"), R2("SmokeShell")};
    linkedItems[] = {"V_SmershVest_01_radio_F", "CUP_G_RUS_Balaclava_Ratnik_winter_v2", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_SmershVest_01_radio_F", "CUP_G_RUS_Balaclava_Ratnik_winter_v2", DEFAULT_ITEMS_RADIO};
    uniformClass = "milgp_u_g3_field_set_mcalpine";
};
