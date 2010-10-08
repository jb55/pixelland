#ifndef _PL_DEBUG_H_
#define _PL_DEBUG_H_
#pragma once

#include "Color.h"
#include "Vector.h"

namespace pixelland {

class Debug 
{
public:
  Debug();
  ~Debug();

  static void drawMarker(const vec2 &point, const Color &color = Color::Green);

  static void drawLine(const vec2 &from, const vec2 &to, 
                       const Color &color = Color::Red);
};

} /* namespace pixelland */

#endif /* _PL_DEBUG_H_ */
