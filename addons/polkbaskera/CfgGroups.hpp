class CfgGroups {
	class WEST {
		class CLASS(B_PolkBaskera) {
			name = "Polk Baskera";
			class CLASS(B_PolkBaskera_Infantry) {
				name = "Infantry";
				class CLASS(B_PolkBaskera_Sentry) {
					name = "Sentry";
					side = 1;
					faction = QCLASS(B_PolkBaskera);
					icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
					__COUNTER_RESET__
					GROUP_UNIT(CLASS(B_TeamLeader_F),1);
					GROUP_UNIT(CLASS(B_Rifleman_F),1);
				};
			};
		};
	};
};