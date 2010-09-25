#ifndef _PL_RENDERER_H_
#define _PL_RENDERER_H_
#pragma once

namespace pixelland {

class Renderer 
{
public:
  Renderer();
  ~Renderer();

  void clear();
  void identity();
};

} /* namespace pixelland */

#endif /* _PL_RENDERER_H_ */
