// Atari standard joystick library (D-SUB 9 connector joysticks)
// Programmed by Arrtix_x (2026)

// PINOUT
// D-SUB 9 female connector front view
/*
    \1 2 3 4 5/
     \6 7 8 9/
	
1 - Up
2 - Down
3 - Left
4 - Right
5 - Paddle B (analog, unused)
6 - Trigger (Fire)
7 - VCC (usually +5V or +3.3V)
8 - GND
9 - Paddle A (analog, unused)
*/

#ifndef ATARIJOYSTICK_H_
#define ATARIJOYSTICK_H_

#include <Arduino.h>

/// @brief Library for Atari standard D-SUB 9 digital joysticks.
class AtariJoystick {
  public:
	/// @brief Creates a new AtariJoystick instance.
	/// @param up A digital pin for the UP signal
	/// @param down A digital pin for the DOWN signal
	/// @param left A digital pin for the LEFT signal
	/// @param right A digital pin for the RIGHT signal
	/// @param fire A digital pin for the FIRE (TRIGGER) signal
    AtariJoystick(uint8_t up, uint8_t down, uint8_t left, uint8_t right, uint8_t fire);
	
	/// @brief Initializes pin modes (must be called in setup()).
    void begin();
	
	/// @brief Returns whether the joystick's UP signal is active
    bool isUp() const;
	
	/// @brief Returns whether the joystick's DOWN signal is active
    bool isDown() const;
	
	/// @brief Returns whether the joystick's LEFT signal is active
    bool isLeft() const;
	
	/// @brief Returns whether the joystick's RIGHT signal is active
    bool isRight() const;
	
	/// @brief Returns whether the joystick's FIRE (TRIGGER) signal is active
    bool isFire() const;
  
  private:
    uint8_t _pinUp;
    uint8_t _pinDown;
    uint8_t _pinLeft;
    uint8_t _pinRight;
    uint8_t _pinFire;
};

#endif
