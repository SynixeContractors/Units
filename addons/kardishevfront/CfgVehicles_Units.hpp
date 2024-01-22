class TACU_Main_U_OPFOR_Soldier_Base;
class CLASS(O_Rifleman_F): TACU_Main_U_OPFOR_Soldier_Base {
	displayname = "Rifleman";
	dlc = QUOTE(prefix);
	scope = 2;
	curatorScope = 2;
	genericNames = "RussianMen";
	identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_SF"};
	faction = QCLASS(B_KardishevFront);
	weapons[] = {"arifle_AKM_F", "Throw", "Put"};
	respawnWeapons[] = {"arifle_AKM_F", "Throw", "Put"};
	magazines[] = {R6("30Rnd_762x39_Mag_F"), R2("SmokeShell"), "MiniGrenade"};
	respawnMagazines[] = {R6("30Rnd_762x39_Mag_F"), R2("SmokeShell"), "MiniGrenade"};
	linkedItems[] = {"CUP_V_O_SLA_M23_1_OD", "CUP_G_RUS_Balaclava_Ratnik", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	respawnLinkedItems[] = {"CUP_V_O_SLA_M23_1_OD", "CUP_G_RUS_Balaclava_Ratnik", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	Items[] = {R4("ACE_elasticBandage"), R4("ACE_packingBandage"), R2("ACE_quikclot")};
	RespawnItems[] = {R4("ACE_elasticBandage"), R4("ACE_packingBandage"), R2("ACE_quikclot")};
	uniformClass = "milgp_u_g3_field_set_tropentarn_mcalpine";
}; // need mil-gp load order (FUCK)

class CLASS(O_TeamLeader_F): CLASS(O_Rifleman_F) {
	displayname = "Team Leader";
	icon = "iconManLeader";
	weapons[] = {"arifle_Velko_lxWS", "Binocular", "Throw", "Put"};
	respawnWeapons[] = {"arifle_Velko_lxWS", "Binocular", "Throw", "Put"};
	magazines[] = {R6("35Rnd_556x45_Velko_tracer_yellow_lxWS"), "MiniGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellGreen"};
	respawnMagazines[] = {R6("35Rnd_556x45_Velko_tracer_yellow_lxWS"), "MiniGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellGreen"};
	linkedItems[] = {"CUP_V_O_SLA_M23_1_OD", "CUP_H_RUS_Balaclava_Ratnik_Headphones_v2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	respawnLinkedItems[] = {"CUP_V_O_SLA_M23_1_OD", "CUP_H_RUS_Balaclava_Ratnik_Headphones_v2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	uniformClass = "milgp_u_g3_field_set_flecktarn_mcalpine";
};

class CLASS(O_Marksman_F): CLASS(O_Rifleman_F) {
	displayname = "Marksman";
	role = "Marksman";
	weapons[] = {"srifle_camo_Burris", "Binocular", "Throw", "Put"};
	respawnWeapons[] = {"srifle_camo_Burris", "Binocular", "Throw", "Put"};
	magazines[] = {R6("srifle_DMR_06_camo_F"), "MiniGrenade", R2("SmokeShell")};
	respawnMagazines[] = {R6("srifle_DMR_06_camo_F"), "MiniGrenade", R2("SmokeShell")};
	linkedItems[] = {"CUP_V_O_SLA_M23_1_OD", "CUP_G_RUS_Balaclava_Ratnik_v2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	respawnLinkedItems[] = {"CUP_V_O_SLA_M23_1_OD", "CUP_G_RUS_Balaclava_Ratnik_v2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	uniformClass = "milgp_u_g3_field_set_tropentarn_mcalpine";
};

class CLASS(O_MachineGunner_F): CLASS(O_Rifleman_F) {
	displayname = "Machine Gunner";
	icon = "iconManMG";
	role = "MachineGunner";
	weapons[] = {"LMG_S77_lxWS", "Throw", "Put"};
	respawnWeapons[] = {"LMG_S77_lxWS", "Throw", "Put"};
	magazines[] = {R5("100Rnd_762x51_S77_Yellow_Tracer_lxWS"), "SmokeShell"};
	respawnMagazines[] = {R5("100Rnd_762x51_S77_Yellow_Tracer_lxWS"), "SmokeShell"};
	linkedItems[] = {"CUP_V_O_SLA_M23_1_OD", "CUP_G_RUS_Balaclava_Ratnik", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	respawnLinkedItems[] = {"CUP_V_O_SLA_M23_1_OD", "CUP_G_RUS_Balaclava_Ratnik", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	uniformClass = "milgp_u_g3_field_set_mcalpine_tropentarn";
};

class CLASS(O_Rifleman_AT_F): CLASS(O_Rifleman_F) {
	displayname = "Rifleman (AT)";
	icon = "iconManAT";
	role = "MissileSpecialist";
	weapons[] = {"arifle_AKS_F", "launch_RPG7_F", "Throw", "Put"};
	respawnWeapons[] = {"arifle_AKS_F", "launch_RPG7_F", "Throw", "Put"};
	magazines[] = {R5("30Rnd_545x39_Mag_F"), "RPG7_F", R2("SmokeShell")};
	respawnMagazines[] = {R5("30Rnd_545x39_Mag_F"), "RPG7_F", R2("SmokeShell")};
	linkedItems[] = {"CUP_V_O_SLA_M23_1_OD", "CUP_H_RUS_Balaclava_Ratnik_Headphones", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	respawnLinkedItems[] = {"CUP_V_O_SLA_M23_1_OD", "CUP_H_RUS_Balaclava_Ratnik_Headphones", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	uniformClass = "milgp_u_g3_field_set_tropentarn_mcalpine";
	backpack = QCLASS(B_AssaultPack_rgr_AT);
};

class CLASS(O_Grenadier_F): CLASS(O_Rifleman_F) {
	displayname = "Grenadier";
	role = "Grenadier";
	weapons[] = {"arifle_AK12_GL_F", "Binocular", "Throw", "Put"};
	respawnWeapons[] = {"arifle_AK12_GL_F", "Binocular", "Throw", "Put"};
	magazines[] = {R6("30Rnd_762x39_Mag_F"), R4("1Rnd_HE_Grenade_shell"), R2("1Rnd_Smoke_Grenade_shell"), "MiniGrenade", "SmokeShell"};
	respawnMagazines[] = {R6("30Rnd_762x39_Mag_F"), R4("1Rnd_HE_Grenade_shell"), R2("1Rnd_Smoke_Grenade_shell"), "MiniGrenade", "SmokeShell"};
	linkedItems[] = {"CUP_V_O_SLA_M23_1_OD", "CUP_G_RUS_Balaclava_Ratnik", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	respawnLinkedItems[] = {"CUP_V_O_SLA_M23_1_OD", "CUP_G_RUS_Balaclava_Ratnik", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	uniformClass = "milgp_u_g3_field_set_mcalpine_flecktarn";
};

class CLASS(O_Medic_F): CLASS(O_Rifleman_F) {
	displayname = "Combat Life Saver";
	icon = "iconManMedic";
	weapons[] = {"arifle_AKS_F", "Throw", "Put"};
	respawnWeapons[] = {"arifle_AKS_F", "Throw", "Put"};
	magazines[] = {R6("30Rnd_545x39_Mag_F"), "SmokeShell"};
	respawnMagazines[] = {R6("30Rnd_545x39_Mag_F"), "SmokeShell"};
	linkedItems[] = {"CUP_V_O_SLA_M23_1_OD", "H_Watchcap_camo", "G_Bandanna_tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	respawnLinkedItems[] = {"CUP_V_O_SLA_M23_1_OD", "H_Watchcap_camo", "G_Bandanna_tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	uniformClass = "milgp_u_g3_field_set_mcalpine_flecktarn";
}; // Needs backpack + items

class CLASS(O_Soldier_exp_F): CLASS(O_Rifleman_F) {
	displayname = "Explosvies Specialist";
	icon = "iconManExplosive";
	role = "Sapper";
	weapons[] = {"arifle_VelkoR5_lxWS", "Throw", "Put"};
	respawnWeapons[] = {"arifle_VelkoR5_lxWS", "Throw", "Put"};
	magazines[] = {R6("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"), R2("SmokeShell")};
	respawnMagazines[] = {R6("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"), R2("SmokeShell")};
	linkedItems[] = {"CUP_V_O_SLA_M23_1_OD", "H_Watchcap_sgg","G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	respawnLinkedItems[] = {"CUP_V_O_SLA_M23_1_OD", "H_Watchcap_sgg", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	uniformClass = "milgp_u_g3_field_set_flecktarn_mcalpine";
};

class CLASS(O_Saboteur_exp_F): CLASS(O_Rifleman_F) {
	editorSubcategory = QCLASS(men_saboteur);
	displayname = "Saboteur (Explosives)";
	icon = "iconManExplosive";
	role = "Sapper";
	weapons[] = {"arifle_AK12U_Supp", "Binocular", "Throw", "Put"};
	respawnWeapons[] = {"arifle_AK12U_Supp", "Binocular", "Throw", "Put"};
	magazines[] = {R6("30Rnd_762x39_Mag_F"), R2("MiniGrenade"), R2("SmokeShell")};
	respawnMagazines[] = {R6("30Rnd_762x39_Mag_F"), R2("MiniGrenade"), R2("SmokeShell")};
	linkedItems[] = {"V_SmershVest_01_radio_F", "CUP_H_RUS_Balaclava_Ratnik_Headphones_winter_v2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	respawnLinkedItems[] = {"V_SmershVest_01_radio_F", "CUP_H_RUS_Balaclava_Ratnik_Headphones_winter_v2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	uniformClass = "milgp_u_g3_field_set_mcalpine";
	model = "\milgp_uniforms\models\u_g3_field_set_base.p3d";
	hiddenSelections[] = {"camo","camo1","camo2","insignia","clan"};
	hiddenSelectionsTextures[] = {"milgp_uniforms\textures\u_g3_field_shirt_mcalpine_co.paa","milgp_uniforms\textures\u_g3_field_pants_mcalpine_co.paa","milgp_uniforms\textures\u_equipment_blk_co.paa"};
	vehicleclass = "MilGP";
};