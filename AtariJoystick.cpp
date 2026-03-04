// Atari standard joystick library (D-SUB 9 connector joysticks)
// Programmed by Arrtix_x (2026)

#include "AtariJoystick.h"

AtariJoystick::AtariJoystick(uint8_t up, uint8_t down, uint8_t left, uint8_t right, uint8_t fire) {
	_pinUp = up;
	_pinDown = down;
	_pinLeft = left;
	_pinRight = right;
	_pinFire = fire;
}

void AtariJoystick::begin() {
  pinMode(_pinUp, INPUT_PULLUP);
  pinMode(_pinDown, INPUT_PULLUP);
  pinMode(_pinLeft, INPUT_PULLUP);
  pinMode(_pinRight, INPUT_PULLUP);
  pinMode(_pinFire, INPUT_PULLUP);
}

bool AtariJoystick::isUp() const {
	return !digitalRead(_pinUp);
}

bool AtariJoystick::isDown() const {
	return !digitalRead(_pinDown);
}

bool AtariJoystick::isLeft() const {
	return !digitalRead(_pinLeft);
}

bool AtariJoystick::isRight() const {
	return !digitalRead(_pinRight);
}

bool AtariJoystick::isFire() const {
	return !digitalRead(_pinFire);
}
