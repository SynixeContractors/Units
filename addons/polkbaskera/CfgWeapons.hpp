class CfgWeapons {
    // Marksman Mk14 (Wooden)
    class srifle_DMR_06_hunter_F;
    class srifle_DMR_Burris : srifle_DMR_06_hunter_F {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_DMS_weathered_F";
            };
        };
    };

    // Rifleman Ak-12 C-More
    class arifle_AK12U_F;
    class arifle_AK12U_CMore : arifle_AK12U_F {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_Aco";
            };
        };
    };

    // Spotter Ak-12 ELCAN
    class arifle_AK12U_F;
    class arifle_AK12U_Elcan : arifle_AK12U_F {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_Arco_AK_blk_F";
            };
        };
    };

    // Sniper Cyrus Kahles
    class srifle_DMR_05_blk_F;
    class srifle_DMR_05_KHS : srifle_DMR_05_blk_F {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_KHS_blk";
            };
        };
    };
};
