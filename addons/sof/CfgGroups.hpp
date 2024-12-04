class CfgGroups {
    class EAST {
        class CLASS(O_SOF) {
            name = "SoF";
            class CLASS(O_SOF_Infantry) {
                name = "Infantry";

                class CLASS(O_SOF_AATeam_wd) {
                    name = "Air-defense Team";
                    side = 0;
                    faction = QCLASS(O_SOF);
                    icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS(SOF_O_TeamLeader_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_Rifleman_AA_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_Rifleman_AA_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_AAA_wd),0);
                };

                class CLASS(O_SOF_LATTeam_wd) {
                    name = "Anti-armor Team";
                    side = 0;
                    faction = QCLASS(O_SOF);
                    icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS(SOF_O_TeamLeader_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_Rifleman_LAT_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_Rifleman_LAT_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_Rifleman_wd),0);
                };

                class CLASS(O_SOF_ATTeam_wd) {
                    name = "Anti-armor Team (Heavy)";
                    side = 0;
                    faction = QCLASS(O_SOF);
                    icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS(SOF_O_TeamLeader_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_Rifleman_AT_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_Rifleman_AT_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_AAT_wd),0);
                };

                class CLASS(O_SOF_Assault_wd) {
                    name = "Assualt Squad";
                    side = 0;
                    faction = QCLASS(O_SOF);
                    icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS(SOF_O_SquadLeader_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_Autorifleman_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_HeavyGunner_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_AHG_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_Marksman_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_Rifleman_SG_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_Rifleman_LAT_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_Medic_wd),0);
                };

                class CLASS(O_SOF_Rifle_wd) {
                    name = "Rifle Squad";
                    side = 0;
                    faction = QCLASS(O_SOF);
                    icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS(SOF_O_SquadLeader_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_RadioOperator_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_Rifleman_LAT_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_Marksman_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_Grenadier_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_Autorifleman_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_Rifleman_SG_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_Medic_wd),0);
                };

                class CLASS(O_SOF_Sentry_wd) {
                    name = "Sentry";
                    side = 0;
                    faction = QCLASS(O_SOF);
                    icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS(SOF_O_TeamLeader_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_Rifleman_wd),0);
                };

                class CLASS(O_SOF_SniperTeam_wd) {
                    name = "Sniper Team";
                    side = 0;
                    faction = QCLASS(O_SOF);
                    icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS(SOF_O_Sniper_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_Spotter_wd),0);
                };

                class CLASS(O_SOF_WeaponsSquad_wd) {
                    name = "Weapons Squad";
                    side = 0;
                    faction = QCLASS(O_SOF);
                    icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS(SOF_O_SquadLeader_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_RadioOperator_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_Autorifleman_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_Grenadier_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_Marksman_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_Rifleman_AT_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_AAT_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_Medic_wd),0);
                };
            };

            class CLASS(O_SOF_SupportInfantry) {
                name = "Support Infantry";

                class CLASS(O_SOF_FOTeam_wd) {
                    name = "Forward Obervation Team";
                    side = 0;
                    faction = QCLASS(O_SOF);
                    icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS(SOF_O_TeamLeader_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_Spotter_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_RadioOperator_wd),0);
                };

                class CLASS(O_SOF_HMG_wd) {
                    name = "HMG Team";
                    side = 0;
                    faction = QCLASS(O_SOF);
                    icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS(SOF_O_TeamLeader_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_Support_HMG_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_Support_AMG_wd),0);
                };

                class CLASS(O_SOF_MG_wd) {
                    name = "MG Team";
                    side = 0;
                    faction = QCLASS(O_SOF);
                    icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS(SOF_O_HeavyGunner_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_Spotter_wd),0);
                    GROUP_UNIT(CLASS(SOF_O_AHG_wd),0);
                };
            };
        };
    };
};
