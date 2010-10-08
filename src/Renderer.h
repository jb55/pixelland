#ifndef _PL_RENDERER_H_
#define _PL_RENDERER_H_
#pragma once

#include "Color.h"
#include "Vector.h"
#include "opengl.h"

namespace pixelland {

class Renderer 
{
public:
  Renderer() {}
  ~Renderer() {}

  /* these are nicer than using opengl directly */

  inline void clear() {
    glClear(GL_COLOR_BUFFER_BIT);
  }

  inline void identity() {
    glLoadIdentity();
  }

  inline void swap() {
    glutSwapBuffers();
  }

  inline void color(const Color& color) {
    glColor3f(color.r, color.g, color.b);
  }

  inline void line(const vec2 &from, const vec2 &to) {
    glBegin(GL_LINES);
    glVertex2f(from.x, from.y);
    glVertex2f(to.x, to.y);
    glEnd();
  }
};

} /* namespace pixelland */

#endif /* _PL_RENDERER_H_ */
