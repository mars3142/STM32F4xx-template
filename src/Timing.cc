#include "Timing.hh"
#include "stm32f4xx_hal.h"

Timing::Timing() = default;
void Timing::delay(uint32_t ms) { HAL_Delay(ms); }