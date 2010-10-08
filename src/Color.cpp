
#include "Color.h"

namespace pixelland {

Color::Color(int r, int g, int b) {
  this->r = r / 255;
  this->g = g / 255;
  this->b = b / 255;
}

Color::~Color() {
}

/* colors */
Color Color::Red(255, 0, 0);
Color Color::Green(0, 255, 0);
Color Color::Blue(0, 0, 255);
Color Color::Black(0, 0, 0);
Color Color::White(255, 255, 255);
  
} /* namespace pixelland */
