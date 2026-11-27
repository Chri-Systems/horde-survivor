#pragma once
#include <raylib.h>
#include "global.h"

using namespace graphics;

class Player {
  float speed = 300;
  Vector2 position = { static_cast<float>(window_width) / 2, static_cast<float>(window_height) / 2 };

};
