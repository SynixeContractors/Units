class CfgGroups {
    class WEST {
        class CLASS(B_Emerald) {
            name = "Gendarme d’Émeraude";
            class CLASS(B_Emerald_Infantry) {
                name = "Infantry";

                class CLASS(B_Emerald_Sentry) {
                    name = "Sentry";
                    side = 1;
                    faction = QCLASS(B_Emerald);
                    icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS(Emerald_Soldier_Light),1);
                    GROUP_UNIT(CLASS(Emerald_Soldier_Light),1);
                };

                class CLASS(B_Emerald_FireTeam) {
                    name = "Fire Team";
                    side = 1;
                    faction = QCLASS(B_Emerald);
                    icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS(Emerald_Commander),1);
                    GROUP_UNIT(CLASS(Emerald_Soldier),1);
                    GROUP_UNIT(CLASS(Emerald_Soldier),1);
                    GROUP_UNIT(CLASS(Emerald_Soldier),1);
                };
            };
        };
    };
};


