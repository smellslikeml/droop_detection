
#if defined(ARDUINO) && !defined(ARDUINO_SFE_EDGE)
#define ARDUINO_EXCLUDE_CODE
#endif  // defined(ARDUINO) && !defined(ARDUINO_SFE_EDGE)

#ifndef ARDUINO_EXCLUDE_CODE

#include "himax_driver_HM01B0_debug.h"

#include "am_util.h"

void hm01b0_framebuffer_dump(uint8_t* frame, uint32_t length) {
  am_util_stdio_printf("+++ frame +++");

  for (uint32_t i = 0; i < length; i++) {
    if ((i & 0xF) == 0x00) {
      am_util_stdio_printf("\n0x%08LX ", i);
      // this delay is to let itm have time to flush out data.
      am_util_delay_ms(1);
    }

    am_util_stdio_printf("%02X ", frame[i]);
  }

  am_util_stdio_printf("\n--- frame ---\n");
  am_util_delay_ms(1);
}

#endif  // ARDUINO_EXCLUDE_CODE
