class B_T_MRAP_01_F;
class CLASS(B_T_MRAP_01_F): B_T_MRAP_01_F {
	dlc = QUOTE(prefix);
	scope = 2;
	curatorScope = 2;
	faction = QCLASS(B_PolkBaskera);
	crew = QCLASS(B_Rifleman_F);
	typicalCargo[] = {QCLASS(B_Rifleman_F)};
	class TransportWeapons {};
	class TransportItems {};
	class TransportMagazines {};
	class TransportBackpacks {};
};

class B_Offroad_01_F;
class CLASS(B_Offroad_01_F): B_Offroad_01_F {
	dlc = QUOTE(prefix);
	scope = 2;
	curatorScope = 2;
	hiddenSelections[] = {"camo"};
	faction = QCLASS(B_PolkBaskera);
	crew = QCLASS(B_Rifleman_F);
	typicalCargo[] = {QCLASS(B_Rifleman_F)};
	class TransportWeapons {};
	class TransportItems {};
	class TransportMagazines {};
	class TransportBackpacks {};
};