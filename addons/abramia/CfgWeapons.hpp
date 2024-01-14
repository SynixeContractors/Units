class CfgWeapons {
    class InventoryItem_Base_F;
    class ItemCore;
    class UniformItem: InventoryItem_Base_F {
        type = 801;
    };
    class CLASS(wdl): ItemCore {
        author = "$STR_CUP_AUTHOR_STRING";
        dlc = "CUP_Units";
        scope = 2;
        allowedSlots[] = {901};
        displayName = "$STR_CUP_dn_U_I_RACS_WDL_1";
        picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RACS\data\ui\icon_U_I_RACS_WDL_1_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QCLASS(I_Rifleman_F);
            containerClass = "Supply60";
            mass = 20;
        };
    };
};
