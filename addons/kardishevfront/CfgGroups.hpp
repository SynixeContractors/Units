class CfgGroups {
    class EAST {
        class CLASS(O_KardishevFront) {
            name = "Kardishev Front";
            class CLASS(O_KardishevFront_Infantry) {
                name = "Infantry";
                class CLASS(O_KardishevFront_AmbushTeam) {
                    name = "Ambush Team";
                    side = 0;
                    faction = QCLASS(O_KardishevFront);
                    icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS(O_TeamLeader_F),0);
                    GROUP_UNIT(CLASS(O_MachineGunner_F),0);
                    GROUP_UNIT(CLASS(O_Grenadier_F),0);
                    GROUP_UNIT(CLASS(O_Rifleman_AT_F),0);
                    GROUP_UNIT(CLASS(O_Soldier_exp_F),0);
                };

                class CLASS(O_KardishevFront_FireTeam) {
                    name = "Fire Team";
                    side = 0;
                    faction = QCLASS(O_KardishevFront);
                    icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS(O_TeamLeader_F),0);
                    GROUP_UNIT(CLASS(O_Rifleman_F),0);
                    GROUP_UNIT(CLASS(O_Grenadier_F),0);
                    GROUP_UNIT(CLASS(O_MachineGunner_F),0);
                };

                class CLASS(O_KardishevFront_FireTeam_AT) {
                    name = "Fire Team (AT)";
                    side = 0;
                    faction = QCLASS(O_KardishevFront);
                    icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS(O_TeamLeader_F),0);
                    GROUP_UNIT(CLASS(O_Rifleman_F),0);
                    GROUP_UNIT(CLASS(O_Grenadier_F),0);
                    GROUP_UNIT(CLASS(O_Rifleman_AT_F),0);
                };

                class CLASS(O_KardishevFront_RifleSquad) {
                    name = "Rifle Squad";
                    side = 0;
                    faction = QCLASS(O_KardishevFront);
                    icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS(O_TeamLeader_F),0);
                    GROUP_UNIT(CLASS(O_Rifleman_F),0);
                    GROUP_UNIT(CLASS(O_MachineGunner_F),0);
                    GROUP_UNIT(CLASS(O_Grenadier_F),0);
                    GROUP_UNIT(CLASS(O_Rifleman_AT_F),0);
                    GROUP_UNIT(CLASS(O_Marksman_F),0);
                    GROUP_UNIT(CLASS(O_Medic_F),0);
                };

                class CLASS(O_KardishevFront_Sentry) {
                    name = "Sentry";
                    side = 0;
                    faction = QCLASS(O_KardishevFront);
                    icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS(O_TeamLeader_F),0);
                    GROUP_UNIT(CLASS(O_Rifleman_F),0);
                };

                class CLASS(O_KardishevFront_SupportSquad) {
                    name = "Support Squad";
                    side = 0;
                    faction = QCLASS(O_KardishevFront);
                    icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS(O_TeamLeader_F),0);
                    GROUP_UNIT(CLASS(O_Rifleman_F),0);
                    GROUP_UNIT(CLASS(O_Grenadier_F),0);
                    GROUP_UNIT(CLASS(O_Rifleman_AT_F),0);
                    GROUP_UNIT(CLASS(O_Soldier_exp_F),0);
                    GROUP_UNIT(CLASS(O_Medic_F),0);
                };
            };
            class CLASS(O_KardishevFront_Sab) {
                name = "Saboteur Teams";
                class CLASS(O_KardishevFront_Sab_Ambush) {
                    name = "Ambush Team";
                    side = 0;
                    faction = QCLASS(O_KardishevFront);
                    icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS(O_TeamLeader_Sab_F),0);
                    GROUP_UNIT(CLASS(O_Rifleman_AT_Sab_F),0);
                    GROUP_UNIT(CLASS(O_MachineGunner_Sab_F),0);
                    GROUP_UNIT(CLASS(O_Sapper_Sab_F),0);
                };

                class CLASS(O_KardishevFront_Sab_Sentry) {
                    name = "Sentry";
                    side = 0;
                    faction = QCLASS(O_KardishevFront);
                    icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS(O_TeamLeader_Sab_F),0);
                    GROUP_UNIT(CLASS(O_Marksman_Sab_F),0);
                };

                class CLASS(O_KardishevFront_Sab_Sapper) {
                    name = "Sapper Team";
                    side = 0;
                    faction = QCLASS(O_KardishevFront);
                    icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS(O_TeamLeader_Sab_F),0);
                    GROUP_UNIT(CLASS(O_Rifleman_AT_Sab_F),0);
                    GROUP_UNIT(CLASS(O_MachineGunner_Sab_F),0);
                    GROUP_UNIT(CLASS(O_Marksman_Sab_F),0);
                    GROUP_UNIT(CLASS(O_Sapper_Sab_F),0);
                    GROUP_UNIT(CLASS(O_Medic_Sab_F),0);
                };

                class CLASS(O_KardishevFront_Sab_MGTeam) {
                    name = "MG Team";
                    side = 0;
                    faction = QCLASS(O_KardishevFront);
                    icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS(O_TeamLeader_Sab_F),0);
                    GROUP_UNIT(CLASS(O_MachineGunner_Sab_F),0);
                    GROUP_UNIT(CLASS(O_Marksman_Sab_F),0);
                };

                class CLASS(O_KardishevFront_Sab_Recon) {
                    name = "Recon Team";
                    side = 0;
                    faction = QCLASS(O_KardishevFront);
                    icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS(O_TeamLeader_Sab_F),0);
                    GROUP_UNIT(CLASS(O_Rifleman_AT_Sab_F),0);
                    GROUP_UNIT(CLASS(O_Marksman_Sab_F),0);
                    GROUP_UNIT(CLASS(O_Sapper_Sab_F),0);
                };

                class CLASS(O_KardishevFront_Sab_Sniper) {
                    name = "Sniper Team";
                    side = 0;
                    faction = QCLASS(O_KardishevFront);
                    icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS(O_Sniper_Sab_F),0);
                    GROUP_UNIT(CLASS(O_Spotter_Sab_F),0);
                };
            };
        };
    };
};
