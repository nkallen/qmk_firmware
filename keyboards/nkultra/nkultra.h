#pragma once

 #include "quantum.h"

 #define LAYOUT( \
 	K00, K01, K02, K03, K04, K05, K06, \
 	K10, K11, K12, K13, K14, K15, \
 	K20, K21, K22, K23, K24, K25, \
 	K30, K31, K32, K33,\
 	K40, K41, K42 \
 ) \
 { \
 	{ K00, K01, K02, K03, K04, K05, K06 }, \
 	{ K10, K11, K12, K13, K14, K15 }, \
 	{ K20, K21, K22, K23, K24, K25 }, \
 	{ K30, K31, K32, K33 }, \
 	{ K40, K41, K42 } \
 }
