class B_Carryall_green_F;
class CLASS(B_Carryall_green_F_AT): B_Carryall_green_F {
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

class tacs_Backpack_Kitbag_Medic_Green;
class CLASS(tacs_Backpack_Kitbag_Medic_Green_CLS): tacs_Backpack_Kitbag_Medic_Green {
    dlc = QUOTE(PREFIX); 
    scope = 1; 
    scopeCurator = 1;
    class TransportWeapons {};
    class TransportItems {
        MACRO_MEDICAL_BACKPACK_ITEMS;
    };
    class TransportMagazines {};
};

class B_LegStrapBag_black_F;
class CLASS(B_LegStrapBag_black_F_ENG): B_LegStrapBag_black_F {
    dlc = QUOTE(PREFIX); 
    scope = 1; 
    scopeCurator = 1;
    class TransportWeapons {};
    class TransportItems {
        ADDITEM(ToolKit,1);
    };
    class TransportMagazines {};
};
