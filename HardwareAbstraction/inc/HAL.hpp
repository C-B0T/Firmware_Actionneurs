/**
 * @file	HAL.hpp
 * @author	Kevin WYSOCKI
 * @date	8 nov. 2016
 * @brief	Hardware Abstraction Layer include file
 */

#ifndef INC_HAL_HPP_
#define INC_HAL_HPP_

/**
 * @namespace HAL
 * @brief Hardware Abstraction Layer
 *
 * This namespace contains objects used to abstract hardware dependencies (such as electronic platform)
 */

// STM32F4xx peripherals
#include "GPIO.hpp"
#include "PWM.hpp"
#include "Serial.hpp"
#include "Encoder.hpp"
#include "Timer.hpp"
#include "SPIMaster.hpp"
#include "ExtDAC.hpp"
#include "DRV8813.hpp"

// Other hardware objects


#endif /* INC_HAL_HPP_ */
