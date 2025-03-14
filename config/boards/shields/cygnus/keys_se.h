/*
 * Copyright (c) 2023 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <dt-bindings/zmk/keys.h>

// Swedish keyboard layout definitions
// Based on keymap_swedish_mac_iso.h from QMK

// clang-format off

// Swedish Mac letters
#define SE_A       A                   // A
#define SE_B       B                   // B
#define SE_C       C                   // C
#define SE_D       D                   // D
#define SE_E       E                   // E
#define SE_F       F                   // F
#define SE_G       G                   // G
#define SE_H       H                   // H
#define SE_I       I                   // I
#define SE_J       J                   // J
#define SE_K       K                   // K
#define SE_L       L                   // L
#define SE_M       M                   // M
#define SE_N       N                   // N
#define SE_O       O                   // O
#define SE_P       P                   // P
#define SE_Q       Q                   // Q
#define SE_R       R                   // R
#define SE_S       S                   // S
#define SE_T       T                   // T
#define SE_U       U                   // U
#define SE_V       V                   // V
#define SE_W       W                   // W
#define SE_X       X                   // X
#define SE_Y       Y                   // Y
#define SE_Z       Z                   // Z

// Swedish numbers - same as US
#define SE_1       N1                  // 1
#define SE_2       N2                  // 2
#define SE_3       N3                  // 3
#define SE_4       N4                  // 4
#define SE_5       N5                  // 5
#define SE_6       N6                  // 6
#define SE_7       N7                  // 7
#define SE_8       N8                  // 8
#define SE_9       N9                  // 9
#define SE_0       N0                  // 0

// Swedish special characters
#define SE_ADIA    SEMI                // Ä
#define SE_ARNG    LBRC                // Å
#define SE_ODIA    APOS                // Ö
#define SE_PLUS    RBRC                // +
#define SE_MINS    SLASH               // -
#define SE_QUOT    NUBS                // '
#define SE_LABK    GRAVE               // <
#define SE_RABK    LS(GRAVE)           // >
#define SE_EQL     LS(N0)              // =
#define SE_QUES    LS(MINUS)           // ?
#define SE_GRAV    LS(EQUAL)           // `
#define SE_CIRC    RBRC                // ^ (Dead)
#define SE_DQUO    LS(N2)              // "
#define SE_LCBR    LS(N8)              // {
#define SE_LBRC    LS(N7)              // [
#define SE_RBRC    LS(N0)              // ]
#define SE_RCBR    LS(N9)              // }
#define SE_BSLS    LS(MINUS)           // (backslash)
#define SE_LPRN    LS(N8)              // (
#define SE_RPRN    LS(N9)              // )
#define SE_SLSH    LS(N7)              // /
#define SE_PIPE    NON_US_BACKSLASH    // |
#define SE_TILD    LS(RBRC)            // ~ (Dead)
#define SE_AT      LS(N2)              // @
#define SE_DLR     LS(N4)              // $
#define SE_AMPR    LS(N6)              // &
#define SE_SCLN    LS(COMMA)           // ;
#define SE_COLN    LS(DOT)             // :
#define SE_ASTR    LS(BSLH)            // *
#define SE_EXLM    LS(N1)              // !
#define SE_PERC    LS(N5)              // %
#define SE_HASH    LS(N3)              // #
#define SE_UNDS    LS(FSLH)            // _ 