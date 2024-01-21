class CfgGroups {
	class EAST {
		class CLASS(O_KardishevFront) {
			name = "Kardishev Front";
			class CLASS(B_KardishevFront_Infantry) {
				name = "Infantry";
				class CLASS(B_KardishevFront_Sentry) {
					name = "Sentry";
					side = 0;
					faction = QCLASS(B_KardishevFront);
					icon = "\a3\ui_f\data\map\markers\csat\n_inf.paa";
					__COUNTER_RESET__
					GROUP_UNIT(CLASS(B_TeamLeader_F),1);
					GROUP_UNIT(CLASS(B_Rifleman_F),1);
				};
			};
		};
	};
};