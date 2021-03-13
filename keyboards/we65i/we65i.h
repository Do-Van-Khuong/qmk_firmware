#pragma once

#include "quantum.h"

#ifdef WE65I_V3_0

/* ANSI
 * ,--------------------------------------------------------------.
 * | 00| 10| 01| 11| 02| 12| 03| 13| 04| 14| 05| 15| 06|  16  | 07|
 * |--------------------------------------------------------------|
 * | 20  | 30| 21| 31| 22| 32| 23| 33| 24| 34| 25| 35| 26| 36 | 27|
 * |--------------------------------------------------------------|
 * | 40   | 41| 51| 42| 52| 43| 53| 44| 54| 45| 55| 46|   56  | 47|
 * |--------------------------------------------------------------|
 * | 60     | 61| 71| 62| 72| 63| 73| 64| 74| 65| 75|  66 | 76| 67|
 * |--------------------------------------------------------------|
 * | 80 | 81 | 82 |           83           | 84 | 85 || 86| 87| 77|
 * `--------------------------------------------------------------'
 */
#define LAYOUT_65_ansi_blocker( \
	K00, K10, K01, K11, K02, K12, K03, K13, K04, K14, K05, K15, K06, K16, K07,	\
	K20, K30, K21, K31, K22, K32, K23, K33, K24, K34, K25, K35, K26, K36, K27,	\
	K40,      K41, K51, K42, K52, K43, K53, K44, K54, K45, K55, K46, K56, K47,	\
	K60,      K61, K71, K62, K72, K63, K73, K64, K74, K65, K75, K66, K76, K67,	\
	K80,	  K81,		K82,	  K83,		K84,	  K85, 	    K86, K87, K77	\
) { \
	{ K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07	 }, \
	{ K10,   K11,   K12,   K13,   K14,   K15,   K16,   KC_NO }, \
	{ K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27	 }, \
	{ K30,   K31,   K32,   K33,   K34,   K35,   K36,   KC_NO }, \
	{ K40,   K41,   K42,   K43,   K44,   K45,   K46,   K47	 }, \
	{ KC_NO, K51,   K52,   K53,   K54,   K55,   K56,   KC_NO }, \
	{ K60,   K61,   K62,   K63,   K64,   K65,   K66,   K67	 }, \
	{ KC_NO, K71,   K72,   K73,   K74,   K75,   K76,   K77	 }, \
	{ K80,   K81,   K82,   K83,   K84,   K85,   K86,   K87	 }  \
}

/* ANSI
 * ,--------------------------------------------------------------.
 * | 00| 10| 01| 11| 02| 12| 03| 13| 04| 14| 05| 15| 06|  16  | 07|
 * |--------------------------------------------------------------|
 * | 20  | 30| 21| 31| 22| 32| 23| 33| 24| 34| 25| 35| 26| 36 | 27|
 * |--------------------------------------------------------------|
 * | 40   | 41| 51| 42| 52| 43| 53| 44| 54| 45| 55| 46|   56  | 47|
 * |--------------------------------------------------------------|
 * | 60     | 61| 71| 62| 72| 63| 73| 64| 74| 65| 75|  66 | 76| 67|
 * |--------------------------------------------------------------|
 * | 80 | 81 | 82 |           83           | 84 | 85 || 86| 87| 77|
 * `--------------------------------------------------------------'
 */
#define LAYOUT_67_rotary( \
	K00, K10, K01, K11, K02, K12, K03, K13, K04, K14, K05, K15, K06, K16, K07,	\
	K20, K30, K21, K31, K22, K32, K23, K33, K24, K34, K25, K35, K26, K36, K27,	\
	K40,      K41, K51, K42, K52, K43, K53, K44, K54, K45, K55, K46, K56, K47,	\
	K60,      K61, K71, K62, K72, K63, K73, K64, K74, K65, K75, K66, K76, K67,	\
	K80,	  K81,		K82,	  K83,		K84,	  K85, 	    K86, K87, K77,	\
	K17,	  K37 \
) { \
	{ K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07	 }, \
	{ K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17   }, \
	{ K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27	 }, \
	{ K30,   K31,   K32,   K33,   K34,   K35,   K36,   K37   }, \
	{ K40,   K41,   K42,   K43,   K44,   K45,   K46,   K47	 }, \
	{ KC_NO, K51,   K52,   K53,   K54,   K55,   K56,   KC_NO }, \
	{ K60,   K61,   K62,   K63,   K64,   K65,   K66,   K67	 }, \
	{ KC_NO, K71,   K72,   K73,   K74,   K75,   K76,   K77	 }, \
	{ K80,   K81,   K82,   K83,   K84,   K85,   K86,   K87	 }  \
}

#else


/* ANSI
 * ,--------------------------------------------------------------.
 * | 00| 10| 01| 11| 02| 12| 03| 13| 04| 14| 05| 15| 06|  16  | 07|
 * |--------------------------------------------------------------|
 * | 20  | 30| 21| 31| 22| 32| 23| 33| 24| 34| 25| 35| 26| 36 | 27|
 * |--------------------------------------------------------------|
 * | 40   | 41| 51| 42| 52| 43| 53| 44| 54| 45| 55| 46|   56  | 47|
 * |--------------------------------------------------------------|
 * | 60     | 61| 71| 62| 72| 63| 73| 64| 74| 65| 75|  66 | 76| 67|
 * |--------------------------------------------------------------|
 * | 80 | 81 | 82 |           83           | 84 | 85 || 87| 77| 57|
 * `--------------------------------------------------------------'
 */
#define LAYOUT_67_ansi( \
	K00, K10, K01, K11, K02, K12, K03, K13, K04, K14, K05, K15, K06, K16, K07,	\
	K20, K30, K21, K31, K22, K32, K23, K33, K24, K34, K25, K35, K26, K36, K27,	\
	K40,      K41, K51, K42, K52, K43, K53, K44, K54, K45, K55, K46, K56, K47,	\
	K60,      K61, K71, K62, K72, K63, K73, K64, K74, K65, K75, K66, K76, K67,	\
	K80,	  K81,		K82,	  K83,		K84,	  K85, 	    K87, K77, K57	\
) { \
	{ K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07	 }, \
	{ K10,   K11,   K12,   K13,   K14,   K15,   K16,   KC_NO }, \
	{ K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27	 }, \
	{ K30,   K31,   K32,   K33,   K34,   K35,   K36,   KC_NO }, \
	{ K40,   K41,   K42,   K43,   K44,   K45,   K46,   K47	 }, \
	{ KC_NO, K51,   K52,   K53,   K54,   K55,   K56,   K57   }, \
	{ K60,   K61,   K62,   K63,   K64,   K65,   K66,   K67	 }, \
	{ KC_NO, K71,   K72,   K73,   K74,   K75,   K76,   K77	 }, \
	{ K80,   K81,   K82,   K83,   K84,   K85,   KC_NO, K87	 }  \
}

/* ANSI
 * ,--------------------------------------------------------------.
 * | 00| 10| 01| 11| 02| 12| 03| 13| 04| 14| 05| 15| 06|  16  | 07|
 * |--------------------------------------------------------------|
 * | 20  | 30| 21| 31| 22| 32| 23| 33| 24| 34| 25| 35| 26| 36 | 27|
 * |--------------------------------------------------------------|
 * | 40   | 41| 51| 42| 52| 43| 53| 44| 54| 45| 55| 46|   56  | 47|
 * |--------------------------------------------------------------|
 * | 60     | 61| 71| 62| 72| 63| 73| 64| 74| 65| 75|  66 | 76| 67|
 * |--------------------------------------------------------------|
 * | 80 | 81 | 82 |           83           | 84 | 85 || 87| 77| 57|
 * `--------------------------------------------------------------'
 */
#define LAYOUT_67_rotary( \
	K00, K10, K01, K11, K02, K12, K03, K13, K04, K14, K05, K15, K06, K16, K07,	\
	K20, K30, K21, K31, K22, K32, K23, K33, K24, K34, K25, K35, K26, K36, K27,	\
	K40,      K41, K51, K42, K52, K43, K53, K44, K54, K45, K55, K46, K56, K47,	\
	K60,      K61, K71, K62, K72, K63, K73, K64, K74, K65, K75, K66, K76, K67,	\
	K80,	  K81,		K82,	  K83,		K84,	  K85, 	    K87, K77, K57,	\
	K17,	  K37 \
) { \
	{ K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07	 }, \
	{ K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17   }, \
	{ K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27	 }, \
	{ K30,   K31,   K32,   K33,   K34,   K35,   K36,   K37   }, \
	{ K40,   K41,   K42,   K43,   K44,   K45,   K46,   K47	 }, \
	{ KC_NO, K51,   K52,   K53,   K54,   K55,   K56,   K57   }, \
	{ K60,   K61,   K62,   K63,   K64,   K65,   K66,   K67	 }, \
	{ KC_NO, K71,   K72,   K73,   K74,   K75,   K76,   K77	 }, \
	{ K80,   K81,   K82,   K83,   K84,   K85,   KC_NO, K87	 }  \
}

#endif

