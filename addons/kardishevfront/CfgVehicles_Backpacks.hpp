class B_AssaultPack_rgr;
class CLASS(B_AssaultPack_rgr_AT): B_AssaultPack_rgr {
    class TransportWeapons {};
    class TransportItems {};
    class TransportMagazines {
        ADDMAG(RPG7_F,2);
    };
};

class B_Carryall_green_F;
class CLASS(O_Carryall_green_F_AT): B_Carryall_green_F {
    dlc = QUOTE(PREFIX); 
    scope = 1; 
    scopeCurator = 1;
    class TransportWeapons {};
    class TransportItems {};
    class TransportMagazines {
        ADDMAG(RPG32_F,2);
        ADDMAG(RPG32_HE_F,2);
    };
};
