class CfgVehicles {
    class I_Soldier_F;
    class CLASS(I_Rifleman_F): I_Soldier_F {
        dlc = QUOTE(prefix);
        scope = 2;
        curatorScope = 2;
        side = 2;
        genericNames = "NATOMen";
        faction = QCLASS(I_Abramia);
        identityTypes[] = {"LanguageENGB_F", "Head_NATO", "CUP_G_ARMY"};
        weapons[] = {"CUP_arifle_L85A2", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_L85A2", "Throw", "Put"};
        magazines[] = {R6("CUP_30Rnd_556x45_Stanag_L85"), R2("CUP_HandGrenade_L109A1_HE"), "SmokeShell"};
        respawnMagazines[] = {R6("CUP_30Rnd_556x45_Stanag_L85"), R2("CUP_HandGrenade_L109A1_HE"), "SmokeShell"};
        linkedItems[] = {"CUP_V_B_Interceptor_Rifleman_Olive", "CUP_H_LWHv2_ERDL_lowland", DEFAULT_ITEMS_RADIO, "CUP_NVG_PVS7_Hide"};
        respawnLinkedItems[] = {"CUP_V_B_Interceptor_Rifleman_Olive", "CUP_H_LWHv2_ERDL_lowland", DEFAULT_ITEMS_RADIO, "CUP_NVG_PVS7_Hide"};
        items[] = {R4("ACE_elasticBandage"), R4("ACE_packingBandage"), R2("ACE_quikclot")};
        respawnItems[] = {R4("ACE_elasticBandage"), R4("ACE_packingBandage"), R2("ACE_quikclot")};
        vehicleClass = "CUP_I_Men_RACS_WDL";
        model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\CUP_u_BDUv2.p3d";
        uniformClass = QCLASS(wdl);
        hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USarmy\data\BDUv2\BDUv2_ERDL_lowland_CO.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USarmy\data\BDUv2\BDUv2_ERDL_lowland_CO.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USarmy\data\BDUv2\BDUv2_ERDL_lowland_CO.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USarmy\data\BDUv2\BDUv2_ERDL_lowland_CO.paa", QPATHTOF(data\abramia_arm_ca.paa)};
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4", "Flag", "insignia"};
        icon = "iconMan";
        editorSubcategory = "EdSubcat_Personnel_Camo_Woodland";
        editorPreview = "CUP\Creatures\People\Military\CUP_Creatures_People_Military_RACS\Data\preview\CUP_I_RACS_Soldier_wdl.jpg";
    };

    class CLASS(I_Autorifleman_F): CLASS(I_Rifleman_F) {
        displayName = "Autorifleman";
        weapons[] = {"CUP_lmg_minimipara", "Throw", "Put"};
        respawnWeapons[] = {"CUP_lmg_minimipara", "Throw", "Put"};
        magazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_100Rnd_TE4_Red_Tracer_556x45_M249", "CUP_100Rnd_TE4_Red_Tracer_556x45_M249", "CUP_100Rnd_TE4_Red_Tracer_556x45_M249", "CUP_100Rnd_TE4_Red_Tracer_556x45_M249"};
        respawnMagazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_100Rnd_TE4_Red_Tracer_556x45_M249", "CUP_100Rnd_TE4_Red_Tracer_556x45_M249", "CUP_100Rnd_TE4_Red_Tracer_556x45_M249", "CUP_100Rnd_TE4_Red_Tracer_556x45_M249"};
        icon = "iconManMG";
        editorPreview = "CUP\Creatures\People\Military\CUP_Creatures_People_Military_RACS\Data\preview\CUP_I_RACS_AR_wdl.jpg";
    };

    class CLASS(I_Medic_F): CLASS(I_Rifleman_F) {
        displayName = "Medic";
        icon = "iconManMedic";
        picture = "pictureHeal";
        backpack = "CUP_B_RACS_Backpack_Medic";
        role = "CombatLifeSaver";
        attendant = 1;
        items[] = {R4("ACE_elasticBandage"), R4("ACE_packingBandage"), R2("ACE_quikclot"), R2("ACE_salineIV_500"), R2("ACE_tourniquet"), R2("ACE_splint")};
        respawnItems[] = {R4("ACE_elasticBandage"), R4("ACE_packingBandage"), R2("ACE_quikclot"), R2("ACE_salineIV_500"), R2("ACE_tourniquet"), R2("ACE_splint")};
        editorPreview = "CUP\Creatures\People\Military\CUP_Creatures_People_Military_RACS\Data\preview\CUP_I_RACS_Medic_wdl.jpg";
    };

    class CLASS(I_Engineer_F): CLASS(I_Rifleman_F) {
        displayName = "Engineer";
        icon = "iconManEngineer";
        picture = "pictureRepair";
        backpack = "CUP_B_RACS_Backpack_Engineer";
        role = "Sapper";
        engineer = 1;
        canDeactivateMines = 1;
        editorPreview = "CUP\Creatures\People\Military\CUP_Creatures_People_Military_RACS\Data\preview\CUP_I_RACS_Engineer_wdl.jpg";
        items[] = {R4("ACE_elasticBandage"), R4("ACE_packingBandage"), R2("ACE_quikclot"), "ACE_wirecutter", "ACE_EntrenchingTool"};
        respawnItems[] = {R4("ACE_elasticBandage"), R4("ACE_packingBandage"), R2("ACE_quikclot"), "ACE_wirecutter", "ACE_EntrenchingTool"};
    };

    class CUP_I_RACS_Pilot;
    class CLASS(I_Pilot_F): CUP_I_RACS_Pilot {
        dlc = QUOTE(prefix);
        scope = 2;
        curatorScope = 2;
        side = 2;
        genericNames = "NATOMen";
        faction = QCLASS(I_Abramia);
        identityTypes[] = {"LanguageENGB_F", "Head_NATO", "CUP_G_ARMY"};
    };
};
