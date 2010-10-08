
#include "Debug.h"
#include "Application.h"
#include "Renderer.h"

namespace pixelland {

void Debug::drawLine(const vec2 &from, const vec2 &to, const Color &color) {
  Renderer *renderer = Application::renderer();
  renderer->color(color);
  renderer->line(from, to);
  Debug::drawMarker(from);
  Debug::drawMarker(to);
}

void Debug::drawMarker(const vec2 &point, const Color &color) {
  static const float markSize = 5;
  Renderer *renderer = Application::renderer();
  renderer->color(color);
  renderer->line(point - vec2(0, markSize), point + vec2(0, markSize));
  renderer->line(point - vec2(markSize, 0), point + vec2(markSize, 0));
}
  
} /* namespace pixelland */
