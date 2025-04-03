class FlagCarrier;
class CLASS(Flag_Malden): FlagCarrier {
    scope = 2;
    scopeCurator = 2;
    displayName = "Flag (Malden)";
    author = "Brett Harrison";
    editorPreview = QPATHTOF(data\preview_malden.jpg);
    class EventHandlers {
        init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOF(data\malden_co.paa)));
    };
};
