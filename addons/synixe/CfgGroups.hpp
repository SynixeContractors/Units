class CfgGroups {
    class RESISTANCE {
        class synixe_contractors_I_Contractors {
            name = "Synixe Contractors";
            class CLASS(I_SynixeContractors_Infantry) {
                name = "Contractor Groups";
                class CLASS(I_SynixeContractors_FireTeam) {
                    name = "Fire Team";
                    side = 2;
                    faction = QCLASS(I_SynixeContractors);
                    icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS(contractors_I_Teamleader_F),2);
                    GROUP_UNIT(CLASS(contractors_I_Rifleman_F_F),2);
                    GROUP_UNIT(CLASS(contractors_I_Grenadier_F),2);
                    GROUP_UNIT(CLASS(contractors_I_Autorifleman_F),2);
                };

            };
        };
    };
};
