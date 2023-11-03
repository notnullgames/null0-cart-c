// This is the C cart-header for null0

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

#define NULL0_EXPORT(n) __attribute__((export_name(n)))
#define NULL0_IMPORT(n) __attribute__((import_module("null0"), import_name(n)))

typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef float f32;

NULL0_EXPORT("malloc")
void* _null0_malloc(size_t size) {
  return malloc(size);
}

NULL0_EXPORT("alloca")
void* _null0_alloca(size_t size) {
  return __builtin_alloca(size);
}

NULL0_EXPORT("free")
void _null0_free(void* ptr) {
  free(ptr);
}

#define RGBA(r, g, b, a) (u32)(a << 24 | b << 16 | g << 8 | r)

#define LIGHTGRAY RGBA(200, 200, 200, 255)
#define GRAY RGBA(130, 130, 130, 255)
#define DARKGRAY RGBA(80, 80, 80, 255)
#define YELLOW RGBA(253, 249, 0, 255)
#define GOLD RGBA(255, 203, 0, 255)
#define ORANGE RGBA(255, 161, 0, 255)
#define PINK RGBA(255, 109, 194, 255)
#define RED RGBA(230, 41, 55, 255)
#define MAROON RGBA(190, 33, 55, 255)
#define GREEN RGBA(0, 228, 48, 255)
#define LIME RGBA(0, 158, 47, 255)
#define DARKGREEN RGBA(0, 117, 44, 255)
#define SKYBLUE RGBA(102, 191, 255, 255)
#define BLUE RGBA(0, 121, 241, 255)
#define DARKBLUE RGBA(0, 82, 172, 255)
#define PURPLE RGBA(200, 122, 255, 255)
#define VIOLET RGBA(135, 60, 190, 255)
#define DARKPURPLE RGBA(112, 31, 126, 255)
#define BEIGE RGBA(211, 176, 131, 255)
#define BROWN RGBA(127, 106, 79, 255)
#define DARKBROWN RGBA(76, 63, 47, 255)
#define WHITE RGBA(255, 255, 255, 255)
#define BLACK RGBA(0, 0, 0, 255)
#define BLANK RGBA(0, 0, 0, 0)
#define MAGENTA RGBA(255, 0, 255, 255)
#define RAYWHITE RGBA(245, 245, 245, 255)

typedef enum Filter {
  FILTER_NEARESTNEIGHBOR = 0,
  FILTER_BILINEAR,
  FILTER_SMOOTH
} Filter;

typedef enum Key {
  KEY_INVALID = 0,
  KEY_FIRST = 32,
  KEY_SPACE = 32,
  KEY_APOSTROPHE = 39,
  KEY_COMMA = 44,
  KEY_MINUS = 45,
  KEY_PERIOD = 46,
  KEY_SLASH = 47,
  KEY_0 = 48,
  KEY_1 = 49,
  KEY_2 = 50,
  KEY_3 = 51,
  KEY_4 = 52,
  KEY_5 = 53,
  KEY_6 = 54,
  KEY_7 = 55,
  KEY_8 = 56,
  KEY_9 = 57,
  KEY_SEMICOLON = 59,
  KEY_EQUAL = 61,
  KEY_A = 65,
  KEY_B = 66,
  KEY_C = 67,
  KEY_D = 68,
  KEY_E = 69,
  KEY_F = 70,
  KEY_G = 71,
  KEY_H = 72,
  KEY_I = 73,
  KEY_J = 74,
  KEY_K = 75,
  KEY_L = 76,
  KEY_M = 77,
  KEY_N = 78,
  KEY_O = 79,
  KEY_P = 80,
  KEY_Q = 81,
  KEY_R = 82,
  KEY_S = 83,
  KEY_T = 84,
  KEY_U = 85,
  KEY_V = 86,
  KEY_W = 87,
  KEY_X = 88,
  KEY_Y = 89,
  KEY_Z = 90,
  KEY_LEFT_BRACKET = 91,
  KEY_BACKSLASH = 92,
  KEY_RIGHT_BRACKET = 93,
  KEY_GRAVE_ACCENT = 96,
  KEY_WORLD_1 = 161,
  KEY_WORLD_2 = 162,
  KEY_ESCAPE = 256,
  KEY_ENTER = 257,
  KEY_TAB = 258,
  KEY_BACKSPACE = 259,
  KEY_INSERT = 260,
  KEY_DELETE = 261,
  KEY_RIGHT = 262,
  KEY_LEFT = 263,
  KEY_DOWN = 264,
  KEY_UP = 265,
  KEY_PAGE_UP = 266,
  KEY_PAGE_DOWN = 267,
  KEY_HOME = 268,
  KEY_END = 269,
  KEY_CAPS_LOCK = 280,
  KEY_SCROLL_LOCK = 281,
  KEY_NUM_LOCK = 282,
  KEY_PRINT_SCREEN = 283,
  KEY_PAUSE = 284,
  KEY_F1 = 290,
  KEY_F2 = 291,
  KEY_F3 = 292,
  KEY_F4 = 293,
  KEY_F5 = 294,
  KEY_F6 = 295,
  KEY_F7 = 296,
  KEY_F8 = 297,
  KEY_F9 = 298,
  KEY_F10 = 299,
  KEY_F11 = 300,
  KEY_F12 = 301,
  KEY_F13 = 302,
  KEY_F14 = 303,
  KEY_F15 = 304,
  KEY_F16 = 305,
  KEY_F17 = 306,
  KEY_F18 = 307,
  KEY_F19 = 308,
  KEY_F20 = 309,
  KEY_F21 = 310,
  KEY_F22 = 311,
  KEY_F23 = 312,
  KEY_F24 = 313,
  KEY_F25 = 314,
  KEY_KP_0 = 320,
  KEY_KP_1 = 321,
  KEY_KP_2 = 322,
  KEY_KP_3 = 323,
  KEY_KP_4 = 324,
  KEY_KP_5 = 325,
  KEY_KP_6 = 326,
  KEY_KP_7 = 327,
  KEY_KP_8 = 328,
  KEY_KP_9 = 329,
  KEY_KP_DECIMAL = 330,
  KEY_KP_DIVIDE = 331,
  KEY_KP_MULTIPLY = 332,
  KEY_KP_SUBTRACT = 333,
  KEY_KP_ADD = 334,
  KEY_KP_ENTER = 335,
  KEY_KP_EQUAL = 336,
  KEY_LEFT_SHIFT = 340,
  KEY_LEFT_CONTROL = 341,
  KEY_LEFT_ALT = 342,
  KEY_LEFT_SUPER = 343,
  KEY_RIGHT_SHIFT = 344,
  KEY_RIGHT_CONTROL = 345,
  KEY_RIGHT_ALT = 346,
  KEY_RIGHT_SUPER = 347,
  KEY_MENU = 348,
  KEY_LAST
} Key;

typedef enum GamepadButton {
  GAMEPAD_BUTTON_UNKNOWN = 0,  // Unknown button, just for error checking
  GAMEPAD_BUTTON_FIRST = 1,
  GAMEPAD_BUTTON_UP = 1,          // Gamepad left DPAD up button
  GAMEPAD_BUTTON_RIGHT,           // Gamepad left DPAD right button
  GAMEPAD_BUTTON_DOWN,            // Gamepad left DPAD down button
  GAMEPAD_BUTTON_LEFT,            // Gamepad left DPAD left button
  GAMEPAD_BUTTON_Y,               // Gamepad right button up (i.e. PS3: Triangle, Xbox: Y)
  GAMEPAD_BUTTON_B,               // Gamepad right button right (i.e. PS3: Square, Xbox: X)
  GAMEPAD_BUTTON_A,               // Gamepad right button down (i.e. PS3: Cross, Xbox: A)
  GAMEPAD_BUTTON_X,               // Gamepad right button left (i.e. PS3: Circle, Xbox: B)
  GAMEPAD_BUTTON_LEFT_SHOULDER,   // Gamepad top/back trigger left (first), it could be a trailing button
  GAMEPAD_BUTTON_LEFT_TRIGGER,    // Gamepad top/back trigger left (second), it could be a trailing button
  GAMEPAD_BUTTON_RIGHT_SHOULDER,  // Gamepad top/back trigger right (one), it could be a trailing button
  GAMEPAD_BUTTON_RIGHT_TRIGGER,   // Gamepad top/back trigger right (second), it could be a trailing button
  GAMEPAD_BUTTON_SELECT,          // Gamepad center buttons, left one (i.e. PS3: Select)
  GAMEPAD_BUTTON_MENU,            // Gamepad center buttons, middle one (i.e. PS3: PS, Xbox: XBOX)
  GAMEPAD_BUTTON_START,           // Gamepad center buttons, right one (i.e. PS3: Start)
  GAMEPAD_BUTTON_LEFT_THUMB,      // Gamepad joystick pressed button left
  GAMEPAD_BUTTON_RIGHT_THUMB,     // Gamepad joystick pressed button right
  GAMEPAD_BUTTON_LAST
} GamepadButton;

typedef enum MouseButton {
  MOUSE_BUTTON_UNKNOWN = 0,
  MOUSE_BUTTON_FIRST = 1,
  MOUSE_BUTTON_LEFT = 1,
  MOUSE_BUTTON_RIGHT = 2,
  MOUSE_BUTTON_MIDDLE = 3,
  MOUSE_BUTTON_LAST
} MouseButton;

typedef struct ImageDimensions {
  u16 width;
  u16 height;
} ImageDimensions;

typedef struct Vector {
  i32 x;
  i32 y;
} Vector;

typedef struct Rectangle {
  i32 x;
  i32 y;
  i32 width;
  i32 height;
} Rectangle;

#define WIDTH 320
#define HEIGHT 240

NULL0_IMPORT("trace")
void trace(char* str);

NULL0_IMPORT("new_image")
u32 new_image(i32 width, i32 height, u32 color);

NULL0_IMPORT("image_copy")
u32 image_copy(u32 image);

NULL0_IMPORT("image_subimage")
u32 image_subimage(u32 image, i32 x, i32 y, i32 width, i32 height);

NULL0_IMPORT("clear")
void clear(u32 color);

NULL0_IMPORT("clear_image")
void clear_image(u32 image, u32 color);

NULL0_IMPORT("draw_point")
void draw_point(i32 x, i32 y, u32 color);

NULL0_IMPORT("draw_line")
void draw_line(i32 startPosX, i32 startPosY, i32 endPosX, i32 endPosY, u32 color);

NULL0_IMPORT("draw_rectangle_outline")
void draw_rectangle_outline(i32 posX, i32 posY, i32 width, i32 height, i32 thickness, u32 color);

NULL0_IMPORT("draw_rectangle")
void draw_rectangle(i32 posX, i32 posY, i32 width, i32 height, u32 color);

NULL0_IMPORT("draw_triangle_outline")
void draw_triangle_outline(i32 x1, i32 y1, i32 x2, i32 y2, i32 x3, i32 y3, u32 color);

NULL0_IMPORT("draw_triangle")
void draw_triangle(i32 x1, i32 y1, i32 x2, i32 y2, i32 x3, i32 y3, u32 color);

NULL0_IMPORT("draw_ellipse_outline")
void draw_ellipse_outline(i32 centerX, i32 centerY, i32 radiusX, i32 radiusY, u32 color);

NULL0_IMPORT("draw_ellipse")
void draw_ellipse(i32 centerX, i32 centerY, i32 radiusX, i32 radiusY, u32 color);

NULL0_IMPORT("draw_circle_outline")
void draw_circle_outline(i32 centerX, i32 centerY, i32 radius, u32 color);

NULL0_IMPORT("draw_circle")
void draw_circle(i32 centerX, i32 centerY, i32 radius, u32 color);

NULL0_IMPORT("draw_polygon_outline")
void draw_polygon_outline(Vector* points, i32 numPoints, u32 color);

NULL0_IMPORT("draw_polygon")
void draw_polygon(Vector* points, i32 numPoints, u32 color);

NULL0_IMPORT("draw_polyline")
void draw_polyline(Vector* points, i32 numPoints, u32 color);

NULL0_IMPORT("draw_arc_outline")
void draw_arc_outline(i32 centerX, i32 centerY, f32 radius, f32 startAngle, f32 endAngle, i32 segments, u32 color);

NULL0_IMPORT("draw_arc")
void draw_arc(i32 centerX, i32 centerY, f32 radius, f32 startAngle, f32 endAngle, i32 segments, u32 color);

NULL0_IMPORT("draw_rectangle_rounded_outline")
void draw_rectangle_rounded_outline(i32 x, i32 y, i32 width, i32 height, i32 topLeftRadius, i32 topRightRadius, i32 bottomLeftRadius, i32 bottomRightRadius, u32 color);

NULL0_IMPORT("draw_rectangle_rounded")
void draw_rectangle_rounded(i32 x, i32 y, i32 width, i32 height, i32 cornerRadius, u32 color);

NULL0_IMPORT("draw_image")
void draw_image(u32 src, i32 posX, i32 posY);

NULL0_IMPORT("draw_image_tint")
void draw_image_tint(u32 src, i32 posX, i32 posY, u32 tint);

NULL0_IMPORT("draw_image_rotated")
void draw_image_rotated(u32 src, i32 posX, i32 posY, f32 degrees, f32 offsetX, f32 offsetY, Filter filter);

NULL0_IMPORT("draw_image_flipped")
void draw_image_flipped(u32 src, i32 posX, i32 posY, bool flipHorizontal, bool flipVertical);

NULL0_IMPORT("draw_image_scaled")
void draw_image_scaled(u32 src, i32 posX, i32 posY, f32 scaleX, f32 scaleY, f32 offsetX, f32 offsetY, Filter filter);

NULL0_IMPORT("draw_text")
void draw_text(u32 font, const char* text, i32 posX, i32 posY, u32 color);

NULL0_IMPORT("save_file")
bool save_file(const char* fileName, const void* data, unsigned int bytesToWrite);

NULL0_IMPORT("save_image")
bool save_image(u32 image, const char* fileName);

NULL0_IMPORT("load_image")
u32 load_image(const char* fileName);

NULL0_IMPORT("image_resize")
bool image_resize(u32 image, i32 newWidth, i32 newHeight, i32 offsetX, i32 offsetY, u32 fill);

NULL0_IMPORT("image_scale")
u32 image_scale(u32 image, f32 scaleX, f32 scaleY, Filter filter);

NULL0_IMPORT("image_color_replace")
void image_color_replace(u32 image, u32 color, u32 replace);

NULL0_IMPORT("color_tint")
u32 color_tint(u32 color, u32 tint);

NULL0_IMPORT("image_color_tint")
void image_color_tint(u32 image, u32 color);

NULL0_IMPORT("color_fade")
u32 color_fade(u32 color, f32 alpha);

NULL0_IMPORT("image_color_fade")
void image_color_fade(u32 image, f32 alpha);

NULL0_IMPORT("color_brightness")
u32 color_brightness(u32 color, f32 factor);

NULL0_IMPORT("font_copy")
u32 font_copy(u32 font);

NULL0_IMPORT("font_scale")
u32 font_scale(u32 font, f32 scaleX, f32 scaleY, Filter filter);

NULL0_IMPORT("load_font_bmf")
u32 load_font_bmf(const char* fileName, const char* characters);

NULL0_IMPORT("load_font_bmf_from_image")
u32 load_font_bmf_from_image(u32 image, const char* characters);

NULL0_IMPORT("measure_text")
i32 measure_text(u32 font, const char* text);

NULL0_IMPORT("gen_image_text")
u32 gen_image_text(u32 font, const char* text, u32 tint);

NULL0_IMPORT("load_font_tty")
u32 load_font_tty(const char* fileName, i32 glyphWidth, i32 glyphHeight, const char* characters);

NULL0_IMPORT("load_font_tty_from_image")
u32 load_font_tty_from_image(u32 image, i32 glyphWidth, i32 glyphHeight, const char* characters);

NULL0_IMPORT("load_file")
unsigned char* load_file(const char* fileName, unsigned int* bytesRead);

NULL0_IMPORT("load_file_text")
const char* load_file_text(const char* fileName);

NULL0_IMPORT("load_font_ttf")
u32 load_font_ttf(const char* fileName, i32 fontSize);

NULL0_IMPORT("color_invert")
u32 color_invert(u32 color);

NULL0_IMPORT("image_color_invert")
void image_color_invert(u32 image);

NULL0_IMPORT("color_alpha_blend")
u32 color_alpha_blend(u32 dst, u32 src);

NULL0_IMPORT("image_alpha_border")
Rectangle* image_alpha_border(u32 image, f32 threshold);

NULL0_IMPORT("image_crop")
bool image_crop(u32 image, i32 x, i32 y, i32 width, i32 height);

NULL0_IMPORT("image_alpha_crop")
void image_alpha_crop(u32 image, f32 threshold);

NULL0_IMPORT("image_color_brightness")
void image_color_brightness(u32 image, f32 factor);

NULL0_IMPORT("image_flip")
void image_flip(u32 image, bool horizontal, bool vertical);

NULL0_IMPORT("color_contrast")
u32 color_contrast(u32 color, f32 contrast);

NULL0_IMPORT("image_color_contrast")
void image_color_contrast(u32 image, f32 contrast);

NULL0_IMPORT("image_alpha_mask")
void image_alpha_mask(u32 image, u32 alphaMask, i32 posX, i32 posY);

NULL0_IMPORT("image_rotate")
u32 image_rotate(u32 image, f32 degrees, Filter filter);

NULL0_IMPORT("image_gradient")
u32 image_gradient(i32 width, i32 height, u32 topLeft, u32 topRight, u32 bottomLeft, u32 bottomRight);

NULL0_IMPORT("color_bilinear_interpolate")
u32 color_bilinear_interpolate(u32 color00, u32 color01, u32 color10, u32 color11, f32 coordinateX, f32 coordinateY);

NULL0_IMPORT("load_sound")
u32 load_sound(const char* fileName);

NULL0_IMPORT("play_sound")
void play_sound(u32 sound, bool loop);

NULL0_IMPORT("stop_sound")
void stop_sound(u32 sound);

NULL0_IMPORT("delta_time")
f32 delta_time();

NULL0_IMPORT("key_pressed")
bool key_pressed(Key key);

NULL0_IMPORT("key_down")
bool key_down(Key key);

NULL0_IMPORT("key_released")
bool key_released(Key key);

NULL0_IMPORT("key_up")
bool key_up(Key key);

NULL0_IMPORT("gamepad_button_pressed")
bool gamepad_button_pressed(i32 gamepad, GamepadButton key);

NULL0_IMPORT("gamepad_button_down")
bool gamepad_button_down(i32 gamepad, GamepadButton key);

NULL0_IMPORT("gamepad_button_released")
bool gamepad_button_released(i32 gamepad, GamepadButton key);

NULL0_IMPORT("gamepad_button_up")
bool gamepad_button_up(i32 gamepad, GamepadButton key);

NULL0_IMPORT("mouse_position")
Vector* mouse_position();

NULL0_IMPORT("mouse_button_pressed")
bool mouse_button_pressed(MouseButton button);

NULL0_IMPORT("mouse_button_down")
bool mouse_button_down(MouseButton button);

NULL0_IMPORT("mouse_button_released")
bool mouse_button_released(MouseButton button);

NULL0_IMPORT("mouse_button_up")
bool mouse_button_up(MouseButton button);

NULL0_IMPORT("set_title")
void set_title(const char* title);
