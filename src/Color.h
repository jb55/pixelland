#ifndef _PL_COLOR_H_
#define _PL_COLOR_H_
#pragma once

namespace pixelland {

class Color 
{
public:
  Color(int r, int g, int b);
  ~Color();

  static Color Red;
  static Color Green;
  static Color Blue;
  static Color Black;
  static Color White;

  float r, g, b;
};

} /* namespace pixelland */


#endif /* _PL_COLOR_H_ */

