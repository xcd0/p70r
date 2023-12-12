// Copyright 2023 xcd0 (@xcd0)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define NOP KC_NO

#define LAYOUT( \
K00, K01, K02, K03, K04, K05, K06,               K50, K51, K52, K53, K54, K55, K56, \
K10, K11, K12, K13, K14, K15, K16,               K60, K61, K62, K63, K64, K65, K66, \
K20, K21, K22, K23, K24, K25, K26, K46,     K90, K70, K71, K72, K73, K74, K75, K76, \
K30, K31, K32, K33, K34, K35, K36, K45,     K91, K80, K81, K82, K83, K84, K85, K86, \
               K40, K41, K42, K43, K44,     K92, K93, K94, K95, K96, \
                         KA2,                         KB2,           \
                    KA0, KA3, KA1,               KB0, KB3, KB1       \
  ) \
  { \
    { K00, K01, K02, K03, K04, K05, K06 }, \
    { K10, K11, K12, K13, K14, K15, K16 }, \
    { K20, K21, K22, K23, K24, K25, K26 }, \
    { K30, K31, K32, K33, K34, K35, K36 }, \
    { K40, K41, K42, K43, K44, K45, K46 }, \
    { K50, K51, K52, K53, K54, K55, K56 }, \
    { K60, K61, K62, K63, K64, K65, K66 }, \
    { K70, K71, K72, K73, K74, K75, K76 }, \
    { K80, K81, K82, K83, K84, K85, K86 }, \
    { K90, K91, K92, K93, K94, K95, K96 }, \
    { KA0, KA1, KA2, KA3                }, \
    { KB0, KB1, KB2, KB3                }  \
  }

/*
    { KA0, KA1, KA2, KA3, NOP, NOP, NOP }, \
    { KB0, KB1, KB2, KB3, NOP, NOP, NOP }  \
*/
