class CfgWeapons {
    class srifle_DMR_06_camo_F;
    class srifle_camo_Burris : srifle_DMR_06_camo_F {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_DMS_weathered_F";
            };
        };
    };

    class arifle_AK12U_F;
    class arifle_AK12U_Supp: arifle_AK12U_F {
        scope = 1;
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "muzzle_snds_B";
            };
        };
    };


    class arifle_VelkoR5_GL_lxWS;
    class arifle_VelkoR5_GL_Supp: arifle_VelkoR5_GL_lxWS {
        scope = 1;
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "muzzle_snds_M";
            };
        };
    };

    class arifle_Velko_lxWS;
    class arifle_VelkoR5_MRCO_Supp: arifle_Velko_lxWS {
        scope = 1;
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "muzzle_snds_M";
            };
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_MRCO";
            };
        };
    };

    class arifle_Velko_lxWS;
    class arifle_VelkoR5_Supp: arifle_Velko_lxWS {
        scope = 1;
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "muzzle_snds_M";
            };
        };
    };

    class LMG_S77_Compact_lxWS;
    class LMG_S77_Compact_Supp: LMG_S77_Compact_lxWS {
        scope = 1;
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "muzzle_snds_B";
            };
        };
    };

    class srifle_DMR_02_F;
    class srifle_DMR_02_KHS_Supp : srifle_DMR_02_F {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_KHS_blk";
            };
        };
    };
};
