class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preStart));
    };
};
class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};

class Extended_Init_EventHandlers {
    class CLASS(Emerald_Civ) {
        class ADDON {
            init = QUOTE([ARR_2(_this#0,"""")] call FUNC(randomCiv));
        };
    };
    class CLASS(Emerald_Civ_Camera) {
        class ADDON {
            init = QUOTE([ARR_2(_this#0,""camera"")] call FUNC(randomCiv));
        };
    };
};
