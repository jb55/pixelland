#ifndef _PL_APPLICATION_H_
#define _PL_APPLICATION_H_
#pragma once

namespace pixelland {

class Renderer; 

class Application 
{
public:
  Application();
  ~Application();

  void run();

private:

  static Renderer* g_rootRenderer;
  Renderer* m_renderer;

  void loadSettings();
  void showWindow();
  void initGraphics();
  void loop();

  static void render();
  static void resize(int width, int height);
};

} /* namespace pixelland */

#endif /* _PL_APPLICATION_H_ */
