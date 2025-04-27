class CLASS(Base_INDEP);
class CLASS(Malden_Revolutionary): CLASS(Base_INDEP) {
    SCOPE_DLC;
    displayName = "Member";
    genericNames = "FrenchMen";
    identityTypes[] = {"Head_Euro","Head_Greek","G_CIVIL_male","LanguageFRE_F"};
    faction = QCLASS(I_Malden_Revolution);
};
