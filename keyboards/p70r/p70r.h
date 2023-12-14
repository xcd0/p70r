// Copyright 2023 xcd0 (@xcd0)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define NOP KC_NO
#define NOOP KC_NO

#define ___ KC_UNDS

#define LAYOUT( \
K000, K001, K002, K003, K004, K005, K006,                 K060, K061, K062, K063, K064, K065, K066, \
K010, K011, K012, K013, K014, K015, K016,                 K070, K071, K072, K073, K074, K075, K076, \
K020, K021, K022, K023, K024, K025, K026, K046,     K100, K080, K081, K082, K083, K084, K085, K086, \
K030, K031, K032, K033, K034, K035, K036, K045,     K101, K090, K091, K092, K093, K094, K095, K096, \
                  K040, K041, K042, K043, K044,     K102, K103, K104, K105, K106, \
                          KA02,                           KB02,            \
                    KA00, KA03, KA01,               KB00, KB03, KB01       \
  ) \
  { \
    { K000, K001, K002, K003, K004, K005, K006 }, \
    { K010, K011, K012, K013, K014, K015, K016 }, \
    { K020, K021, K022, K023, K024, K025, K026 }, \
    { K030, K031, K032, K033, K034, K035, K036 }, \
    { K040, K041, K042, K043, K044, K045, K046 }, \
    { KA00, KA01, KA02, KA03, NOOP, NOOP, NOOP }, \
    { K066, K065, K064, K063, K062, K061, K060 }, \
    { K076, K075, K074, K073, K072, K071, K070 }, \
    { K086, K085, K084, K083, K082, K081, K080 }, \
    { K096, K095, K094, K093, K092, K091, K090 }, \
    { K106, K105, K104, K103, K102, K101, K100 }, \
    { KB00, KB01, KB02, KB03, NOOP, NOOP, NOOP }  \
  }


