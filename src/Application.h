#ifndef _PL_APPLICATION_H_
#define _PL_APPLICATION_H_
#pragma once

namespace pixelland {

class Renderer; 

class Application 
{
public:
  Application();
  virtual ~Application();

  void run();

  virtual void onFrame();
  virtual void setupScene();

  int m_width;
  int m_height;

  static Renderer* renderer();
  static Application* inst();

private:
  static Renderer* g_rootRenderer;
  static Application* g_rootApplication;

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
