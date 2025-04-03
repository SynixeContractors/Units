class CLASS(Base_OPFOR);
class CLASS(O_MDF_Rifleman): CLASS(Base_OPFOR) {
    SCOPE_DLC;
    author = "Brett Harrison";
    displayName = "Rifleman";
    faction = QCLASS(O_MDF);
    icon = "iconMan";
    role = "Rifleman";
    genericNames = "FrenchMen";
    identityTypes[] = {"Head_Euro","Head_Greek","G_CIVIL_male","LanguageFRE_F"};
    PREVIEW(O_MDF_Rifleman);
    uniformClass = "tacs_Uniform_Garment_LS_TS_BP_BB";
    items[] = {
        R2("ACE_fieldDressing"),
    };
    respawnItems[] = {
        R2("ACE_fieldDressing"),
    };
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "H_HelmetLuchnik_cover_khk_F",
        "milgp_v_marciras_light_cb_cb",
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "H_HelmetLuchnik_cover_khk_F",
        "milgp_v_marciras_light_cb_cb",
    };
    weapons[] = {
        QCLASS(O_MDF_HK416),
        "hgun_P07_F",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(O_MDF_HK416),
        "hgun_P07_F",
        "Throw",
        "Put"
    };
    magazines[] = {
        R8("30Rnd_556x45_AP_Stanag_green_Tan_RF"),
        R3("16Rnd_9x21_Mag_v2"),
        R2("HandGrenade"),
        R2("SmokeShell"),
    };
    respawnMagazines[] = {
        R8("30Rnd_556x45_AP_Stanag_green_Tan_RF"),
        R3("16Rnd_9x21_Mag_v2"),
        R2("HandGrenade"),
        R2("SmokeShell"),
    };
};

class CLASS(O_MDF_Marksman): CLASS(O_MDF_Rifleman) {
    icon = "iconManRecon";
    role = "Marksman";
    displayName = "Marksman";
    PREVIEW(O_MDF_Marksman);
    weapons[] = {
        QCLASS(O_MDF_HK417),
        "hgun_P07_F",
        "Throw",
        "Put",
    };
    respawnWeapons[] = {
        QCLASS(O_MDF_HK417),
        "hgun_P07_F",
        "Throw",
        "Put",
    };
    magazines[] = {
        R8("ACE_20Rnd_762x51_M993_AP_Mag"),
        R3("16Rnd_9x21_Mag_v2"),
        R2("HandGrenade"),
        R2("SmokeShell"),
    };
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "H_HelmetLuchnik_cover_khk_F",
        "milgp_v_marciras_marksman_belt_cb_cb_cb",
        "Binocular"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "H_HelmetLuchnik_cover_khk_F",
        "milgp_v_marciras_marksman_belt_cb_cb_cb",
        "Rangefinder"
    };
};

class CLASS(O_MDF_TeamLeader): CLASS(O_MDF_Rifleman) {
    icon = "iconManLeader";
    role = "TeamLeader";
    displayName = "Team Leader";
    PREVIEW(O_MDF_TeamLeader);
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "H_HelmetLuchnik_cover_khk_F",
        "milgp_v_marciras_teamleader_belt_cb_cb_cb",
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "H_HelmetLuchnik_cover_khk_F",
        "milgp_v_marciras_teamleader_belt_cb_cb_cb",
    };
    weapons[] = {
        QCLASS(O_MDF_HK416_TL),
        "hgun_P07_F",
        "Throw",
        "Put",
        "Rangefinder",
    };
    respawnWeapons[] = {
        QCLASS(O_MDF_HK416_TL),
        "hgun_P07_F",
        "Throw",
        "Put",
        "Rangefinder",
    };
    items[] = {
        "ACE_EntrenchingTool",
        "ACE_MapTools",
        R2("ACE_fieldDressing"),
    };
    respawnItems[] = {
        "ACE_EntrenchingTool",
        "ACE_MapTools",
        R2("ACE_fieldDressing"),
    };
};

class CLASS(O_MDF_Autorifleman): CLASS(O_MDF_Rifleman) {
    icon = "iconManMG";
    role = "MachineGunner";
    displayName = "Autorifleman";
    PREVIEW(O_MDF_Autorifleman);
    weapons[] = {
        QCLASS(O_MDF_HK416_14),
        "hgun_P07_F",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(O_MDF_HK416_14),
        "hgun_P07_F",
        "Throw",
        "Put"
    };
    magazines[] = {
        R3("16Rnd_9x21_Mag_v2"),
        R2("HandGrenade"),
        R2("SmokeShell"),
        R8("150Rnd_556x45_Drum_Sand_Mag_Tracer_F"),
    };
    respawnMagazines[] = {
        R3("16Rnd_9x21_Mag_v2"),
        R2("HandGrenade"),
        R2("SmokeShell"),
        R8("150Rnd_556x45_Drum_Sand_Mag_Tracer_F"),
    };
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "H_HelmetLuchnik_cover_khk_F",
        "milgp_v_jpc_hgunner_cb_cb",
        "Binocular"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "H_HelmetLuchnik_cover_khk_F",
        "milgp_v_jpc_hgunner_cb_cb",
        "Rangefinder"
    };
};

class CLASS(O_MDF_Medic): CLASS(O_MDF_Rifleman) {
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    displayName = "Medic";
    PREVIEW(O_MDF_Medic);
    attendant = 1;
    backpack = QCLASS(O_MDF_Medic_Backpack);
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "H_HelmetLuchnik_cover_khk_F",
        "milgp_v_marciras_medic_belt_cb_cb_cb",
        "Binocular"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "H_HelmetLuchnik_cover_khk_F",
        "milgp_v_marciras_medic_belt_cb_cb_cb",
        "Rangefinder"
    };
};

class CLASS(O_MDF_Engineer): CLASS(O_MDF_Rifleman) {
    icon = "iconManEngineer";
    role = "CombatEngineer";
    displayName = "Engineer";
    PREVIEW(O_MDF_Engineer);
    engineer = 1;
    backpack = QCLASS(O_MDF_Engineer_Backpack);
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "H_HelmetLuchnik_cover_khk_F",
        "milgp_v_marciras_assaulter_cb_cb",
        "Binocular"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "H_HelmetLuchnik_cover_khk_F",
        "milgp_v_marciras_assaulter_cb_cb",
        "Rangefinder"
    };
    items[] = {
        "ACE_entrenchingTool",
    };
};

class O_GEN_crew_lxWS;
class B_GEN_crew_lxWS: O_GEN_crew_lxWS {
    genericNames = "FrenchMen";
    identityTypes[] = {"Head_Euro","Head_Greek","G_CIVIL_male","LanguageFRE_F"};
};
class B_GEN_Soldier_base_F;
class B_GEN_Soldier_F: B_GEN_Soldier_base_F {
    genericNames = "FrenchMen";
    identityTypes[] = {"Head_Euro","Head_Greek","G_CIVIL_male","LanguageFRE_F"};
};
class B_GEN_Soldier_RF: B_GEN_Soldier_F {
    genericNames = "FrenchMen";
    identityTypes[] = {"Head_Euro","Head_Greek","G_CIVIL_male","LanguageFRE_F"};
};
class B_GEN_Soldier_SG_F: B_GEN_Soldier_base_F {
    genericNames = "FrenchMen";
    identityTypes[] = {"Head_Euro","Head_Greek","G_CIVIL_male","LanguageFRE_F"};
};
class B_GEN_Commander_F: B_GEN_Soldier_base_F {
    genericNames = "FrenchMen";
    identityTypes[] = {"Head_Euro","Head_Greek","G_CIVIL_male","LanguageFRE_F"};
};
class B_Helipilot_F;
class B_GEN_Helipilot_RF: B_Helipilot_F {
    genericNames = "FrenchMen";
    identityTypes[] = {"Head_Euro","Head_Greek","G_CIVIL_male","LanguageFRE_F"};
};
