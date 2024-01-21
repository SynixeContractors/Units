class O_Soldier_F;
class CLASS(O_Rifleman_F): O_Soldier_F {
	dlc = QUOTE(prefix);
	scope = 2;
	curatorScope = 2;
	genericNames = "RussianMen";
	identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_SF"};
	faction = QCLASS(B_KardishevFront);
	weapons[] = {"arifle_AK12_F", "Throw", "Put"};
	respawnWeapons[] = {"arifle_AK12_F", "Throw", "Put"};
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
	magazines[] = {R6("35Rnd_556x45_Velko_tracer_yellow_lxWS"),"MiniGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellGreen"};
	respawnMagazines[] = {R6("35Rnd_556x45_Velko_tracer_yellow_lxWS"),"MiniGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellGreen"};
	linkedItems[] = {"CUP_V_O_SLA_M23_1_OD", "CUP_H_RUS_Balaclava_Ratnik_Headphones_v2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	respawnLinkedItems[] = {"CUP_V_O_SLA_M23_1_OD", "CUP_H_RUS_Balaclava_Ratnik_Headphones_v2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	uniformClass = "milgp_u_g3_field_set_flecktarn_mcalpine";
};

class CLASS(O_Marksman_F): CLASS(O_Rifleman_F) {
	displayname = "Marksman";
	role = "Marksman";
	weapons[] = {"srifle_camo_Burris", "Binocular", "Throw", "Put"};
	respawnWeapons[] = {"srifle_camo_Burris", "Binocular", "Throw", "Put"};
	magazines[] = {R6("srifle_DMR_06_camo_F"),"MiniGrenade", R2("SmokeShell")};
	respawnMagazines[] = {R6("srifle_DMR_06_camo_F"),"MiniGrenade", R2("SmokeShell")};
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

class CLASS(O_ATRifleman_F): CLASS(O_Rifleman_F) {
	displayname = "AT Rifleman";
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