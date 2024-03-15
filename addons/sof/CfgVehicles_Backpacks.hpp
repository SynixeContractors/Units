class B_AssaultPack_blk;
class CLASS(B_AssaultPack_blk_AT): B_AssaultPack_blk {
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

class B_Carryall_blk;
class CLASS(B_Carryall_blk_AT): B_Carryall_blk {
    dlc = QUOTE(PREFIX); 
    scope = 1; 
    scopeCurator = 1;
    class TransportWeapons {};
    class TransportItems {};
    class TransportMagazines {
        ADDMAG(Vorona_HEAT,2);
        ADDMAG(Vorona_HE,2);
    };
};

class B_Carryall_blk;
class CLASS(B_Carryall_blk_AA): B_Carryall_blk {
    dlc = QUOTE(PREFIX); 
    scope = 1; 
    scopeCurator = 1;
    class TransportWeapons {};
    class TransportItems {};
    class TransportMagazines {
        ADDMAG(Titan_AA,2);
    };
};

class B_Carryall_blk;
class CLASS(B_Carryall_blk_DMO): B_Carryall_blk {
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

class B_Carryall_blk;
class CLASS(B_Carryall_blk_MNE): B_Carryall_blk {
    dlc = QUOTE(PREFIX); 
    scope = 1; 
    scopeCurator = 1;
    class TransportWeapons {};
    class TransportItems {
        ADDITEM(ACE_DefusalKit,1);
        ADDITEM(ACE_M26_Clacker,1);
    };
    class TransportMagazines {
        ADDMAG(APERSMine_Range_Mag,3);
        ADDMAG(APERSBoundingMine_Range_Mag,2);
        ADDMAG(APERSMineDispenser_Mag,1);
    };
};

class B_Kitbag_rgr;
class CLASS(B_Kitbag_rgr_CLS): B_Kitbag_rgr {
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

class B_AssaultPack_blk;
class CLASS(B_AssaultPack_blk_Minimi): B_AssaultPack_blk {
    dlc = QUOTE(PREFIX); 
    scope = 1; 
    scopeCurator = 1;
    class TransportWeapons {};
    class TransportItems {};
    class TransportMagazines {
        ADDMAG(200Rnd_556x45_Box_Tracer_Red_F,4);
    };
};

class B_AssaultPack_blk;
class CLASS(B_AssaultPack_blk_Lynx): B_AssaultPack_blk {
    dlc = QUOTE(PREFIX); 
    scope = 1; 
    scopeCurator = 1;
    class TransportWeapons {};
    class TransportItems {};
    class TransportMagazines {
        ADDMAG(5Rnd_127x108_Mag,8);
    };
};

class B_Kitbag_rgr;
class CLASS(B_Kitbag_rgr_AGH): B_Kitbag_rgr {
    dlc = QUOTE(PREFIX); 
    scope = 1; 
    scopeCurator = 1;
    class TransportWeapons {};
    class TransportItems {};
    class TransportMagazines {
        ADDMAG(130Rnd_338_Mag,3);
    };
};

class B_AssaultPack_blk;
class CLASS(B_AssaultPack_blk_AAR): B_AssaultPack_blk {
    dlc = QUOTE(PREFIX); 
    scope = 1; 
    scopeCurator = 1;
    class TransportWeapons {};
    class TransportItems {};
    class TransportMagazines {
        ADDMAG(200Rnd_556x45_Box_Tracer_Red_F,3);
    };
};