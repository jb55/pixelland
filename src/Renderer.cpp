#include "Renderer.h"
#include "opengl.h"

namespace pixelland {

Renderer::Renderer() {
}
  
Renderer::~Renderer() {
}

void Renderer::identity() {
  glLoadIdentity();
}

void Renderer::clear() {
  glClear(GL_COLOR_BUFFER_BIT);
}

} /* namespace pixelland */

