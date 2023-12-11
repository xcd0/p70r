// Copyright 2023 xcd0 (@xcd0)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define NOP KC_NO

#define LAYOUT( \
K00, K01, K02, K03, K04, K05, K06,             K50, K51, K52, K53, K54, K55, K56, \
K10, K11, K12, K13, K14, K15, K16,             K60, K61, K62, K63, K64, K65, K66, \
K20, K21, K22, K23, K24, K25, K26, ENC1, ENC3, K70, K71, K72, K73, K74, K75, K76, \
K30, K31, K32, K33, K34, K35, K36, ENC2, ENC4, K80, K81, K82, K83, K84, K85, K86, \
          K42, K43, K44, K45, K46,             K90, K91, K92, K93, K94, \
                      ENC1U,               ENC3U,       \
               ENC2U, ENC1D, ENC2D, ENC4U, ENC3D, ENC4D \
  ) \
  { \
    { K00,  K01,  K02, K03, K04, K05, K06 }, \
    { K10,  K11,  K12, K13, K14, K15, K16 }, \
    { K20,  K21,  K22, K23, K24, K25, K26 }, \
    { K30,  K31,  K32, K33, K34, K35, K36 }, \
    {             K42, K43, K44, K45, K46, ENC2, ENC1 }, \
    { ENC1U, ENC1D, ENC2U, ENC2D, NOP, NOP }, \
    { K56, K55, K54, K53, K52, K51, K50 }, \
    { K66, K65, K64, K63, K62, K61, K60 }, \
    { K76, K75, K74, K73, K72, K71, K70 }, \
    { K86, K85, K84, K83, K82, K81, K80 }, \
    {           K94, K93, K92, K91, K90, ENC4, ENC3 },  \
    { ENC3U, ENC3D, ENC4U, ENC4D, NOP, NOP } \
  }
