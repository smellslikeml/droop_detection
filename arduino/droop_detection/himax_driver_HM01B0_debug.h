
#ifndef TENSORFLOW_LITE_MICRO_DROOP_DETECTION_HIMAX_DRIVER_HM01B0_DEBUG_H_
#define TENSORFLOW_LITE_MICRO_DROOP_DETECTION_HIMAX_DRIVER_HM01B0_DEBUG_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "himax_driver_HM01B0.h"

//*****************************************************************************
//
//! @brief Read one frame of data from HM01B0 scaled to 96x96 RGB.
//!
//! @param buffer       - Pointer to the frame buffer.
//! @param w            - Image width.
//! @param h            - Image height.
//! @param channels     - Number of channels per pixel.
//!
//! This function reads data of one frame from HM01B0. It trims the image to an
//! even power of two multiple of the requested width and height.  It down
//! samples the original image and duplicates the greyscale value for each color
//! channel.
//!
//! @return Error code.
//
//*****************************************************************************

void hm01b0_framebuffer_dump(uint8_t* frame, uint32_t len);

#ifdef __cplusplus
}
#endif

#endif  // TENSORFLOW_LITE_MICRO_DROOP_DETECTION_HIMAX_DRIVER_HM01B0_DEBUG_H_
