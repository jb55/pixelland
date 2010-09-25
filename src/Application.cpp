
#include "Application.h"
#include "Renderer.h"
#include "opengl.h"

namespace pixelland {

Renderer* Application::g_rootRenderer = 0;

Application::Application() {
}

Application::~Application() {
  delete m_renderer;
}

void Application::loadSettings() {
  m_renderer = new Renderer();
  g_rootRenderer = m_renderer;
}

void Application::run() {
  loadSettings();
  showWindow();
  initGraphics();
  loop();
}

void Application::loop() {
  glutMainLoop();
}

void Application::showWindow() {
  int argc = 0;
  const char* argv[] = {""};

  glutInit (&argc, (char**)argv);
  glutInitWindowSize(800, 600);
  glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
  glutCreateWindow("PixelLand Demo");

  glutDisplayFunc(Application::render);
  glutReshapeFunc(Application::resize);
}

void Application::initGraphics() {
  glEnable(GL_DEPTH_TEST);
  glDepthFunc(GL_LESS);
  glShadeModel(GL_FLAT);
  glEnable(GL_LIGHTING);
  glEnable(GL_LIGHT0);
}

void Application::resize(int width, int height) {
}
  
void Application::render() {
  g_rootRenderer->clear();
}
  
} /* namespace pixelland */

