class B_AssaultPack_rgr;
class CLASS(O_AssaultPack_rgr_AT): B_AssaultPack_rgr {
    dlc = QUOTE(PREFIX); 
    scope = 1; 
    scopeCurator = 1;
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

class B_Kitbag_rgr;
class CLASS(O_Kitbag_rgr_CLS): B_Kitbag_rgr {
    dlc = QUOTE(PREFIX); 
    scope = 1; 
    scopeCurator = 1;
    class TransportWeapons {};
    class TransportItems {
        MACRO_MEDICAL_BACKPACK_ITEMS;
    };
    class TransportMagazines {};
};

class B_Carryall_green_F;
class CLASS(O_Carryall_green_F_DMO): B_Carryall_green_F {
    dlc = QUOTE(PREFIX); 
    scope = 1; 
    scopeCurator = 1;
    class TransportWeapons {};
    class TransportItems {
        ADDITEM(ACE_DefusalKit,1);
        ADDITEM(ACE_M26_Clacker,1);
    };
    class TransportMagazines {
        ADDMAG(DemoCharge_Remote_Mag,2);
        ADDMAG(SatchelCharge_Remote_Mag,1);
        ADDMAG(ClaymoreDirectionalMine_Remote_Mag,4);
    };
};
