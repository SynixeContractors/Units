class CLASS(Base_OPFOR);
class CLASS(Manava_Roa_Member): CLASS(Base_OPFOR) {
    SCOPE_DLC;
    displayName = "Member";
    identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};
    faction = QCLASS(O_Manava_Roa);
};
