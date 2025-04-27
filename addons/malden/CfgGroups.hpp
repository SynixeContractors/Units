class CfgGroups {
    class INDEP {
        class CLASS(I_Malden_Revolution) {
            name = "Malden Revolutionary Forces";
            class CLASS(I_Malden_Revolution_Infantry) {
                name = "Infantry";

                class CLASS(I_Malden_Revolution_Sentry) {
                    name = "Sentry";
                    side = 0;
                    faction = QCLASS(I_Malden_Revolution);
                    icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS(Malden_Revolutionary),0);
                    GROUP_UNIT(CLASS(Malden_Revolutionary),0);
                };

                class CLASS(I_Malden_Revolution_FireTeam) {
                    name = "Fire Team";
                    side = 0;
                    faction = QCLASS(I_Malden_Revolution);
                    icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS(Malden_Revolutionary),0);
                    GROUP_UNIT(CLASS(Malden_Revolutionary),0);
                    GROUP_UNIT(CLASS(Malden_Revolutionary),0);
                    GROUP_UNIT(CLASS(Malden_Revolutionary),0);
                };

                class CLASS(I_Malden_Revolution_Squad) {
                    name = "Squad";
                    side = 0;
                    faction = QCLASS(I_Malden_Revolution);
                    icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS(Malden_Revolutionary),0);
                    GROUP_UNIT(CLASS(Malden_Revolutionary),0);
                    GROUP_UNIT(CLASS(Malden_Revolutionary),0);
                    GROUP_UNIT(CLASS(Malden_Revolutionary),0);
                    GROUP_UNIT(CLASS(Malden_Revolutionary),0);
                    GROUP_UNIT(CLASS(Malden_Revolutionary),0);
                    GROUP_UNIT(CLASS(Malden_Revolutionary),0);
                    GROUP_UNIT(CLASS(Malden_Revolutionary),0);
                };
            };
        };
    };
};


