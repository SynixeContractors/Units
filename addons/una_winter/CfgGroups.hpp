class CfgGroups {
	class WEST {
		class CLASS(BLU_UN_lxWS) {
			name = "UNA (Winter)";
			class CLASS(BLU_UNA_Infantry_Winter) {
			name = "Infantry (Winter)";
				class CLASS(B_UNA_RifleSquad_Winter) {
					name = "Rifle Squad";
					side = 1;
					faction = QCLASS(B_UN);
					icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
					__COUNTER_RESET__
					GROUP_UNIT(CLASS(B_UN_Soldier_TL_Winter),1);
					GROUP_UNIT(CLASS(B_UN_Soldier_GL_Winter),1);
					GROUP_UNIT(CLASS(B_UN_Soldier_Winter),1);
					GROUP_UNIT(CLASS(B_UN_Soldier_02_Winter),1);
					GROUP_UNIT(CLASS(B_UN_Soldier_AR_Winter),1);
					GROUP_UNIT(CLASS(B_UN_HeavyGunner_Winter),1);
					GROUP_UNIT(CLASS(B_UN_medic_Winter),1);
				};

				class CLASS(B_UNA_Sentry_Winter) {
					name = "Sentry";
					side = 1;
					faction = QCLASS(B_UN);
					icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
					__COUNTER_RESET__
					GROUP_UNIT(CLASS(B_UN_Soldier_Winter),1);
					GROUP_UNIT(CLASS(B_UN_Soldier_02_Winter),1);
				};
			};
		};
	};
};