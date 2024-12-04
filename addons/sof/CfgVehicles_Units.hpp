class CLASS(Base_OPFOR);
class CLASS(SOF_O_Rifleman_wd): CLASS(Base_OPFOR) {
    displayName = "Rifleman";
    editorPreview = QPATHTOF(previews\CLASS(SOF_O_Rifleman_wd).jpg);
    SCOPE_DLC;
    genericNames = "EnochMen";
    identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_HAF_default"};
    faction = QCLASS(O_SOF);
    weapons[] = {"arifle_Mk20C_rds", "hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Mk20C_rds", "hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {R6("30Rnd_556x45_Stanag_red"), R2("16Rnd_9x21_Mag"), R2("SmokeShell"), "MiniGrenade"};
    respawnMagazines[] = {R6("30Rnd_556x45_Stanag_red"), R2("16Rnd_9x21_Mag"), R2("SmokeShell"), "MiniGrenade"};
    linkedItems[] = {"V_PlateCarrier1_blk", "H_Shemag_olive", "G_Lowprofile", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_PlateCarrier1_blk", "H_Shemag_olive", "G_Lowprofile", DEFAULT_ITEMS_RADIO};
    items[] = {R4("ACE_elasticBandage"), R4("ACE_packingBandage"), R2("ACE_quikclot")};
    respawnItems[] = {R4("ACE_elasticBandage"), R4("ACE_packingBandage"), R2("ACE_quikclot")};
    uniformClass = "U_lxWS_SFIA_pilot_O";
};

class CLASS(SOF_O_SquadLeader_wd): CLASS(SOF_O_Rifleman_wd) {
    displayName = "Squad Leader";
    editorPreview = QPATHTOF(previews\CLASS(SOF_O_SquadLeader_wd).jpg);
    icon = "iconManLeader";
    weapons[] = {"arifle_Velko_MRCO", "hgun_Rook40_F", "Binocular", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Velko_MRCO", "hgun_Rook40_F", "Binocular", "Throw", "Put"};
    magazines[] = {R6("35Rnd_556x45_Velko_tracer_red_lxWS"), R2("16Rnd_9x21_Mag"), "MiniGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellGreen"};
    respawnMagazines[] = {R6("35Rnd_556x45_Velko_tracer_red_lxWS"), R2("16Rnd_9x21_Mag"), "MiniGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellGreen"};
    linkedItems[] = {"V_PlateCarrier2_blk", "H_PASGT_basic_black_F", "G_Bandanna_shades", "NVGoggles_OPFOR", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_PlateCarrier2_blk", "H_PASGT_basic_black_F", "G_Bandanna_shades", "NVGoggles_OPFOR", DEFAULT_ITEMS_RADIO};
};

class CLASS(SOF_O_Grenadier_wd): CLASS(SOF_O_Rifleman_wd) {
    displayName = "Grenadier";
    editorPreview = QPATHTOF(previews\CLASS(SOF_O_Grenadier_wd).jpg);
    role = "Grenadier";
    weapons[] = {"arifle_Mk20_GL_saber", "hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Mk20_GL_saber", "hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {R6("30Rnd_556x45_Stanag_red"), R2("16Rnd_9x21_Mag"), R5("1Rnd_HE_Grenade_shell"), R2("1Rnd_SmokeRed_Grenade_shell"), R2("1Rnd_Smoke_Grenade_shell")};
    respawnMagazines[] = {R6("30Rnd_556x45_Stanag_red"), R2("16Rnd_9x21_Mag"), R5("1Rnd_HE_Grenade_shell"), R2("1Rnd_SmokeRed_Grenade_shell"), R2("1Rnd_Smoke_Grenade_shell")};
    linkedItems[] = {"V_PlateCarrier2_blk", "H_Booniehat_mgrn", "G_Bandanna_blk", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_PlateCarrier2_blk", "H_Booniehat_mgrn", "G_Bandanna_blk", DEFAULT_ITEMS_RADIO};
};

class CLASS(SOF_O_Autorifleman_wd): CLASS(SOF_O_Rifleman_wd) {
    displayName = "Autorifleman";
    editorPreview = QPATHTOF(previews\CLASS(SOF_O_Autorifleman_wd).jpg);
    icon = "iconManMG";
    role = "MachineGunner";
    weapons[] = {"LMG_03_saber", "Throw", "Put"};
    respawnWeapons[] = {"LMG_03_saber", "Throw", "Put"};
    magazines[] = {R4("200Rnd_556x45_Box_Tracer_Red_F"), "SmokeShell"};
    respawnMagazines[] = {R4("200Rnd_556x45_Box_Tracer_Red_F"), "SmokeShell"};
    linkedItems[] = {"V_PlateCarrier2_blk", "H_Watchcap_khk", "G_Bandanna_blk", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_PlateCarrier2_blk", "H_Watchcap_khk", "G_Bandanna_blk", DEFAULT_ITEMS_RADIO};
};

class CLASS(SOF_O_Rifleman_LAT_wd): CLASS(SOF_O_Rifleman_wd) {
    displayName = "Rifleman (AT)";
    editorPreview = QPATHTOF(previews\CLASS(SOF_O_Rifleman_LAT_wd).jpg);
    icon = "iconManAT";
    role = "MissileSpecialist";
    weapons[] = {"arifle_Mk20C_rds", "launch_RPG32_green_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Mk20C_rds", "launch_RPG32_green_F", "Throw", "Put"};
    magazines[] = {R5("30Rnd_556x45_Stanag_red"), R2("SmokeShell")};
    respawnMagazines[] = {R5("30Rnd_556x45_Stanag_red"), R2("SmokeShell")};
    linkedItems[] = {"V_PlateCarrier1_blk", "H_Shemag_olive_hs", "G_Shades_Black", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_PlateCarrier1_blk", "H_Shemag_olive_hs", "G_Shades_Black", DEFAULT_ITEMS_RADIO};
    backpack = QCLASS(B_AssaultPack_blk_AT);
};

class CLASS(SOF_O_Marksman_wd): CLASS(SOF_O_Rifleman_wd) {
    displayName = "Marksman";
    editorPreview = QPATHTOF(previews\CLASS(SOF_O_Marksman_wd).jpg);
    role = "Marksman";
    weapons[] = {"srifle_DMR_06_olive_mos", "Binocular", "Throw", "Put"};
    respawnWeapons[] = {"srifle_DMR_06_olive_mos", "Binocular", "Throw", "Put"};
    magazines[] = {R6("20Rnd_762x51_Mag"),"MiniGrenade", "SmokeShell"};
    respawnMagazines[] = {R6("20Rnd_762x51_Mag"),"MiniGrenade", "SmokeShell"};
    linkedItems[] = {"V_PlateCarrier1_blk", "H_Booniehat_mgrn", "G_Bandanna_blk", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_PlateCarrier1_blk", "H_Booniehat_mgrn", "G_Bandanna_blk", DEFAULT_ITEMS_RADIO};
};

class CLASS(SOF_O_Medic_wd): CLASS(SOF_O_Rifleman_wd) {
    displayName = "Combat Life Saver";
    editorPreview = QPATHTOF(previews\CLASS(SOF_O_Medic_wd).jpg);
    icon = "iconManMedic";
    weapons[] = {"arifle_Velko_xps3", "hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Velko_xps3", "hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {R6("35Rnd_556x45_Velko_reload_tracer_red_lxWS"), R2("16Rnd_9x21_Mag"),"MiniGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellPurple"};
    respawnMagazines[] = {R6("35Rnd_556x45_Velko_reload_tracer_red_lxWS"), R2("16Rnd_9x21_Mag"),"MiniGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellPurple"};
    linkedItems[] = {"V_PlateCarrier1_blk", "lxWS_H_PASGT_goggles_black_F", "G_Bandanna_blk", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_PlateCarrier1_blk", "lxWS_H_PASGT_goggles_black_F", "G_Bandanna_blk", DEFAULT_ITEMS_RADIO};
    backpack = QCLASS(B_Kitbag_rgr_CLS);
};

class CLASS(SOF_O_TeamLeader_wd): CLASS(SOF_O_Rifleman_wd) {
    displayName = "Team Leader";
    editorPreview = QPATHTOF(previews\CLASS(SOF_O_TeamLeader_wd).jpg);
    icon = "iconManLeader";
    weapons[] = {"arifle_Mk20_GL_xps3", "hgun_Rook40_F", "Binocular", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Mk20_GL_xps3", "hgun_Rook40_F", "Binocular", "Throw", "Put"};
    magazines[] = {R6("30Rnd_556x45_Stanag_red"), R2("16Rnd_9x21_Mag"), R5("1Rnd_HE_Grenade_shell"), R2("1Rnd_SmokeRed_Grenade_shell"), R2("1Rnd_Smoke_Grenade_shell")};
    respawnMagazines[] = {R6("30Rnd_556x45_Stanag_red"), R2("16Rnd_9x21_Mag"), R5("1Rnd_HE_Grenade_shell"), R2("1Rnd_SmokeRed_Grenade_shell"), R2("1Rnd_Smoke_Grenade_shell")};
    linkedItems[] = {"V_PlateCarrier2_blk", "H_PASGT_basic_black_F", "G_Bandanna_shades", "NVGoggles_OPFOR", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_PlateCarrier2_blk", "H_PASGT_basic_black_F", "G_Bandanna_shades", "NVGoggles_OPFOR", DEFAULT_ITEMS_RADIO};
};

class CLASS(SOF_O_HeavyGunner_wd): CLASS(SOF_O_Rifleman_wd) {
    displayName = "Heavy Gunner";
    editorPreview = QPATHTOF(previews\CLASS(SOF_O_HeavyGunner_wd).jpg);
    icon = "iconManMG";
    role = "MachineGunner";
    weapons[] = {"MMG_02_black_bipod", "Throw", "Put"};
    respawnWeapons[] = {"MMG_02_black_bipod", "Throw", "Put"};
    magazines[] = {R2("130Rnd_338_Mag"), "SmokeShell"};
    respawnMagazines[] = {R2("130Rnd_338_Mag"), "SmokeShell"};
    linkedItems[] = {"V_BandollierB_blk", "H_Shemag_olive_hs", "G_Lowprofile", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_BandollierB_blk", "H_Shemag_olive_hs", "G_Lowprofile", DEFAULT_ITEMS_RADIO};
};

class CLASS(SOF_O_AHG_wd): CLASS(SOF_O_Rifleman_wd) {
    displayName = "Asst. Heavy Gunner";
    editorPreview = QPATHTOF(previews\CLASS(SOF_O_AHG_wd).jpg);
    role = "Assistant";
    weapons[] = {"arifle_Velko_rds", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Velko_rds", "Throw", "Put"};
    magazines[] = {R6("35Rnd_556x45_Velko_reload_tracer_red_lxWS"), "MiniGrenade", R2("SmokeShell")};
    respawnMagazines[] = {R6("35Rnd_556x45_Velko_reload_tracer_red_lxWS"), "MiniGrenade", R2("SmokeShell")};
    linkedItems[] = {"V_BandollierB_blk", "H_Booniehat_mgrn", "G_Bandanna_blk", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_BandollierB_blk", "H_Booniehat_mgrn", "G_Bandanna_blk", DEFAULT_ITEMS_RADIO};
    backpack = QCLASS(B_Kitbag_rgr_AGH);
};

class CLASS(SOF_O_AAR_wd): CLASS(SOF_O_Rifleman_wd) {
    displayName = "Asst. Autorifleman";
    editorPreview = QPATHTOF(previews\CLASS(SOF_O_AAR_wd).jpg);
    role = "Assistant";
    weapons[] = {"arifle_Velko_rds", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Velko_rds", "Throw", "Put"};
    magazines[] = {R6("35Rnd_556x45_Velko_reload_tracer_red_lxWS"), "MiniGrenade", R2("SmokeShell")};
    respawnMagazines[] = {R6("35Rnd_556x45_Velko_reload_tracer_red_lxWS"), "MiniGrenade", R2("SmokeShell")};
    linkedItems[] = {"V_PlateCarrier1_blk", "H_Booniehat_mgrn", "G_Bandanna_blk", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_PlateCarrier1_blk", "H_Booniehat_mgrn", "G_Bandanna_blk", DEFAULT_ITEMS_RADIO};
    backpack = QCLASS(B_AssaultPack_blk_AAR);
};

class CLASS(SOF_O_Rifleman_AT_wd): CLASS(SOF_O_Rifleman_wd) {
    displayName = "Rifleman (Heavy AT)";
    editorPreview = QPATHTOF(previews\CLASS(SOF_O_Rifleman_AT_wd).jpg);
    icon = "iconManAT";
    role = "MissileSpecialist";
    weapons[] = {"SMG_03C_TR_rds", "launch_O_Vorona_green_F", "Throw", "Put"};
    respawnWeapons[] = {"SMG_03C_TR_rds", "launch_O_Vorona_green_F", "Throw", "Put"};
    magazines[] = {R5("50Rnd_570x28_SMG_03"), R2("SmokeShell")};
    respawnMagazines[] = {R5("50Rnd_570x28_SMG_03"), R2("SmokeShell")};
    linkedItems[] = {"V_BandollierB_blk", "H_Shemag_olive_hs", "G_Lowprofile", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_BandollierB_blk", "H_Shemag_olive_hs", "G_Lowprofile", DEFAULT_ITEMS_RADIO};
    backpack = QCLASS(B_Carryall_blk_AT);
};

class CLASS(SOF_O_Rifleman_AA_wd): CLASS(SOF_O_Rifleman_wd) {
    displayName = "Missile Specialist (AA)";
    editorPreview = QPATHTOF(previews\CLASS(SOF_O_Rifleman_AA_wd).jpg);
    icon = "iconManAT";
    role = "MissileSpecialist";
    weapons[] = {"SMG_03C_TR_rds", "launch_B_Titan_olive_F", "Throw", "Put"};
    respawnWeapons[] = {"SMG_03C_TR_rds", "launch_B_Titan_olive_F", "Throw", "Put"};
    magazines[] = {R5("50Rnd_570x28_SMG_03"), "Titan_AA", R2("SmokeShell")};
    respawnMagazines[] = {R5("50Rnd_570x28_SMG_03"), "Titan_AA", R2("SmokeShell")};
    linkedItems[] = {"V_BandollierB_blk", "H_Shemag_olive_hs", "G_Lowprofile", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_BandollierB_blk", "H_Shemag_olive_hs", "G_Lowprofile", DEFAULT_ITEMS_RADIO};
    backpack = QCLASS(B_Carryall_blk_AA);
};

class CLASS(SOF_O_Engineer_wd): CLASS(SOF_O_Rifleman_wd) {
    displayName = "Engineer";
    editorPreview = QPATHTOF(previews\CLASS(SOF_O_Engineer_wd).jpg);
    icon = "iconManEngineer";
    role = "Engineer";
    weapons[] = {"arifle_Velko_rds", "hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Velko_rds", "hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {R6("35Rnd_556x45_Velko_reload_tracer_red_lxWS"), R2("16Rnd_9x21_Mag"),"MiniGrenade", "SmokeShell"};
    respawnMagazines[] = {R6("35Rnd_556x45_Velko_reload_tracer_red_lxWS"), R2("16Rnd_9x21_Mag"),"MiniGrenade", "SmokeShell"};
    linkedItems[] = {"V_BandollierB_blk", "H_Shemag_olive_hs", "G_Shades_Green", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_BandollierB_blk", "H_Shemag_olive_hs", "G_Shades_Green", DEFAULT_ITEMS_RADIO};
    backpack = QCLASS(B_LegStrapBag_black_F_ENG);
};

class CLASS(SOF_O_Rifleman_dmo_wd): CLASS(SOF_O_Rifleman_wd) {
    displayName = "Demolitions Specialist";
    editorPreview = QPATHTOF(previews\CLASS(SOF_O_Rifleman_dmo_wd).jpg);
    icon = "iconManExplosive";
    role = "Sapper";
    weapons[] = {"arifle_Mk20C_rds", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Mk20C_rds", "Throw", "Put"};
    magazines[] = {R6("30Rnd_556x45_Stanag_red"),"MiniGrenade", "SmokeShell"};
    respawnMagazines[] = {R6("30Rnd_556x45_Stanag_red"),"MiniGrenade", "SmokeShell"};
    linkedItems[] = {"V_PlateCarrier1_blk", "H_Watchcap_khk", "G_Bandanna_blk", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_PlateCarrier1_blk", "H_Watchcap_khk", "G_Bandanna_blk", DEFAULT_ITEMS_RADIO};
    backpack = QCLASS(B_Carryall_blk_DMO);
};

class CLASS(SOF_O_RadioOperator_wd): CLASS(SOF_O_Rifleman_wd) {
    displayName = "Radio Operator";
    editorPreview = QPATHTOF(previews\CLASS(SOF_O_RadioOperator_wd).jpg);
    role = "RadioOperator";
    weapons[] = {"arifle_Mk20C_rds", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Mk20C_rds", "Throw", "Put"};
    magazines[] = {R6("30Rnd_556x45_Stanag_red"),"MiniGrenade", "SmokeShell"};
    respawnMagazines[] = {R6("30Rnd_556x45_Stanag_red"),"MiniGrenade", "SmokeShell"};
    linkedItems[] = {"V_PlateCarrier1_blk", "H_Booniehat_mgrn", "G_Bandanna_blk", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_PlateCarrier1_blk", "H_Booniehat_mgrn", "G_Bandanna_blk", DEFAULT_ITEMS_RADIO};
    backpack = "B_RadioBag_01_black_F";
};

class CLASS(SOF_O_Rifleman_AR2_wd): CLASS(SOF_O_Rifleman_wd) {
    displayName = "UAV Operator (AR-2)";
    editorPreview = QPATHTOF(previews\CLASS(SOF_O_Rifleman_AR2_wd).jpg);
    role = "SpecialOperative";
    weapons[] = {"arifle_Mk20C_rds", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Mk20C_rds", "Throw", "Put"};
    magazines[] = {R6("30Rnd_556x45_Stanag_red"), R2("SmokeShell")};
    respawnMagazines[] = {R6("30Rnd_556x45_Stanag_red"), R2("SmokeShell")};
    linkedItems[] = {"V_BandollierB_blk", "H_Shemag_olive_hs", "G_Shades_Green", "O_UavTerminal", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_BandollierB_blk", "H_Shemag_olive_hs", "G_Shades_Green", "O_UavTerminal", DEFAULT_ITEMS_RADIO};
};

class CLASS(SOF_O_Rifleman_AP5_Mini_wd): CLASS(SOF_O_Rifleman_wd) {
    displayName = "UAV Operator (AP-5 Minimi)";
    editorPreview = QPATHTOF(previews\CLASS(SOF_O_Rifleman_AP5_Mini_wd).jpg);
    role = "SpecialOperative";
    weapons[] = {"arifle_Mk20C_rds", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Mk20C_rds", "Throw", "Put"};
    magazines[] = {R6("30Rnd_556x45_Stanag_red"), R2("SmokeShell")};
    respawnMagazines[] = {R6("30Rnd_556x45_Stanag_red"), R2("SmokeShell")};
    linkedItems[] = {"V_BandollierB_blk", "H_Watchcap_khk", "G_Bandanna_blk", "O_UavTerminal", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_BandollierB_blk", "H_Watchcap_khk", "G_Bandanna_blk", "O_UavTerminal", DEFAULT_ITEMS_RADIO};
    backpack = QCLASS(B_AssaultPack_blk_Minimi);
};

class CLASS(SOF_O_Rifleman_AP5_Lynx_wd): CLASS(SOF_O_Rifleman_wd) {
    displayName = "UAV Operator (AP-5 Lynx)";
    editorPreview = QPATHTOF(previews\CLASS(SOF_O_Rifleman_AP5_Lynx_wd).jpg);
    role = "SpecialOperative";
    weapons[] = {"arifle_Mk20C_rds", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Mk20C_rds", "Throw", "Put"};
    magazines[] = {R6("30Rnd_556x45_Stanag_red"), R2("SmokeShell")};
    respawnMagazines[] = {R6("30Rnd_556x45_Stanag_red"), R2("SmokeShell")};
    linkedItems[] = {"V_BandollierB_blk", "H_Watchcap_khk", "G_Bandanna_blk", "O_UavTerminal", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_BandollierB_blk", "H_Watchcap_khk", "G_Bandanna_blk", "O_UavTerminal", DEFAULT_ITEMS_RADIO};
    backpack = QCLASS(B_AssaultPack_blk_Lynx);
};

class CLASS(SOF_O_Sniper_wd): CLASS(SOF_O_Rifleman_wd) {
    displayName = "Sniper";
    editorPreview = QPATHTOF(previews\CLASS(SOF_O_Sniper_wd).jpg);
    role = "Marksman";
    weapons[] = {"srifle_GM6_LRPS", "hgun_Rook40_F", "Rangefinder", "Throw", "Put"};
    respawnWeapons[] = {"srifle_GM6_LRPS", "hgun_Rook40_F", "Rangefinder", "Throw", "Put"};
    magazines[] = {R6("20Rnd_762x51_Mag"), R2("16Rnd_9x21_Mag"), R2("SmokeShell")};
    respawnMagazines[] = {R6("20Rnd_762x51_Mag"), R2("16Rnd_9x21_Mag"), R2("SmokeShell")};
    linkedItems[] = {"V_BandollierB_blk", "H_Booniehat_mgrn", "G_Bandanna_blk", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_BandollierB_blk", "H_Booniehat_mgrn", "G_Bandanna_blk", DEFAULT_ITEMS_RADIO};
};

class CLASS(SOF_O_Spotter_wd): CLASS(SOF_O_Rifleman_wd) {
    displayName = "Spotter";
    editorPreview = QPATHTOF(previews\CLASS(SOF_O_Spotter_wd).jpg);
    role = "Marksman";
    weapons[] = {"arifle_Velko_MRCO", "hgun_Rook40_F", "Rangefinder", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Velko_MRCO", "hgun_Rook40_F", "Rangefinder", "Throw", "Put"};
    magazines[] = {R6("35Rnd_556x45_Velko_reload_tracer_red_lxWS"), R2("16Rnd_9x21_Mag"), R2("MiniGrenade"), R2("SmokeShell")};
    respawnMagazines[] = {R6("35Rnd_556x45_Velko_reload_tracer_red_lxWS"), R2("16Rnd_9x21_Mag"), R2("MiniGrenade"), R2("SmokeShell")};
    linkedItems[] = {"V_BandollierB_blk", "H_Watchcap_khk", "G_Bandanna_blk", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_BandollierB_blk", "H_Watchcap_khk", "G_Bandanna_blk", DEFAULT_ITEMS_RADIO};
};

class CLASS(SOF_O_Rifleman_SG_wd): CLASS(SOF_O_Rifleman_wd) {
    displayName = "Rifleman (Shotgun)";
    editorPreview = QPATHTOF(previews\CLASS(SOF_O_Rifleman_SG_wd).jpg);
    weapons[] = {"sgun_aa40_xps3", "hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"sgun_aa40_xps3", "hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {R7("8Rnd_12Gauge_AA40_Pellets_lxWS"), R2("16Rnd_9x21_Mag"), R2("SmokeShell"), "MiniGrenade"};
    respawnMagazines[] = {R7("8Rnd_12Gauge_AA40_Pellets_lxWS"), R2("16Rnd_9x21_Mag"), R2("SmokeShell"), "MiniGrenade"};
    linkedItems[] = {"V_PlateCarrier2_blk", "lxWS_H_PASGT_goggles_black_F", "G_Bandanna_oli", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_PlateCarrier2_blk", "lxWS_H_PASGT_goggles_black_F", "G_Bandanna_oli", DEFAULT_ITEMS_RADIO};
};

class CLASS(SOF_O_Helipilot_wd): CLASS(SOF_O_Rifleman_wd) {
    displayName = "Helicopter Pilot";
    editorPreview = QPATHTOF(previews\CLASS(SOF_O_Helipilot_wd).jpg);
    role = "Crewman";
    weapons[] = {"SMG_03C_TR_rds", "Throw", "Put"};
    respawnWeapons[] = {"SMG_03C_TR_rds", "Throw", "Put"};
    magazines[] = {R5("50Rnd_570x28_SMG_03"), R2("SmokeShell")};
    respawnMagazines[] = {R5("50Rnd_570x28_SMG_03"), R2("SmokeShell")};
    linkedItems[] = {"V_TacVest_blk", "H_PilotHelmetHeli_B", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_TacVest_blk", "H_PilotHelmetHeli_B", DEFAULT_ITEMS_RADIO};
};

class CLASS(SOF_O_Helicrew_wd): CLASS(SOF_O_Rifleman_wd) {
    displayName = "Helicopter Crew";
    editorPreview = QPATHTOF(previews\CLASS(SOF_O_Helicrew_wd).jpg);
    role = "Crewman";
    weapons[] = {"SMG_03C_TR_rds", "Throw", "Put"};
    respawnWeapons[] = {"SMG_03C_TR_rds", "Throw", "Put"};
    magazines[] = {R5("50Rnd_570x28_SMG_03"), R2("SmokeShell")};
    respawnMagazines[] = {R5("50Rnd_570x28_SMG_03"), R2("SmokeShell")};
    linkedItems[] = {"V_TacVest_blk", "H_CrewHelmetHeli_B", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_TacVest_blk", "H_CrewHelmetHeli_B", DEFAULT_ITEMS_RADIO};
};

class CLASS(SOF_O_Crewman_wd): CLASS(SOF_O_Rifleman_wd) {
    displayName = "Crewman";
    editorPreview = QPATHTOF(previews\CLASS(SOF_O_Crewman_wd).jpg);
    role = "Crewman";
    weapons[] = {"SMG_03C_TR_rds", "Throw", "Put"};
    respawnWeapons[] = {"SMG_03C_TR_rds", "Throw", "Put"};
    magazines[] = {R5("50Rnd_570x28_SMG_03"), R2("SmokeShell")};
    respawnMagazines[] = {R5("50Rnd_570x28_SMG_03"), R2("SmokeShell")};
    linkedItems[] = {"V_BandollierB_blk", "H_Tank_black_F", "G_Bandanna_blk", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_BandollierB_blk", "H_Tank_black_F", "G_Bandanna_blk", DEFAULT_ITEMS_RADIO};
};

class CLASS(SOF_O_Rifleman_exp_wd): CLASS(SOF_O_Rifleman_wd) {
    displayName = "Mine Specialist";
    editorPreview = QPATHTOF(previews\CLASS(SOF_O_Rifleman_exp_wd).jpg);
    icon = "iconManExplosive";
    role = "Sapper";
    weapons[] = {"arifle_Velko_xps3", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Velko_xps3", "Throw", "Put"};
    magazines[] = {R6("35Rnd_556x45_Velko_reload_tracer_red_lxWS"),"MiniGrenade", "SmokeShell"};
    respawnMagazines[] = {R6("35Rnd_556x45_Velko_reload_tracer_red_lxWS"),"MiniGrenade", "SmokeShell"};
    linkedItems[] = {"V_PlateCarrier1_blk", "H_Booniehat_mgrn", "G_Bandanna_blk", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_PlateCarrier1_blk", "H_Booniehat_mgrn", "G_Bandanna_blk", DEFAULT_ITEMS_RADIO};
    backpack = QCLASS(B_Carryall_blk_MNE);
};

class CLASS(SOF_O_Support_HMG_wd): CLASS(SOF_O_Rifleman_wd) {
    displayName = "Gunner (HMG)";
    editorPreview = QPATHTOF(previews\CLASS(SOF_O_Support_HMG_wd).jpg);
    role = "Assistant";
    weapons[] = {"arifle_Mk20C_rds", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Mk20C_rds", "Throw", "Put"};
    magazines[] = {R6("30Rnd_556x45_Stanag_red"), R2("SmokeShell")};
    respawnMagazines[] = {R6("30Rnd_556x45_Stanag_red"), R2("SmokeShell")};
    linkedItems[] = {"V_PlateCarrier1_blk", "H_Shemag_olive", "G_Lowprofile", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_PlateCarrier1_blk", "H_Shemag_olive", "G_Lowprofile", DEFAULT_ITEMS_RADIO};
    backpack = "I_HMG_02_support_F";
};

class CLASS(SOF_O_Support_AMG_wd): CLASS(SOF_O_Rifleman_wd) {
    displayName = "Asst. Gunner (HMG)";
    editorPreview = QPATHTOF(previews\CLASS(SOF_O_Support_AMG_wd).jpg);
    role = "Assistant";
    weapons[] = {"arifle_Velko_MRCO", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Velko_MRCO", "Throw", "Put"};
    magazines[] = {R6("35Rnd_556x45_Velko_reload_tracer_red_lxWS"), R2("SmokeShell")};
    respawnMagazines[] = {R6("35Rnd_556x45_Velko_reload_tracer_red_lxWS"), R2("SmokeShell")};
    linkedItems[] = {"V_PlateCarrier1_blk", "H_Shemag_olive", "G_Lowprofile", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_PlateCarrier1_blk", "H_Shemag_olive", "G_Lowprofile", DEFAULT_ITEMS_RADIO};
    backpack = "I_HMG_01_support_F";
};

class CLASS(SOF_O_AAT_wd): CLASS(SOF_O_Rifleman_wd) {
    displayName = "Asst. Heavy AT";
    editorPreview = QPATHTOF(previews\CLASS(SOF_O_AAT_wd).jpg);
    role = "Assistant";
    weapons[] = {"arifle_Mk20C_rds", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Mk20C_rds", "Throw", "Put"};
    magazines[] = {R6("30Rnd_556x45_Stanag_red"), "MiniGrenade", R2("SmokeShell")};
    respawnMagazines[] = {R6("30Rnd_556x45_Stanag_red"), "MiniGrenade", R2("SmokeShell")};
    linkedItems[] = {"V_PlateCarrier1_blk", "H_Watchcap_khk", "G_Bandanna_blk", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_PlateCarrier1_blk", "H_Watchcap_khk", "G_Bandanna_blk", DEFAULT_ITEMS_RADIO};
    backpack = QCLASS(B_Carryall_blk_AT);
};

class CLASS(SOF_O_AAA_wd): CLASS(SOF_O_Rifleman_wd) {
    displayName = "Asst. Missile Specialist (AA)";
    editorPreview = QPATHTOF(previews\CLASS(SOF_O_AAA_wd).jpg);
    role = "Assistant";
    weapons[] = {"arifle_Mk20C_rds", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Mk20C_rds", "Throw", "Put"};
    magazines[] = {R6("30Rnd_556x45_Stanag_red"), "MiniGrenade", R2("SmokeShell")};
    respawnMagazines[] = {R6("30Rnd_556x45_Stanag_red"), "MiniGrenade", R2("SmokeShell")};
    linkedItems[] = {"V_PlateCarrier1_blk", "H_Booniehat_mgrn", "G_Bandanna_blk", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_PlateCarrier1_blk", "H_Booniehat_mgrn", "G_Bandanna_blk", DEFAULT_ITEMS_RADIO};
    backpack = QCLASS(B_Carryall_blk_AA);
};
