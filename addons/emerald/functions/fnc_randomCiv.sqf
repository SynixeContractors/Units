#include "..\script_component.hpp"

params ["_unit", "_variant"];

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
    "tacs_Uniform_Floral_SP_BS_LP_BB",
    "tacs_Uniform_Floral_SP_BYS_LP_BB",
    "tacs_Uniform_Floral_SP_GS_LP_BB",
    "tacs_Uniform_Floral_SP_WS_LP_BB",
    "tacs_Uniform_Floral_SP_RS_LP_BB",
    "U_C_PilotJacket_open_black_RF",
    "U_C_PilotJacket_open_brown_RF",
    "U_C_PilotJacket_open_lbrown_RF",
    "U_I_L_Uniform_01_tshirt_black_F",
    "U_I_L_Uniform_01_tshirt_olive_F",
    "U_I_L_Uniform_01_tshirt_skull_F",
    "U_I_L_Uniform_01_tshirt_sport_F",
    "U_C_Mechanic_01_F",
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
    "G_Spectacles_Tinted",
    "G_Squares",
    "G_Squares_Tinted",
    "G_Spectacles"
];

private _loadout = getUnitLoadout _unit;

if (random 1 > 0.5) then {
    private _hat = _hats call BIS_fnc_selectRandom;
    _loadout set [6, _hat];
};

private _uniform = _uniforms call BIS_fnc_selectRandom;
private _uniformContainer = _loadout select 3;
if (_uniformContainer isEqualTo []) then {
    _uniformContainer = [_uniform, []];
} else {
    _uniformContainer set [0, _uniform];
};

_loadout set [3, _uniformContainer];


if (random 1 < 0.3) then {
    [{
        params ["_unit", "_face"];
        _unit addGoggles _face;
    }, [_unit, _facewear call BIS_fnc_selectRandom]] call CBA_fnc_execNextFrame;
};

if (_variant == "camera") then {
    _loadout set [8, ["Camera_lxWS", "", "", "", [], [], ""]];
};

_unit setUnitLoadout _loadout;
