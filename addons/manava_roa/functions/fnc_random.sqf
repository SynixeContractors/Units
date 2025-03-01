#include "..\script_component.hpp"

params ["_unit"];

if !(local _unit) exitWith {};

private _uniforms = [
    "U_I_C_Soldier_Bandit_4_F",
    "U_I_C_Soldier_Bandit_1_F",
    "U_I_C_Soldier_Bandit_2_F",
    "U_I_C_Soldier_Bandit_5_F",
    "U_I_C_Soldier_Bandit_3_F",
    "U_C_ArtTShirt_01_v6_F",
    "U_C_Poloshirt_blue",
    "U_C_Poloshirt_burgundy",
    "U_C_Poloshirt_redwhite",
    "U_C_Poloshirt_salmon",
    "U_C_Poloshirt_stripped",
    "U_C_Poloshirt_tricolour",
    "U_C_Uniform_Farmer_01_F",
    "U_BG_Guerilla3_1",
    "U_BG_Guerilla1_1",
    "U_BG_Guerilla1_2_F",
    "U_BG_Guerilla2_2",
    "U_BG_Guerilla2_1",
    "U_BG_Guerilla2_3",
    "tacs_Uniform_Floral_SP_BS_LP_BB",
    "tacs_Uniform_Floral_SP_BYS_LP_BB",
    "tacs_Uniform_Floral_SP_GS_LP_BB",
    "tacs_Uniform_Floral_SP_WS_LP_BB",
    "tacs_Uniform_Floral_SP_RS_LP_BB",
    "U_C_HunterBody_grn",
    "U_OrestesBody",
    "U_C_PilotJacket_open_black_RF",
    "U_C_PilotJacket_open_brown_RF",
    "U_C_PilotJacket_open_lbrown_RF",
    "U_C_E_LooterJacket_01_F",
    "U_I_L_Uniform_01_tshirt_black_F",
    "U_I_L_Uniform_01_tshirt_olive_F",
    "U_I_L_Uniform_01_tshirt_skull_F",
    "U_I_L_Uniform_01_tshirt_sport_F",
    "U_C_Mechanic_01_F",
    "U_I_C_Soldier_Para_3_F",
    "U_I_C_Soldier_Para_4_F",
    "U_I_C_Soldier_Para_1_F",
    "tacs_Uniform_Plaid_SP_LP_BP_BB",
    "tacs_Uniform_Plaid_SP_RO_BP_BB",
    "tacs_Uniform_Plaid_SP_LPP_BP_BB",
    "tacs_Uniform_Plaid_SP_GY_BP_BB",
    "tacs_Uniform_Plaid_SP_LY_BP_BB",
    "tacs_Uniform_Plaid_SP_RT_BP_BB",
    "tacs_Uniform_Plaid_SP_CB_BP_BB",
    "U_C_Man_casual_6_F",
    "U_C_Man_casual_4_F",
    "U_C_Man_casual_5_F",
    "U_C_Poor_1"
    // "U_C_Man_casual_8_F",
    // "U_C_Man_casual_7_F",
    // "U_C_Man_casual_9_F",
    // "Aegis_U_lxWS_ION_Casualtna_F"
];

private _hats = [
    "H_Bandanna_gry",
    "H_Bandanna_blu",
    "H_Bandanna_cbr",
    "H_Bandanna_khk",
    "H_Bandanna_sgg",
    "H_Bandanna_sand",
    "H_Bandanna_surfer",
    "H_Bandanna_surfer_blk",
    "H_Bandanna_surfer_grn",
    "lxWS_H_Booniehat_desert",
    "H_Booniehat_khk",
    "H_Booniehat_oli",
    "H_Booniehat_tan",
    "H_Cap_blk",
    "H_Cap_grn",
    "H_Cap_oli",
    "H_Cap_red",
    "H_Cap_tan",
    "H_Hat_blue",
    "H_Hat_brown",
    "H_Hat_camo",
    "H_Hat_checker",
    "H_Hat_tan",
    "H_Hat_grey",
    "H_StrawHat",
    "H_StrawHat_dark"
];

private _facewear = [
    "G_Aviator",
    "G_Bandanna_aviator",
    "G_Bandanna_beast",
    "G_Bandanna_blk",
    "G_Bandanna_BlueFlame1",
    "G_Bandanna_BlueFlame2",
    "G_Bandanna_CandySkull",
    "G_Bandanna_khk",
    "G_Bandanna_oli",
    "G_Bandanna_OrangeFlame1",
    "G_Bandanna_RedFlame1",
    "G_Bandanna_Skull1",
    "G_Bandanna_Skull2",
    "G_Bandanna_tan",
    "G_Bandanna_yellow_RF",
    "G_Bandanna_Syndikat2",
    "G_Spectacles_Tinted",
    "G_Squares",
    "G_Squares_Tinted",
    "G_Spectacles"
];

private _pistols = [
    [[
        "hgun_Glock19_RF",
        "hgun_Glock19_khk_RF",
        "hgun_Glock19_Tan_RF"
    ], [["17Rnd_9x19_Mag_RF", 17]]],
    [[
        "hgun_P07_F",
        "hgun_P07_blk_F",
        "hgun_P07_khk_F"
    ], [["16Rnd_9x21_Mag", 16]]],
    [[
        "Aegis_hgun_P320_black_F",
        "Aegis_hgun_P320_khaki_F",
        "Aegis_hgun_P320_sand_F"
    ], [["17Rnd_9x21_Mag", 17]]],
    [[
        "Aegis_hgun_Pistol_R57_F",
        "Aegis_hgun_Pistol_R57_olive_F",
        "Aegis_hgun_Pistol_R57_sand_F"
    ], [["Aegis_10Rnd_570x28_RP57_Mag", 10]]]
];

private _vests = [
    "synixe_Hidden_Ballistic_Vest_02",
    "synixe_Hidden_Ballistic_Vest_01"
];

private _loadout = getUnitLoadout _unit;

if (random 1 > 0.5) then {
    private _hat = _hats call BIS_fnc_selectRandom;
    _loadout set [6, _hat];
};

private _pistol = _pistols call BIS_fnc_selectRandom;
private _pistolMag = _pistol select 1 call BIS_fnc_selectRandom;
private _pistol = _pistol select 0 call BIS_fnc_selectRandom;
private _pistolContainer = _loadout select 2;
if (_pistolContainer isEqualTo []) then {
    _pistolContainer = [_pistol, "", "", "", _pistolMag, [], ""];
} else {
    _pistolContainer set [0, _pistol];
    _pistolContainer set [3, _pistolMag];
};
_loadout set [2, _pistolContainer];

private _uniform = _uniforms call BIS_fnc_selectRandom;
private _uniformContainer = _loadout select 3;
if (_uniformContainer isEqualTo []) then {
    _uniformContainer = [_uniform, []];
} else {
    _uniformContainer set [0, _uniform];
};

_pistolMag insert [1, [ceil random 5]];
(_uniformContainer select 1) pushBack _pistolMag;

_loadout set [3, _uniformContainer];

private _vest = _vests call BIS_fnc_selectRandom;
private _vestContainer = _loadout select 4;
if (_vestContainer isEqualTo []) then {
    _vestContainer = [_vest, []];
} else {
    _vestContainer set [0, _vest];
};

_loadout set [4, _vestContainer];

_unit setUnitLoadout _loadout;

if (random 1 > 0.3) then {
    [{
        params ["_unit", "_face"];
        _unit addGoggles _face;
    }, [_unit, _facewear call BIS_fnc_selectRandom]] call CBA_fnc_execNextFrame;
};
