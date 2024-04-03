class synixe_contractors_Unit_I_Contractor;
class CLASS(contractors_I_Rifleman_F_F): synixe_contractors_Unit_I_Contractor {
    displayName = "Rifleman";
    SCOPE_DLC;
    genericNames = "NATOMen";
    identityTypes[] = {"LanguageENG_F", "Head_NATO", "Head_Enoch", "Head_Euro", "Head_Asian", "Head_TK", "Head_Tanoan", "G_NATO_default", "G_CIVIL_male"};    
    faction = "synixe_contractors_I_Contractors";
    weapons[] = {"arifle_SPAR_02_snd_xps3", "hgun_P07_blk_F", "Binocular", "Throw", "Put"};
    respawnWeapons[] = {"arifle_SPAR_02_snd_xps3", "hgun_P07_blk_F", "Binocular", "Throw", "Put"};
    magazines[] = {R7("30Rnd_556x45_Stanag_red"), R3("16Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
    respawnMagazines[] = {R7("30Rnd_556x45_Stanag_red"), R3("16Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
    linkedItems[] = {"V_PlateCarrier1_rgr_noflag_F", "synixe_contractors_Cap_Headphones_GreenLogo", "G_Bandanna_shades", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_PlateCarrier1_rgr_noflag_F", "synixe_contractors_Cap_Headphones_GreenLogo", "G_Bandanna_shades", DEFAULT_ITEMS_RADIO};
    items[] = {R4("ACE_elasticBandage"), R4("ACE_packingBandage"), R2("ACE_quikclot")};
    respawnItems[] = {R4("ACE_elasticBandage"), R4("ACE_packingBandage"), R2("ACE_quikclot")};
    uniformClass = "synixe_contractors_Uniform_Contractor_Shirt";
};

class contractors_I_Rifleman_F;
class CLASS(contractors_I_Marksman_F): contractors_I_Rifleman_F {
    displayName = "Marksman";
    role = "Marksman";
    SCOPE_DLC;
    weapons[] = {"arifle_SPAR_03_blk_burris", "hgun_P07_blk_F", "Binocular", "Throw", "Put"};
    respawnWeapons[] = {"arifle_SPAR_03_blk_burris", "hgun_P07_blk_F", "Binocular", "Throw", "Put"};
    magazines[] = {R7("20Rnd_762x51_Mag"), R3("16Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
    respawnMagazines[] = {R7("20Rnd_762x51_Mag"), R3("16Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
    linkedItems[] = {"V_PlateCarrier1_blk", "synixe_contractors_Cap_Headphones_GreenLogo", "G_Bandanna_blk", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_PlateCarrier1_blk", "synixe_contractors_Cap_Headphones_GreenLogo", "G_Bandanna_blk", DEFAULT_ITEMS_RADIO};
    uniformClass = "tacs_Uniform_Polo_TP_BS_TP_TB_NoLogo";
};

class contractors_I_Rifleman_F;
class CLASS(contractors_I_Autorifleman_F): contractors_I_Rifleman_F {
    displayName = "Autorifleman";
    icon = "iconManMG";
    role = "MachineGunner";
    SCOPE_DLC;
    weapons[] = {"LMG_03_saber", "hgun_P07_blk_F", "Throw", "Put"};
    respawnWeapons[] = {"LMG_03_saber", "hgun_P07_blk_F", "Throw", "Put"};
    magazines[] = {R4("200Rnd_556x45_Box_Red_F"), R3("16Rnd_9x21_Mag"), R2("SmokeShell"), "HandGrenade"};
    respawnMagazines[] = {R4("200Rnd_556x45_Box_Red_F"), R3("16Rnd_9x21_Mag"), R2("SmokeShell"), "HandGrenade"};
    linkedItems[] = {"V_PlateCarrier1_rgr_noflag_F", "H_HelmetB", "G_Bandanna_beast", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_PlateCarrier1_rgr_noflag_F", "H_HelmetB", "G_Bandanna_beast", DEFAULT_ITEMS_RADIO};
    uniformClass = "tacs_Uniform_Combat_RS_CLES_TP_BB";
};

class contractors_I_Rifleman_F;
class CLASS(contractors_I_Grenadier_F): contractors_I_Rifleman_F {
    displayName = "Grenadier";
    role = "Grenadier";
    SCOPE_DLC;
    weapons[] = {"arifle_VelkoR5_GL_cmore", "hgun_P07_blk_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_VelkoR5_GL_cmore", "hgun_P07_blk_F", "Throw", "Put"};
    magazines[] = {R7("35Rnd_556x45_Velko_reload_tracer_red_lxWS"), R3("16Rnd_9x21_Mag"), R6("1Rnd_HE_Grenade_shell"), R2("1Rnd_Smoke_Grenade_shell"), R2("1Rnd_SmokeRed_Grenade_shell"), R2("SmokeShell"), "HandGrenade"};
    respawnMagazines[] = {R7("35Rnd_556x45_Velko_reload_tracer_red_lxWS"), R3("16Rnd_9x21_Mag"), R6("1Rnd_HE_Grenade_shell"), R2("1Rnd_Smoke_Grenade_shell"), R2("1Rnd_SmokeRed_Grenade_shell"), R2("SmokeShell"), "HandGrenade"};
    linkedItems[] = {"V_PlateCarrier1_rgr_noflag_F", "H_HelmetB", "G_Aviator", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_PlateCarrier1_rgr_noflag_F", "H_HelmetB", "G_Aviator", DEFAULT_ITEMS_RADIO};
    uniformClass = "U_lxWS_ION_Casual5";
};

class contractors_I_Rifleman_F;
class CLASS(contractors_I_Engineer_F): contractors_I_Rifleman_F {
    displayName = "Engineer";
    role = "Engineer";
    SCOPE_DLC;
    weapons[] = {"arifle_TRG20_rds", "hgun_P07_blk_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_TRG20_rds", "hgun_P07_blk_F", "Throw", "Put"};
    magazines[] = {R7("20Rnd_762x51_Mag"), R3("16Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
    respawnMagazines[] = {R7("20Rnd_762x51_Mag"), R3("16Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
    linkedItems[] = {"V_PlateCarrier1_blk", "H_Bandanna_gry", "G_Shades_Blue", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_PlateCarrier1_blk", "H_Bandanna_gry", "G_Shades_Blue", DEFAULT_ITEMS_RADIO};
    uniformClass = "tacs_Uniform_Combat_LS_CDFS_GP_TB";
    backpack = QCLASS(B_LegStrapBag_black_F_ENG);
};

class contractors_I_Rifleman_F;
class CLASS(contractors_I_Teamleader_F): contractors_I_Rifleman_F {
    displayName = "Teamleader";
    icon = "iconManLeader";
    SCOPE_DLC;
    weapons[] = {"arifle_AK12_RCO", "hgun_Pistol_heavy_01_mrd", "Binocular", "Throw", "Put"};
    respawnWeapons[] = {"arifle_AK12_RCO", "hgun_Pistol_heavy_01_mrd", "Binocular", "Throw", "Put"};
    magazines[] = {R7("30Rnd_762x39_AK12_Mag_F"), R3("11Rnd_45ACP_Mag"), R2("SmokeShell"), R2("HandGrenade")};
    respawnMagazines[] = {R7("30Rnd_762x39_AK12_Mag_F"), R3("11Rnd_45ACP_Mag"), R2("SmokeShell"), R2("HandGrenade")};
    linkedItems[] = {"V_PlateCarrier1_blk", "tacs_Helmet_Ballistic_DarkBlack", "G_Bandanna_sport", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_PlateCarrier1_blk", "tacs_Helmet_Ballistic_DarkBlack", "G_Bandanna_sport", DEFAULT_ITEMS_RADIO};
    uniformClass = "tacs_Uniform_Polo_CP_BS_TP_BB_NoLogo";
};

class contractors_I_Rifleman_F;
class CLASS(contractors_I_Medic_F): contractors_I_Rifleman_F {
    displayName = "Combat Life Saver";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    SCOPE_DLC;
    weapons[] = {"arifle_SPAR_01_blk_xps3", "hgun_ACPC2_F", "Binocular", "Throw", "Put"};
    respawnWeapons[] = {"arifle_SPAR_01_blk_xps3", "hgun_ACPC2_F", "Binocular", "Throw", "Put"};
    magazines[] = {R7("30Rnd_556x45_Stanag_red"), R3("9Rnd_45ACP_Mag"), R2("SmokeShell"), R2("HandGrenade")};
    respawnMagazines[] = {R7("30Rnd_556x45_Stanag_red"), R3("9Rnd_45ACP_Mag"), R2("SmokeShell"), R2("HandGrenade")};
    linkedItems[] = {"V_PlateCarrier1_rgr_noflag_F", "H_HelmetSpecB", "G_Bandanna_blk", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_PlateCarrier1_rgr_noflag_F", "H_HelmetSpecB", "G_Bandanna_blk", DEFAULT_ITEMS_RADIO};
    uniformClass = "tacs_Uniform_Combat_RS_CPS_BP_BB";
    backpack = QCLASS(tacs_Backpack_Kitbag_Medic_Green_CLS);
};

class contractors_I_Rifleman_F;
class CLASS(contractors_I_Helipilot_F): contractors_I_Rifleman_F {
    displayName = "Helicopter Pilot";
    role = "Crewman";
    SCOPE_DLC;
    weapons[] = {"hgun_Pistol_heavy_01_F", "Binocular", "Throw", "Put"};
    respawnWeapons[] = {"hgun_Pistol_heavy_01_F", "Binocular", "Throw", "Put"};
    magazines[] = {R3("11Rnd_45ACP_Mag"), R2("SmokeShell")};
    respawnMagazines[] = {R3("11Rnd_45ACP_Mag"), R2("SmokeShell")};
    linkedItems[] = {"V_TacVest_blk", "H_PilotHelmetHeli_B", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_TacVest_blk", "H_PilotHelmetHeli_B", DEFAULT_ITEMS_RADIO};
    uniformClass = "tacs_Uniform_Combat_LS_CLBS_GP_BB";
};

class contractors_I_Rifleman_F;
class CLASS(contractors_I_Helicrew_F): contractors_I_Rifleman_F {
    displayName = "Helicopter Crew";
    role = "Crewman";
    SCOPE_DLC;
    weapons[] = {"SMG_01_F", "Binocular", "Throw", "Put"};
    respawnWeapons[] = {"SMG_01_F", "Binocular", "Throw", "Put"};
    magazines[] = {R6("30Rnd_45ACP_Mag_SMG_01"), R2("SmokeShell")};
    respawnMagazines[] = {R6("30Rnd_45ACP_Mag_SMG_01"), R2("SmokeShell")};
    linkedItems[] = {"V_TacVest_blk", "H_CrewHelmetHeli_B", DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {"V_TacVest_blk", "H_CrewHelmetHeli_B", DEFAULT_ITEMS_RADIO};
    uniformClass = "tacs_Uniform_Combat_RS_CDES_TP_TB";
};