class CfgWeapons {
    class arifle_SPAR_02_snd_F;
    class arifle_SPAR_02_snd_xps3 : arifle_SPAR_02_snd_F {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_Holosight_blk_F";
            };

            class LinkedItemsAcc {
		    	slot = "PointerSlot";
		    	item = "saber_light_lxWS";
		    };
        };
    };

    class arifle_SPAR_03_blk_F;
    class arifle_SPAR_03_blk_burris : arifle_SPAR_03_blk_F {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_DMS";
            };

            class LinkedItemsAcc {
			    slot = "PointerSlot";
			    item = "saber_light_lxWS";
		    };

            class LinkedItemsUnder {
                slot = "UnderBarrelSlot";
                item = "bipod_01_F_blk";
            };
        };
    };

    class LMG_03_F;
    class LMG_03_saber : LMG_03_F {
        scope = 1;
        class LinkedItems {
            class LinkedItemsAcc {
			    slot = "PointerSlot";
			    item = "saber_light_lxWS";
            };
        };
    };

    class arifle_VelkoR5_GL_lxWS;
    class arifle_VelkoR5_GL_cmore : arifle_VelkoR5_GL_lxWS {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_ACO_grn";
            };

            class LinkedItemsAcc {
		    	slot = "PointerSlot";
		    	item = "saber_light_lxWS";
		    };
        };
    };

    class arifle_TRG20_F;
    class arifle_TRG20_rds : arifle_TRG20_F {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_r1_high_lxWS";
            };

            class LinkedItemsAcc {
		    	slot = "PointerSlot";
		    	item = "saber_light_lxWS";
		    };
        };
    };

    class arifle_AK12_F;
    class arifle_AK12_RCO : arifle_AK12_F {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_Hamr";
            };

            class LinkedItemsAcc {
			    slot = "PointerSlot";
			    item = "saber_light_lxWS";
		    };
        };
    };

    class hgun_Pistol_heavy_01_F;
    class hgun_Pistol_heavy_01_mrd : hgun_Pistol_heavy_01_F {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_MRD";
            };

            class LinkedItemsAcc {
			    slot = "PointerSlot";
			    item = "acc_flashlight_pistol";
		    };
        };
    };

    class arifle_SPAR_01_blk_F;
    class arifle_SPAR_01_blk_xps3 : arifle_SPAR_01_blk_F {
        scope = 1;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_Holosight_blk_F";
            };

            class LinkedItemsAcc {
			    slot = "PointerSlot";
			    item = "saber_light_lxWS";
		    };
        };
    };
};