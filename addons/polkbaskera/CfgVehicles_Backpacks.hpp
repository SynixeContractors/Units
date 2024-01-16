class B_Carryall_green_F;
class CLASS(B_Carryall_green_F_AT): B_Carryall_green_F {
	dlc = QUOTE(PREFIX); 
	scope = 1; 
	scopeCurator = 1;
	class TransportWeapons {};
	class TransportItems {};
	class TransportMagazines {
		class _xx_RPG32_F {
			magazine = "RPG32_F";
			count = 2;
		};
	};
}; // RPG32 AT Carryall Pack

class B_Carryall_green_F;
class CLASS(B_Carryall_green_F_ENG): B_Carryall_green_F {
	dlc = QUOTE(PREFIX); 
	scope = 1; 
	scopeCurator = 1;
	class TransportWeapons {};
	class TransportItems {
		class _xx_ACE_DefusalKit {
			item = "ACE_DefusalKit";
			count = 1;
		};

		class _xx_ACE_M26_Clacker {
			item = "ACE_M26_Clacker";
			count = 1;
		};
	};
	class TransportMagazines {
		class _xx_DemoCharge_Remote_Mag {
			magazine = "DemoCharge_Remote_Mag";
			count = 2;
		};

		class _xx_SatchelCharge_Remote_Mag {
			magazine = "SatchelCharge_Remote_Mag";
			count = 1;
		};

		class _xx_ClaymoreDirectionalMine_Remote_Mag {
			magazine = "ClaymoreDirectionalMine_Remote_Mag";
			count = 1;
		};
	};
}; // Explosive Specialist Carryall Pack

class B_Kitbag_rgr;
class CLASS(B_Kitbag_rgr_CLS): B_Kitbag_rgr {
	dlc = QUOTE(PREFIX); 
	scope = 1; 
	scopeCurator = 1;
	class TransportWeapons {};
	class TransportItems {
		class _xx_Medikit {
		magazine = "Medikit";
		count = 1;
		};

		class _xx_FirstAidKit {
		magazine = "FirstAidKit";
		count = 10;
		};

	};
	class TransportMagazines {};
}; // Medic Kitbag
