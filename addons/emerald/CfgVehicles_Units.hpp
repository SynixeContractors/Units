class B_GEN_Soldier_F;
class CLASS(Emerald_Soldier): B_GEN_Soldier_F {
    identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};
    faction = QCLASS(B_Emerald);
};
class B_GEN_Soldier_RF;
class CLASS(Emerald_Soldier_Light): B_GEN_Soldier_RF {
    identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};
    faction = QCLASS(B_Emerald);
};
class B_GEN_Soldier_base_F;
class B_GEN_Commander_F: B_GEN_Soldier_base_F {
    class EventHandlers;
};
class CLASS(Emerald_Commander): B_GEN_Commander_F {
    identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};
    faction = QCLASS(B_Emerald);
    linkedItems[] = {QCLASS(Emerald_Beret),"V_TacVest_gen_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[] = {QCLASS(Emerald_Beret),"V_TacVest_gen_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    class EventHandlers: EventHandlers {
        init = "";
    };
};
class B_GEN_Helipilot_RF;
class CLASS(Emerald_Helipilot): B_GEN_Helipilot_RF {
    identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};
    faction = QCLASS(B_Emerald);
};
class B_GEN_crew_lxWS;
class CLASS(Emerald_Crew): B_GEN_crew_lxWS {
    identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};
    faction = QCLASS(B_Emerald);
};

class C_man_1;
class CLASS(Emerald_Civ): C_man_1 {
    SCOPE_DLC;
    identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};
    faction = QCLASS(C_Emerald);
};

class CLASS(Emerald_Civ_Camera): CLASS(Emerald_Civ) {
    displayName = "Civilian (Camera)";
};
