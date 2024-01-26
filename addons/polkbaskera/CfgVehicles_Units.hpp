class B_Soldier_F;
class CLASS(B_Rifleman_F): B_Soldier_F {
	dlc = QUOTE(prefix);
	scope = 2;
	curatorScope = 2;
	genericNames = "RussianMen";
	identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch", "G_RUS_SF"};
	faction = QCLASS(B_PolkBaskera);
	weapons[] = {"arifle_AK12U_CMore", "hgun_Rook40_F", "Throw", "Put"};
	respawnWeapons[] = {"arifle_AK12U_CMore", "hgun_Rook40_F", "Throw", "Put"};
	magazines[] = {R6("30Rnd_762x39_Mag_Green_F"), R2("16Rnd_9x21_Mag"),"HandGrenade", R2("SmokeShell")};
	respawnMagazines[] = {R6("30Rnd_762x39_Mag_Green_F"), R2("16Rnd_9x21_Mag"),"HandGrenade", R2("SmokeShell")};
	linkedItems[] = {"WSLV_Platecarrier_GRN_NF", "CUP_H_RUS_6B27", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	respawnLinkedItems[] = {"WSLV_Platecarrier_GRN_NF", "CUP_H_RUS_6B27", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	Items[] = {R4("ACE_elasticBandage"), R4("ACE_packingBandage"), R2("ACE_quikclot")};
	RespawnItems[] = {R4("ACE_elasticBandage"), R4("ACE_packingBandage"), R2("ACE_quikclot")};
	uniformClass = "CUP_I_B_PMC_Unit_34";
};

class CLASS(B_TeamLeader_F): CLASS(B_Rifleman_F) {
	displayname = "Team Leader";
	icon = "iconManLeader";
	weapons[] = {"arifle_AK12U_F", "hgun_Rook40_F", "Binocular", "Throw", "Put"};
	respawnWeapons[] = {"arifle_AK12U_F", "hgun_Rook40_F", "Binocular", "Throw", "Put"};
	magazines[] = {R6("30Rnd_762x39_AK12_Mag_Tracer_F"), R2("16Rnd_9x21_Mag"),"HandGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellPurple"};
	respawnMagazines[] = {R6("30Rnd_762x39_AK12_Mag_Tracer_F"), R2("16Rnd_9x21_Mag"),"HandGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellPurple"};
	linkedItems[] = {"WSLV_Platecarrier_GRN_NF", "H_Beret_blk","G_Bandanna_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_1PN138_Hide"};
	respawnLinkedItems[] = {"WSLV_Platecarrier_GRN_NF", "H_Beret_blk","G_Bandanna_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_1PN138_Hide"};
};

class CLASS(B_Rifleman_AT_F): CLASS(B_Rifleman_F) {
	displayname = "Rifleman (AT)";
	icon = "iconManAT";
	role = "MissileSpecialist";
	weapons[] = {"arifle_AKM_F", "launch_RPG32_green_F", "Throw", "Put"};
	respawnWeapons[] = {"arifle_AKM_F", "launch_RPG32_green_F", "Throw", "Put"};
	magazines[] = {R5("30Rnd_762x39_Mag_Green_F"), "RPG32_F", R2("RPG32_HE_F"), R2("SmokeShell")};
	respawnMagazines[] = {R5("30Rnd_762x39_Mag_Green_F"), "RPG32_F", R2("RPG32_HE_F"), R2("SmokeShell")};
	linkedItems[] = {"WSLV_Platecarrier_GRN_NF","G_Balaclava_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	respawnLinkedItems[] = {"WSLV_Platecarrier_GRN_NF","G_Balaclava_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	Items[] = {R4("ACE_elasticBandage"), R4("ACE_packingBandage"), R2("ACE_quikclot")};
	RespawnItems[] = {R4("ACE_elasticBandage"), R4("ACE_packingBandage"), R2("ACE_quikclot")};
	uniformClass = "CUP_I_B_PMC_Unit_29";
	backpack = QCLASS(B_Carryall_green_F_AT);
}; // not done -- Backpack needs items

class CLASS(B_Marksman_F): CLASS(B_Rifleman_F) {
	displayname = "Marksman";
	role = "Marksman";
	weapons[] = {"srifle_DMR_Burris", "Binocular", "Throw", "Put"};
	respawnWeapons[] = {"srifle_DMR_Burris", "Binocular", "Throw", "Put"};
	magazines[] = {R6("20Rnd_762x51_Mag_blk_lxWS"),"HandGrenade", "SmokeShell"};
	respawnMagazines[] = {R6("20Rnd_762x51_Mag_blk_lxWS"),"HandGrenade", "SmokeShell"};
	linkedItems[] = {"WSLV_Platecarrier_GRN_NF", "CUP_H_RUS_6B27_goggles","G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	respawnLinkedItems[] = {"WSLV_Platecarrier_GRN_NF", "CUP_H_RUS_6B27_goggles","G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	uniformClass = "CUP_I_B_PMC_Unit_30";
};

class CLASS(B_Soldier_exp_F): CLASS(B_Rifleman_F) {
	displayname = "Demolitions Specialist";
	icon = "iconManExplosive";
	role = "Sapper";
	weapons[] = {"arifle_AKS_F", "hgun_Rook40_F", "Throw", "Put"};
	respawnWeapons[] = {"arifle_AKS_F", "hgun_Rook40_F", "Throw", "Put"};
	magazines[] = {R6("30Rnd_545x39_Mag_Green_F"), R2("16Rnd_9x21_Mag"),"HandGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellPurple"};
	respawnMagazines[] = {R6("30Rnd_545x39_Mag_Green_F"), R2("16Rnd_9x21_Mag"),"HandGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellPurple"};
	linkedItems[] = {"WSLV_Platecarrier_GRN_NF", "CUP_H_RUS_6B27","G_Bandanna_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	respawnLinkedItems[] = {"WSLV_Platecarrier_GRN_NF", "CUP_H_RUS_6B27","G_Bandanna_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	backpack = QCLASS(B_Carryall_green_F_DMO);
}; // not done -- Backpack needs items

class CLASS(B_Engineer_F): CLASS(B_Rifleman_F) {
	displayname = "Engineer";
	icon = "iconManEngineer";
	role = "Engineer";
	weapons[] = {"arifle_AKS_F", "hgun_Rook40_F", "Throw", "Put"};
	respawnWeapons[] = {"arifle_AKS_F", "hgun_Rook40_F", "Throw", "Put"};
	magazines[] = {R6("30Rnd_545x39_Mag_Green_F"), R2("16Rnd_9x21_Mag"),"HandGrenade", "SmokeShell"};
	respawnMagazines[] = {R6("30Rnd_545x39_Mag_Green_F"), R2("16Rnd_9x21_Mag"),"HandGrenade", "SmokeShell"};
	linkedItems[] = {"WSLV_Platecarrier_GRN_NF", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	respawnLinkedItems[] = {"WSLV_Platecarrier_GRN_NF", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	backpack = QCLASS(B_LegStrapBag_black_F_ENG);
}; // not done -- Backpack needs items

class CLASS(B_Medic_F): CLASS(B_Rifleman_F) {
	displayname = "Combat Life Saver";
	icon = "iconManMedic";
	weapons[] = {"arifle_AKS_F", "hgun_Rook40_F", "Throw", "Put"};
	respawnWeapons[] = {"arifle_AKS_F", "hgun_Rook40_F", "Throw", "Put"};
	magazines[] = {R6("30Rnd_545x39_Mag_Green_F"), R2("16Rnd_9x21_Mag"),"HandGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellPurple"};
	respawnMagazines[] = {R6("30Rnd_545x39_Mag_Green_F"), R2("16Rnd_9x21_Mag"),"HandGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellPurple"};
	linkedItems[] = {"WSLV_Platecarrier_GRN_NF","G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	respawnLinkedItems[] = {"WSLV_Platecarrier_GRN_NF","G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	backpack = QCLASS(B_Kitbag_rgr_CLS);
}; // not done -- Backpack needs items

class CLASS(B_Autorifleman_F): CLASS(B_Rifleman_F) {
	displayname = "Autorifleman";
	icon = "iconManMG";
    role = "MachineGunner";
	weapons[] = {"arifle_RPK12_F", "Throw", "Put"};
	respawnWeapons[] = {"arifle_RPK12_F", "Throw", "Put"};
	magazines[] = {R4("75rnd_762x39_AK12_Mag_Tracer_F"), "HandGrenade", R2("SmokeShell")};
	respawnMagazines[] = {R4("75rnd_762x39_AK12_Mag_Tracer_F"), "HandGrenade", R2("SmokeShell")};
	linkedItems[] = {"WSLV_Platecarrier_GRN_NF","G_Balaclava_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	respawnLinkedItems[] = {"WSLV_Platecarrier_GRN_NF","G_Balaclava_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
};

class CLASS(B_Grenadier_F): CLASS(B_Rifleman_F) {
	displayname = "Grenadier";
	role = "Grenadier";
	weapons[] = {"arifle_AK12_GL_F", "Throw", "Put"};
	respawnWeapons[] = {"arifle_AK12_GL_F", "Throw", "Put"};
	magazines[] = {R6("30Rnd_762x39_AK12_Mag_F"), R3("1Rnd_HE_Grenade_shell"), R2("UGL_FlareRed_F"), R2("1Rnd_SmokeRed_Grenade_shell"), R2("1Rnd_Smoke_Grenade_shell"), "HandGrenade", "SmokeShell"};
	respawnMagazines[] = {R6("30Rnd_762x39_AK12_Mag_F"), R3("1Rnd_HE_Grenade_shell"), R2("UGL_FlareRed_F"), R2("1Rnd_SmokeRed_Grenade_shell"), R2("1Rnd_Smoke_Grenade_shell"), "HandGrenade", "SmokeShell"};
	linkedItems[] = {"WSLV_Platecarrier_GRN_NF", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	respawnLinkedItems[] = {"WSLV_Platecarrier_GRN_NF", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	uniformClass = "CUP_I_B_PMC_Unit_34";
};

class CLASS(B_HeliPilot_F): CLASS(B_Rifleman_F) {
	displayname = "Helicopter Pilot";
	weapons[] = {"arifle_AKS_F", "Throw", "Put"};
	respawnWeapons[] = {"arifle_AKS_F", "Throw", "Put"};
	magazines[] = {R4("30Rnd_545x39_Mag_Green_F"), "SmokeShell", "SmokeShellRed", "SmokeShellPurple"};
	respawnMagazines[] = {R4("30Rnd_545x39_Mag_Green_F"), "SmokeShell", "SmokeShellRed", "SmokeShellPurple"};
	linkedItems[] = {"V_CarrierRigKBT_01_Olive_F", "H_PilotHelmetHeli_O","G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	respawnLinkedItems[] = {"V_CarrierRigKBT_01_Olive_F", "H_PilotHelmetHeli_O","G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
};

class CLASS(B_Crewman_F): CLASS(B_Rifleman_F) {
	displayname = "Crewman";
	role = "Crewman";
	weapons[] = {"arifle_AKS_F", "Throw", "Put"};
	respawnWeapons[] = {"arifle_AKS_F", "Throw", "Put"};
	magazines[] = {R4("30Rnd_545x39_Mag_Green_F"), "SmokeShell", "HandGrenade"};
	respawnMagazines[] = {R4("30Rnd_545x39_Mag_Green_F"), "SmokeShell", "HandGrenade"};
	linkedItems[] = {"V_CarrierRigKBT_01_Olive_F", "H_Tank_eaf_F","G_Bandanna_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	respawnLinkedItems[] = {"V_CarrierRigKBT_01_Olive_F", "H_Tank_eaf_F","G_Bandanna_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
};

class CLASS(B_Sniper_F): CLASS(B_Rifleman_F) {
	displayname = "Sniper";
	weapons[] = {"srifle_DMR_05_KHS", "hgun_Rook40_F", "Throw", "Put"};
	respawnWeapons[] = {"srifle_DMR_05_KHS", "hgun_Rook40_F", "Throw", "Put"};
	magazines[] = {R7("10Rnd_93x64_DMR_05_Mag"), R2("16Rnd_9x21_Mag"),"HandGrenade", R2("SmokeShell")};
	respawnMagazines[] = {R7("10Rnd_93x64_DMR_05_Mag"), R2("16Rnd_9x21_Mag"),"HandGrenade", R2("SmokeShell")};
	linkedItems[] = {"V_SmershVest_01_F","CUP_G_RUS_Balaclava_Ratnik_winter_v2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	respawnLinkedItems[] = {"V_SmershVest_01_F","CUP_G_RUS_Balaclava_Ratnik_winter_v2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	uniformClass = "CUP_I_B_PMC_Unit_33";
};

class CLASS(B_Spotter_F): CLASS(B_Rifleman_F) {
	displayname = "Spotter";
	weapons[] = {"arifle_AK12U_Elcan", "Rangefinder", "Throw", "Put"};
	respawnWeapons[] = {"arifle_AK12U_Elcan", "Rangefinder", "Throw", "Put"};
	magazines[] = {R7("30Rnd_762x39_Mag_Green_F"), R2("HandGrenade"), R2("SmokeShell")};
	respawnMagazines[] = {R7("30Rnd_762x39_Mag_Green_F"), R2("HandGrenade"), R2("SmokeShell")};
	linkedItems[] = {"V_SmershVest_01_radio_F","CUP_G_RUS_Balaclava_Ratnik_winter_v2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	respawnLinkedItems[] = {"V_SmershVest_01_radio_F","CUP_G_RUS_Balaclava_Ratnik_winter_v2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	uniformClass = "CUP_I_B_PMC_Unit_33";
};