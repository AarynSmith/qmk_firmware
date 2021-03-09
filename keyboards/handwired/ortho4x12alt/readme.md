# Ortho 4x12 Alt

A compact 40% (12x4) ortholinear keyboard inspired in the Planck made by Jack Humbert.
Default keymap is a minimal 12x4 setup with no extras.

Keyboard Maintainer: [AarynSmith](https://github.com/aarynsmith)  
Hardware Supported: Arduino Pro Micro  
Hardware Availability:

## Arduino Pro Micro Pinout

| Rows        | 0  | 1  | 2  | 3  |
|-------------|----|----|----|----|
| Arduino pin | 2  | 3  | 4  | 5  |
| QMK pin     | D1 | D0 | D4 | C6 |

| Columns     | 0  | 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  | 9  | 10 | 11 |
|-------------|----|----|----|----|----|----|----|----|----|----|----|----|
| Arduino pin | 6  | 7  | 8  | 9  | 10 | 16 | 14 | 15 | A0 | A1 | A2 | A3 |
| QMK pin     | D7 | E6 | B4 | B5 | B6 | B2 | B3 | B1 | F7 | F6 | F5 | F4 |

## Compiling the Firmware

Make example for this keyboard (after setting up your build environment):

    make handwired/ortho4x12:default

## The Default Keymap

To reset the keyboard press Lower+Raise+Q

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
