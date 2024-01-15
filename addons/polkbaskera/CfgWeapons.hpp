class cfgWeapons {

// Marksman Mk14 (Wooden)
class srifle_DMR_06_hunter_F;
	class srifle_DMR_Burris : srifle_DMR_06_hunter_F {
		scope = 1;
		class LinkedItems {
			class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_DMS_weathered_F";
			};
		};
	};

// Rifleman Ak-12 C-More
class arifle_AK12U_F;
	class arifle_AK12U_CMore : arifle_AK12U_F {
		scope = 1;
		class LinkedItems {
			class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_Aco";
			};
		};
	};

};