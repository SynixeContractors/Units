class CfgGroups {
    class EAST {
        class CLASS(O_Manava_Roa) {
            name = "Te Manava Roa";
            class CLASS(O_Manava_Roa_Infantry) {
                name = "Infantry";

                class CLASS(O_Manava_Roa_Sentry) {
                    name = "Sentry";
                    side = 0;
                    faction = QCLASS(O_Manava_Roa);
                    icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS(Manava_Roa_Member),0);
                    GROUP_UNIT(CLASS(Manava_Roa_Member),0);
                };

                class CLASS(O_Manava_Roa_FireTeam) {
                    name = "Fire Team";
                    side = 0;
                    faction = QCLASS(O_Manava_Roa);
                    icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS(Manava_Roa_Member),0);
                    GROUP_UNIT(CLASS(Manava_Roa_Member),0);
                    GROUP_UNIT(CLASS(Manava_Roa_Member),0);
                    GROUP_UNIT(CLASS(Manava_Roa_Member),0);
                };

                class CLASS(O_Manava_Roa_Squad) {
                    name = "Squad";
                    side = 0;
                    faction = QCLASS(O_Manava_Roa);
                    icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS(Manava_Roa_Member),0);
                    GROUP_UNIT(CLASS(Manava_Roa_Member),0);
                    GROUP_UNIT(CLASS(Manava_Roa_Member),0);
                    GROUP_UNIT(CLASS(Manava_Roa_Member),0);
                    GROUP_UNIT(CLASS(Manava_Roa_Member),0);
                    GROUP_UNIT(CLASS(Manava_Roa_Member),0);
                    GROUP_UNIT(CLASS(Manava_Roa_Member),0);
                    GROUP_UNIT(CLASS(Manava_Roa_Member),0);
                };
            };
        };
    };
};


