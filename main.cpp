#include <raylib.h>
#include <raymath.h>

int main() {
  InitWindow(1080, 720, "test");
  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(BLUE);
    EndDrawing();
  }
  return 0;
}
