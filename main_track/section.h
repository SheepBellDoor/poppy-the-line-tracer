#ifndef __SECTION_H__
#define __SECTION_H__


#define SPEED 2000
#define LEFT_SPEED 2000
#define RIGHT_SPEED 2000
#define LOW_SPEED 1800
#define MAX_SPEED 4000
#define ROTATE_SPEED 3000

#include <stdio.h>
#include <stdint.h>
#include "motor.h"
#include "Clock.h"

void section1(uint16_t left_speed, uint16_t right_speed, uint16_t speed);
void section2(uint16_t left_speed, uint16_t right_speed, uint16_t speed);
void section3(uint16_t left_speed, uint16_t right_speed, uint16_t speed);
void section4(uint16_t left_speed, uint16_t right_speed, uint16_t speed);
void section5(uint16_t left_speed, uint16_t right_speed, uint16_t speed);
void section6(uint16_t left_speed, uint16_t right_speed, uint16_t speed);
void section7(uint16_t left_speed, uint16_t right_speed, uint16_t speed);
void section8(uint16_t left_speed, uint16_t right_speed, uint16_t speed);
void section9(uint16_t left_speed, uint16_t right_speed, uint16_t speed);
void section10(uint16_t left_speed, uint16_t right_speed, uint16_t speed);
void section11(uint16_t left_speed, uint16_t right_speed, uint16_t speed);
void section12(uint16_t left_speed, uint16_t right_speed, uint16_t speed);
void section13(uint16_t left_speed, uint16_t right_speed, uint16_t speed);
void section14(uint16_t left_speed, uint16_t right_speed, uint16_t speed);

void straight_turn_right (uint16_t left_speed, uint16_t right_speed, uint16_t speed);
void straight_turn_right_without_tracing(uint16_t left_speed, uint16_t right_speed, uint16_t speed);
void move_until_white(uint16_t left_speed, uint16_t right_speed, uint16_t speed);
void move_lap2(uint16_t left_speed, uint16_t right_speed, uint16_t speed);
void straight_no_turn(uint16_t left_speed, uint16_t right_speed, uint16_t speed);
void straight_turn_left(uint16_t left_speed, uint16_t right_speed, uint16_t speed);
void straight_turn_left_without_tracing(uint16_t left_speed, uint16_t right_speed, uint16_t speed);

#endif /* __SECTION_H__ */