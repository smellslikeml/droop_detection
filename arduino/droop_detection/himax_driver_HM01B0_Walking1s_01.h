
#ifndef TENSORFLOW_LITE_MICRO_DROOP_DETECTION_HIMAX_DRIVER_HM01B0_WALKING1S_01_H_
#define TENSORFLOW_LITE_MICRO_DROOP_DETECTION_HIMAX_DRIVER_HM01B0_WALKING1S_01_H_

#include "himax_driver_HM01B0.h"

const hm_script_t sHM01b0TestModeScript_Walking1s[] = {
    {
        0x2100,
        0x00,
    },  // W 24 2100 00 2 1 ; AE
    {
        0x1000,
        0x00,
    },  // W 24 1000 00 2 1 ; BLC
    {
        0x1008,
        0x00,
    },  // W 24 1008 00 2 1 ; DPC
    {
        0x0205,
        0x00,
    },  // W 24 0205 00 2 1 ; AGain
    {
        0x020E,
        0x01,
    },  // W 24 020E 01 2 1 ; DGain
    {
        0x020F,
        0x00,
    },  // W 24 020F 00 2 1 ; DGain
    {
        0x0601,
        0x11,
    },  // W 24 0601 11 2 1 ; Test pattern
    {
        0x0104,
        0x01,
    },  // W 24 0104 01 2 1 ;
};

#endif  // TENSORFLOW_LITE_MICRO_DROOP_DETECTION_HIMAX_DRIVER_HM01B0_WALKING1S_01_H_
