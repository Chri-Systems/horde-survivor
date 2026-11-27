#include <raylib.h>
#include <raymath.h>

#include "global.h"

int main() {
  using namespace graphics;

  InitWindow(window_width, window_height, "Horde Survivor");

  Vector2 player_position = { static_cast<float>(window_width) / 2, static_cast<float>(window_height) / 2 };
  float player_speed = 300.0f;

  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    dt = GetFrameTime();
    Vector2 player_direction = {};
    if (IsKeyDown(KEY_D)) player_direction.x = 1;
    if (IsKeyDown(KEY_A)) player_direction.x = -1;
    if (IsKeyDown(KEY_S)) player_direction.y = 1;
    if (IsKeyDown(KEY_W)) player_direction.y = -1;
    if (player_direction.x != 0 || player_direction.y != 0) {
      player_position += Vector2Normalize(player_direction) * player_speed * dt;
    }

    if (player_position.x < 20) player_position.x = 20;
    if (player_position.x > window_width - 20) player_position.x = (window_width - 20);
    if (player_position.y < 20) player_position.y = 20;
    if (player_position.y > window_height - 20) player_position.y = (window_height - 20);

    BeginDrawing();
    ClearBackground({40, 40, 40, 255});
    DrawCircleV(player_position, 20.0f, BLUE);

    EndDrawing();
  }
  CloseWindow();
}
