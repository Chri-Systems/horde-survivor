#include <raylib.h>

int main() {
  const int screenWidth = 800;
  const int screenHeight = 450;
  InitWindow(screenWidth, screenHeight, "Horde Survivor, primo test");

  Vector2 playerPosition = { (float)screenWidth / 2.0f, (float)screenHeight / 2.0f };
  float playerSpeed = 4.0f;

  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    if (IsKeyDown(KEY_D)) playerPosition.x += playerSpeed;
    if (IsKeyDown(KEY_A)) playerPosition.x -= playerSpeed;
    if (IsKeyDown(KEY_S)) playerPosition.y += playerSpeed;
    if (IsKeyDown(KEY_W)) playerPosition.y -= playerSpeed;

    if (playerPosition.x < 20) playerPosition.x = 20;
    if (playerPosition.x > screenWidth - 20) playerPosition.x = (float)(screenWidth - 20);
    if (playerPosition.y < 20) playerPosition.y = 20;
    if (playerPosition.y > screenHeight - 20) playerPosition.y = (float)(screenHeight - 20);

    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawCircleV(playerPosition, 20.0f, BLUE);

    EndDrawing();
  }
  CloseWindow();
}