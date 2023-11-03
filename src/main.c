#include <null0.h>

u32 logo;

int main() {
  trace("You created your first null0 game!");
  logo = load_image("assets/logo.png");
  return 0;
}

NULL0_EXPORT("update")
void update(u32 t) {
  clear(BLACK);
  draw_image(logo, 90, 45);
}