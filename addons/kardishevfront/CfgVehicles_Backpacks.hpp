class B_AssaultPack_rgr;
class CLASS(B_AssaultPack_rgr_AT): B_AssaultPack_rgr {
	class TransportWeapons {};
	class TransportItems {};
	class TransportMagazines {
		class _xx_RPG7_F {
			magazine = "RPG7_F";
			count = 2;
		};
	};
}; // RPG7 Assault Pack

class B_Carryall_green_F;
class CLASS(O_Carryall_green_F_AT): B_Carryall_green_F {
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
		class _xx_RPG32_HE_F {
			magazine = "RPG32_HE_F";
			count = 2;
		};
	};
}; // RPG32 Carryall