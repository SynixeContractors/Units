class FlagCarrier;
class CLASS(Flag_Emerald): FlagCarrier {
    scope = 2;
    scopeCurator = 2;
    displayName = "Flag (L’Archipel d’Émeraude)";
    author = "Brett Harrison";
    editorPreview = QPATHTOF(data\preview_emerald.jpg);
    class EventHandlers {
        init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOF(data\emerald_co.paa)));
    };
};
