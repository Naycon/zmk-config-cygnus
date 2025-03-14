# ZMK Config for Cygnus Keyboard

This repository contains the ZMK firmware configuration for the [Cygnus](https://github.com/juhakaup/keyboards/tree/main/Cygnus%20v1.0) split keyboard with a 3x6 layout. 

## Features

- Swedish keyboard layout support
- 6 layers (base, brackets, quotes, symbols, arrows, numbers)
- Home row mods for comfortable modifier use
- Optimized for macOS

## Hardware 

This configuration is designed for:
- nice!nano v2 controllers
- Cygnus 3x6 wireless split keyboard (36 keys total)

## Building

The firmware can be built using GitHub Actions by pushing to this repository.

For local builds:
1. Install ZMK according to the [official documentation](https://zmk.dev/docs/development/setup)
2. Clone this repository
3. Run `west build -b nice_nano_v2 -- -DSHIELD=cygnus_left` for the left half
4. Run `west build -b nice_nano_v2 -- -DSHIELD=cygnus_right` for the right half

## Flashing

To flash your nice!nano controllers:
1. Connect the controller via USB
2. Double-tap the reset button to enter bootloader mode
3. The controller will appear as a USB drive
4. Copy the `zmk.uf2` file (from `build/zephyr/zmk.uf2`) to the drive
5. The controller will automatically reboot with the new firmware

## Keyboard Layout

The keyboard uses a 6-layer setup:
- Base layer (QWERTY with Swedish layout)
- Brackets layer (brackets and parentheses)
- Quotes layer (quotes and special characters)
- Symbols layer (various symbols)
- Arrows layer (navigation)
- Numbers layer (numpad and media controls)

## Credits

This configuration is based on the QMK keymap originally created for the Corne keyboard, adapted for ZMK firmware and the Cygnus keyboard. 