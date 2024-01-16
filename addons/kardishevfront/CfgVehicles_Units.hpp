class O_Soldier_F;
class CLASS(O_Rifleman_F): O_Soldier_F {
	dlc = QUOTE(prefix);
	scope = 2;
	curatorScope = 2;
	genericNames = "RussianMen";
	identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_SF"};
	faction = QCLASS(B_KardishevFront);
	weapons[] = {"arifle_AK12U_F", "Throw", "Put"};
	respawnWeapons[] = {"arifle_AK12U_F", "Throw", "Put"};
	magazines[] = {R5("30Rnd_762x39_Mag_Green_F"), R2("SmokeShell")};
	respawnMagazines[] = {R5("30Rnd_762x39_Mag_Green_F"), R2("SmokeShell")};
	linkedItems[] = {"WSLV_Platecarrier_GRN_NF", "CUP_H_RUS_6B27_headset_goggles","G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	respawnLinkedItems[] = {"WSLV_Platecarrier_GRN_NF", "CUP_H_RUS_6B27_headset_goggles","G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	Items[] = {R4("ACE_elasticBandage"), R4("ACE_packingBandage"), R2("ACE_quikclot")};
	RespawnItems[] = {R4("ACE_elasticBandage"), R4("ACE_packingBandage"), R2("ACE_quikclot")};
	uniformClass = "milgp_u_g3_field_set_tropentarn_mcalpine";
}; // need mil-gp load order (FUCK) -- also literally nothing else is correct except for the class n shiet