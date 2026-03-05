# AtariJoystick Library
This is a simple library for working with Atari joysticks.

This library is intended to be used on the AVR and SAM platforms.

Please note that this library is only compatible with digital (no analog) joysticks, so paddle controllers aren't compatible (for now).

## Joystick pinout:
(D-SUB 9 female connector front view)

    \1 2 3 4 5/
     \6 7 8 9/
	
> 1 - Up
> 
> 2 - Down
> 
> 3 - Left
> 
> 4 - Right
> 
> 5 - Paddle B (analog, unused)
> 
> 6 - Trigger (Fire)
> 
> 7 - VCC (usually +5V or +3.3V)
> 
> 8 - GND
> 
> 9 - Paddle A (analog, unused)
