class cfgWeapons {

// Marksman Mk14 (Camo)
class srifle_DMR_06_camo_F;
	class srifle_camo_Burris : srifle_DMR_06_camo_F {
		scope = 1;
		class LinkedItems {
			class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_DMS_weathered_F";
			};
		};
	};

class arifle_AK12U_F;
	class arifle_AK12U_Supp: arifle_AK12U_F {
		scope = 1;
		class LinkedItems {
			class LinkedItemsMuzzle {
				slot = "MuzzleSlot";
				item = "muzzle_snds_B";
			};
		};
	};

};