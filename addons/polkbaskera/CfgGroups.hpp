class CfgGroups {
	class WEST {
		class CLASS(B_PolkBaskera) {
			name = "Polk Baskera";
			class CLASS(B_PolkBaskera_Infantry) {
			name = "Infantry";
				class CLASS(B_PolkBaskera_FireTeam) {
					name = "Fire Team";
					side = 1;
					faction = QCLASS(B_PolkBaskera);
					icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
					__COUNTER_RESET__
					GROUP_UNIT(CLASS(B_TeamLeader_F),1);
					GROUP_UNIT(CLASS(B_Rifleman_F),1);
					GROUP_UNIT(CLASS(B_Grenadier_F),1);
					GROUP_UNIT(CLASS(B_Autorifleman_F),1);
				};

				class CLASS(B_PolkBaskera_FireTeam_AT) {
					name = "Fire Team (AT)";
					side = 1;
					faction = QCLASS(B_PolkBaskera);
					icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
					__COUNTER_RESET__
					GROUP_UNIT(CLASS(B_TeamLeader_F),1);
					GROUP_UNIT(CLASS(B_Rifleman_F),1);
					GROUP_UNIT(CLASS(B_Grenadier_F),1);
					GROUP_UNIT(CLASS(B_Rifleman_AT_F),1);
				};

				class CLASS(B_PolkBaskera_RifleSquad) {
					name = "Rifle Squad";
					side = 1;
					faction = QCLASS(B_PolkBaskera);
					icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
					__COUNTER_RESET__
					GROUP_UNIT(CLASS(B_TeamLeader_F),1);
					GROUP_UNIT(CLASS(B_Rifleman_F),1);
					GROUP_UNIT(CLASS(B_Autorifleman_F),1);
					GROUP_UNIT(CLASS(B_Grenadier_F),1);
					GROUP_UNIT(CLASS(B_Rifleman_AT_F),1);
					GROUP_UNIT(CLASS(B_Marksman_F),1);
					GROUP_UNIT(CLASS(B_Medic_F),1);
				};

				class CLASS(B_PolkBaskera_RaidTeam) {
					name = "Raid Team";
					side = 1;
					faction = QCLASS(B_PolkBaskera);
					icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
					__COUNTER_RESET__
					GROUP_UNIT(CLASS(B_TeamLeader_F),1);
					GROUP_UNIT(CLASS(B_Autorifleman_F),1);
					GROUP_UNIT(CLASS(B_Grenadier_F),1);
					GROUP_UNIT(CLASS(B_Rifleman_AT_F),1);
					GROUP_UNIT(CLASS(B_Soldier_exp_F),1);
				};

				class CLASS(B_PolkBaskera_Sentry) {
					name = "Sentry";
					side = 1;
					faction = QCLASS(B_PolkBaskera);
					icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
					__COUNTER_RESET__
					GROUP_UNIT(CLASS(B_TeamLeader_F),1);
					GROUP_UNIT(CLASS(B_Rifleman_F),1);
				};

				class CLASS(B_PolkBaskera_SniperTeam) {
					name = "Sniper Team";
					side = 1;
					faction = QCLASS(B_PolkBaskera);
					icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
					__COUNTER_RESET__
					GROUP_UNIT(CLASS(B_Sniper_F),1);
					GROUP_UNIT(CLASS(B_Spotter_F),1);
				};

				class CLASS(B_PolkBaskera_SupportSquad) {
					name = "Support Squad";
					side = 1;
					faction = QCLASS(B_PolkBaskera);
					icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
					__COUNTER_RESET__
					GROUP_UNIT(CLASS(B_TeamLeader_F),1);
					GROUP_UNIT(CLASS(B_Rifleman_F),1);
					GROUP_UNIT(CLASS(B_Grenadier_F),1);
					GROUP_UNIT(CLASS(B_Rifleman_AT_F),1);
					GROUP_UNIT(CLASS(B_Soldier_exp_F),1);
					GROUP_UNIT(CLASS(B_Engineer_F),1);
					GROUP_UNIT(CLASS(B_Medic_F),1);
				};
			};
		};
	};
};