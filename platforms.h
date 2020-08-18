#ifndef __INC_PLATFORMS_H
#define __INC_PLATFORMS_H

#include <FastLED/fastled_config.h>
#include <FastLED/FastLED.h>

#if defined(NRF51)
#include <FastLED/platforms/arm/nrf51/fastled_arm_nrf51.h>
#elif defined(NRF52_SERIES)
#include <FastLED/platforms/arm/nrf52/fastled_arm_nrf52.h>
#elif defined(__MK20DX128__) || defined(__MK20DX256__)
// Include k20/T3 headers
#include <FastLED/platforms/arm/k20/fastled_arm_k20.h>
#elif defined(__MK66FX1M0__) || defined(__MK64FX512__)
// Include k66/T3.6 headers
#include <FastLED/platforms/arm/k66/fastled_arm_k66.h>
#elif defined(__MKL26Z64__)
// Include kl26/T-LC headers
#include <FastLED/platforms/arm/kl26/fastled_arm_kl26.h>
#elif defined(__IMXRT1062__)
// teensy4
#include <FastLED/platforms/arm/mxrt1062/fastled_arm_mxrt1062.h>
#elif defined(__SAM3X8E__)
// Include sam/due headers
#include <FastLED/platforms/arm/sam/fastled_arm_sam.h>
#elif defined(STM32F10X_MD) || defined(__STM32F1__)
#include <FastLED/platforms/arm/stm32/fastled_arm_stm32.h>
#elif defined(__SAMD21G18A__) || defined(__SAMD21J18A__) || defined(__SAMD21E17A__) || defined(__SAMD21E18A__)
#include <FastLED/platforms/arm/d21/fastled_arm_d21.h>
#elif defined(__SAMD51G19A__) || defined(__SAMD51J19A__)
#include <FastLED/platforms/arm/d51/fastled_arm_d51.h>
#elif defined(ESP8266)
#include <FastLED/platforms/esp/8266/fastled_esp8266.h>
#elif defined(ESP32)
#include <FastLED/platforms/esp/32/fastled_esp32.h>
#elif defined(ARDUINO_ARCH_APOLLO3)
#include <FastLED/platforms/apollo3/fastled_apollo3.h>
#elif defined(TIVAWARE)
#include <FastLED/platforms/arm/tirtos/fastled_tirtos.h>
#else
// AVR platforms
#include <FastLED/platforms/avr/fastled_avr.h>
#endif

#endif
