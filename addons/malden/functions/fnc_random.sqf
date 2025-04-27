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
    "U_C_Poor_1",
    "tacs_Uniform_Garment_LS_TS_BP_BB",
    "tacs_Uniform_Garment_LS_TS_BP_BB",
    "tacs_Uniform_Garment_LS_TS_BP_BB",
    "tacs_Uniform_Garment_LS_TS_BP_BB",
    "tacs_Uniform_Garment_LS_TS_BP_BB",
    "tacs_Uniform_Garment_LS_TS_BP_BB"
    // "U_C_Man_casual_8_F",
    // "U_C_Man_casual_7_F",
    // "U_C_Man_casual_9_F",
    // "Aegis_U_lxWS_ION_Casualtna_F"
];

private _hats = [
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
    "H_HelmetLuchnik_cover_khk_F",
    "H_HelmetLuchnik_cover_khk_F",
    "H_HelmetLuchnik_cover_khk_F",
    "H_HelmetLuchnik_cover_khk_F",
    "H_HelmetLuchnik_cover_khk_F",
    "H_HelmetLuchnik_cover_khk_F"
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

private _rifles = [
    [[
        "arifle_SPAR_01_snd_F"
    ], [["30Rnd_556x45_AP_Stanag_green_Tan_RF", 30]]],
    [[
        "arifle_Katiba_F"
    ], [["30Rnd_65x39_caseless_green", 20]]]
];

private _vests = [
    "milgp_v_marciras_light_cb_cb",
    "milgp_v_marciras_marksman_belt_cb_cb_cb",
    "milgp_v_marciras_teamleader_belt_cb_cb_cb",
    "milgp_v_jpc_hgunner_cb_cb",
    "milgp_v_marciras_medic_belt_cb_cb_cb",
    "milgp_v_marciras_assaulter_cb_cb"
];

private _loadout = getUnitLoadout _unit;

if (random 1 > 0.5) then {
    private _hat = _hats call BIS_fnc_selectRandom;
    _loadout set [6, _hat];
};

private _rifle = _rifles call BIS_fnc_selectRandom;
private _rifleMag = _rifle select 1 call BIS_fnc_selectRandom;
private _rifle = _rifle select 0 call BIS_fnc_selectRandom;
private _rifleContainer = _loadout select 0;
if (_rifleContainer isEqualTo []) then {
    _rifleContainer = [_rifle, "", "", "", _rifleMag, [], ""];
} else {
    _rifleContainer set [0, _rifle];
    _rifleContainer set [3, _rifleMag];
};
_loadout set [0, _rifleContainer];

private _uniform = _uniforms call BIS_fnc_selectRandom;
private _uniformContainer = _loadout select 3;
if (_uniformContainer isEqualTo []) then {
    _uniformContainer = [_uniform, []];
} else {
    _uniformContainer set [0, _uniform];
};

_rifleMag insert [1, [ceil random 5]];
(_uniformContainer select 1) pushBack _rifleMag;

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
