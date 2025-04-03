class tacs_Backpack_Kitbag_Medic_Tan;
class CLASS(O_MDF_Medic_Backpack): tacs_Backpack_Kitbag_Medic_Tan {
    BACKPACK_DEFAULTS;
    BACKPACK_ITEMS_MEDICAL;
};

class B_AssaultPack_cbr;
class CLASS(O_MDF_Engineer_Backpack): B_AssaultPack_cbr {
    BACKPACK_DEFAULTS;
    class TransportItems {
        ADDITEM(ACE_wirecutter,1);
        ADDITEM(ACE_DefusalKit,1);
        ADDITEM(ACE_Clacker,1);
        ADDITEM(DemoCharge_Remote_Mag,2);
    };
};
