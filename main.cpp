#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

constexpr std::int8_t FIELD_WIDTH  = 12;
constexpr std::int8_t FIELD_HEIGHT = 22;

constexpr std::int8_t MINO_WIDTH  = 4;
constexpr std::int8_t MINO_HEIGHT = 4;

enum {
    MINO_TYPE_I,
    MINO_TYPE_O,
    MINO_TYPE_S,
    MINO_TYPE_Z,
    MINO_TYPE_J,
    MINO_TYPE_L,
    MINO_TYPE_T,
    MINO_TYPE_MAX,
};

enum {
    MINO_ANGLE_0,
    MINO_ANGLE_90,
    MINO_ANGLE_180,
    MINO_ANGLE_270,
    MINO_ANGLE_360,
};

std::int8_t field[FIELD_HEIGHT][FIELD_WIDTH] = { 0 };

std::int8_t displayBuffer[FIELD_HEIGHT][FIELD_WIDTH] = { 0 };