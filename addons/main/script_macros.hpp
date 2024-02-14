// Internal
#define DOUBLES(var1,var2) ##var1##_##var2
#define TRIPLES(var1,var2,var3) ##var1##_##var2##_##var3
#define ADDON DOUBLES(PREFIX,COMPONENT)

// Main
#define QUOTE(var1) #var1
#define VERSION_CONFIG version = MAJOR.MINOR; versionStr = QUOTE(MAJOR.MINOR.PATCH.BUILD); versionAr[] = {MAJOR,MINOR,PATCH,BUILD}

#define SCOPE_DLC \
    dlc = QUOTE(prefix); \
    scope = 2; \
    scopeCurator = 2

// Path
#define PATHTOF_SYS(var1,var2,var3) \MAINPREFIX\var1\SUBPREFIX\var2\var3
#define PATHTOF(var1) PATHTOF_SYS(PREFIX,COMPONENT,var1)
#define PATHTOEF(var1,var2) PATHTOF_SYS(PREFIX,var1,var2)
#define QPATHTOF(var1) QUOTE(PATHTOF(var1))
#define QPATHTOEF(var1,var2) QUOTE(PATHTOEF(var1,var2))

#define PATHTOR_SYS(var1,var2,var3) MAINPREFIX\var1\SUBPREFIX\var2\var3
#define PATHTOR(var1) PATHTOR_SYS(PREFIX,COMPONENT,var1)
#define PATHTOER(var1,var2) PATHTOR_SYS(PREFIX,var1,var2)
#define QPATHTOR(var1) QUOTE(PATHTOR(var1))
#define QPATHTOER(var1,var2) QUOTE(PATHTOER(var1,var2))

// Class
#define CLASS(var1) DOUBLES(PREFIX,var1)
#define QCLASS(var1) QUOTE(DOUBLES(PREFIX,var1))

// Stringtable
#define CSTRING(var1) QUOTE(TRIPLES($STR,ADDON,var1))
#define ECSTRING(var1,var2) QUOTE(TRIPLES($STR,DOUBLES(PREFIX,var1),var2))

// Inventory
#define ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
    name = #ITEM; \
    count = COUNT; \
}

#define ADDMAG(ITEM,COUNT) class _xx_##ITEM { \
    magazine = #ITEM; \
    count = COUNT; \
}

#define R2(ITEM) ITEM,ITEM
#define R3(ITEM) ITEM,ITEM,ITEM
#define R4(ITEM) ITEM,ITEM,ITEM,ITEM
#define R5(ITEM) ITEM,ITEM,ITEM,ITEM,ITEM
#define R6(ITEM) ITEM,ITEM,ITEM,ITEM,ITEM,ITEM
#define R7(ITEM) ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM
#define R8(ITEM) ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM

#define DEFAULT_ITEMS "ItemMap", "ItemCompass", "ItemWatch"
#define DEFAULT_ITEMS_RADIO DEFAULT_ITEMS, "ItemRadio"

#define EMPTY_VEHICLE_INVENTORY \
    class TransportWeapons {}; \
    class TransportItems {}; \
    class TransportMagazines {}; \
    class TransportBackpacks {}

#define MACRO_MEDICAL_BACKPACK_ITEMS \
    ADDITEM(ACE_fieldDressing,20); \
    ADDITEM(ACE_epinephrine,5); \
    ADDITEM(ACE_morphine,5); \
    ADDITEM(ACE_bloodIV,4); \
    ADDITEM(ACE_bloodIV_500,4); \
    ADDITEM(ACE_splint,4); \
    ADDITEM(ACE_tourniquet,4); \
    ADDITEM(ACE_bloodIV_250,2)

#define GROUP_UNIT(UNIT,SIDE) __GROUP_UNIT(__COUNTER__,UNIT,SIDE)

#define __GROUP_UNIT(COUNTER, UNIT, SIDE) \
    class unit##COUNTER { \
        vehicle = #UNIT; \
        side = SIDE; \
        #if COUNTER == 0 \
        rank = "SERGEANT"; \
        #else \
        #if COUNTER == 2 \
        rank = "SERGEANT"; \
        #else \
        #if COUNTER == 3 \
        rank = "CORPORAL"; \
        #else \
        #if COUNTER == 5 \
        rank = "SERGEANT"; \
        #else \
        #if COUNTER == 6 \
        rank = "CORPORAL"; \
        #else \
        rank = "PRIVATE"; \
        #endif \
        #endif \
        #endif \
        #endif \
        #endif \
        position[] = { \
            QUOTE(5 * floor ((COUNTER + 1) / 2) * (-1 ^ (COUNTER + 1))), \
            QUOTE(-5 * floor ((COUNTER + 1) / 2)), \
            0 \
        }; \
    }
