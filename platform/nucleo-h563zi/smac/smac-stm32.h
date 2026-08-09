#ifndef _SMAC_STM32_H_
#define _SMAC_STM32_H_

/// Include the STM32 HAL header for specific STM32 series here.
#include <stm32h5xx_hal.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/// @brief The number of STM32 peripheral instances available.
/// @note This value should be updated according to the actual number of STM32 peripheral instances
/// available on the target platform.
#define SMAC_STM32_PERIPH_NUM (10)

/// @brief The number of STM32 peripheral instances that want to support events/interrupts.
/// @details This value represents the number of STM32 peripheral instances that are capable of
/// generating events or interrupts and need to be managed accordingly.
/// @note This value should be updated according to the actual number of STM32 peripheral instances
/// that need event/interrupt support on the target platform.
/// @note This value should be less than @ref SMAC_STM32_PERIPH_NUM.
#define SMAC_STM32_EVENTABLE_PERIPH_NUM (10)

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // _SMAC_STM32_H_
