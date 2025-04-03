class CfgWeapons {
    class arifle_SPAR_01_snd_F;
    class CLASS(O_MDF_HK416): arifle_SPAR_01_snd_F {
        WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(Aegis_optic_ICO_sand);
            EQUIP_POINTER(saber_light_lxWS);
        };
    };

    class CLASS(O_MDF_HK416_TL): arifle_SPAR_01_snd_F {
        WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_ERCO_snd_F);
            EQUIP_POINTER(saber_light_lxWS);
        };
    };

    class arifle_SPAR_02_snd_F;
    class CLASS(O_MDF_HK416_14): arifle_SPAR_02_snd_F {
        WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_Hamr_sand_lxWS);
            EQUIP_POINTER(saber_light_lxWS);
            EQUIP_BIPOD(bipod_02_F_tan);
        };
    };

    class arifle_SPAR_03_snd_F;
    class CLASS(O_MDF_HK417): arifle_SPAR_03_snd_F {
        WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_Arco_AK_blk_F);
            EQUIP_POINTER(saber_light_lxWS);
            EQUIP_BIPOD(bipod_02_F_tan);
        };
    };
};
