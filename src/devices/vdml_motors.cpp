/**
 * \file motors.cpp
 *
 * \brief Motors C++ wrapper.
 *
 * \copyright (c) 2017, Purdue University ACM SIGBots.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */
#include "kapi.h"
#include "pros/motors.hpp"

namespace pros {
Motor::Motor(uint8_t port, const bool reverse, motor_encoder_units_e_t encoder_units, motor_gearset_e_t gearset)
    : _port(port) {
	set_reverse(reverse);
	set_encoder_units(encoder_units);
	set_gearing(gearset);
}

double Motor::get_actual_velocity(void) const {
	return motor_get_actual_velocity(_port);
}

motor_brake_mode_e_t Motor::get_brake_mode(void) const {
	return motor_get_brake_mode(_port);
}

int32_t Motor::get_current(void) const {
	return motor_get_current(_port);
}

int32_t Motor::get_current_limit(void) const {
	return motor_get_current_limit(_port);
}

int32_t Motor::get_current_limit_flag(void) const {
	return motor_get_current_limit_flag(_port);
}

int32_t Motor::get_direction(void) const {
	return motor_get_direction(_port);
}

double Motor::get_efficiency(void) const {
	return motor_get_efficiency(_port);
}

motor_encoder_units_e_t Motor::get_encoder_units(void) const {
	return motor_get_encoder_units(_port);
}

uint32_t Motor::get_faults(void) const {
	return motor_get_faults(_port);
}

uint32_t Motor::get_flags(void) const {
	return motor_get_flags(_port);
}

motor_gearset_e_t Motor::get_gearing(void) const {
	return motor_get_gearing(_port);
}

int32_t Motor::get_raw_position(uint32_t* const timestamp) const {
	return motor_get_raw_position(_port, timestamp);
}

int32_t Motor::get_temp_limit_flag(void) const {
	return motor_get_temp_limit_flag(_port);
}

double Motor::get_position(void) const {
	return motor_get_position(_port);
}

double Motor::get_power(void) const {
	return motor_get_power(_port);
}

int32_t Motor::get_reverse(void) const {
	return motor_get_reverse(_port);
}

double Motor::get_temperature(void) const {
	return motor_get_temperature(_port);
}

double Motor::get_target(void) const {
	return motor_get_target(_port);
}

double Motor::get_torque(void) const {
	return motor_get_torque(_port);
}

int32_t Motor::get_velocity(void) const {
	return motor_get_velocity(_port);
}

double Motor::get_voltage(void) const {
	return motor_get_voltage(_port);
}

int32_t Motor::get_voltage_limit(void) const {
	return motor_get_voltage_limit(_port);
}

int32_t Motor::get_zero_velocity_flag(void) const {
	return motor_get_zero_velocity_flag(_port);
}

int32_t Motor::get_zero_position_flag(void) const {
	return motor_get_zero_position_flag(_port);
}

int32_t Motor::reset_position(void) const {
	return motor_reset_position(_port);
}

int32_t Motor::set_absolute_target(const double position, const int32_t velocity) const {
	return motor_set_absolute_target(_port, position, velocity);
}

int32_t Motor::set_brake_mode(const motor_brake_mode_e_t mode) const {
	return motor_set_brake_mode(_port, mode);
}

int32_t Motor::set_current_limit(const int32_t limit) const {
	return motor_set_current_limit(_port, limit);
}

int32_t Motor::set_encoder_units(const motor_encoder_units_e_t units) const {
	return motor_set_encoder_units(_port, units);
}

int32_t Motor::set_gearing(const motor_gearset_e_t gearset) const {
	return motor_set_gearing(_port, gearset);
}

int32_t Motor::set_position(const double position) const {
	return motor_set_position(_port, position);
}

int32_t Motor::set_relative_target(const double position, const int32_t velocity) const {
	return motor_set_relative_target(_port, position, velocity);
}

int32_t Motor::set_reverse(const bool reverse) const {
	return motor_set_reverse(_port, reverse);
}

int32_t Motor::set_velocity(const int16_t velocity) const {
	return motor_set_velocity(_port, velocity);
}

int32_t Motor::set_voltage(const int16_t voltage) const {
	return motor_set_voltage(_port, voltage);
}

int32_t Motor::set_voltage_limit(const int32_t limit) const {
	return motor_set_voltage_limit(_port, limit);
}
}
