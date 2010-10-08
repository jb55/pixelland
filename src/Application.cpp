
#include "Application.h"
#include "Renderer.h"
#include "opengl.h"
#include "Vector.h"
#include <stdio.h>


namespace pixelland {

Renderer* Application::g_rootRenderer = 0;
Application* Application::g_rootApplication = 0;

Application::Application() {
  g_rootApplication = this;
}

Application::~Application() {
  delete m_renderer;
}

void Application::loadSettings() {
  m_renderer = new Renderer();
  g_rootRenderer = m_renderer;
  m_width = 800;
  m_height = 600;
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
  glutInitWindowSize(m_width, m_height);
  glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
  glutCreateWindow("PixelLand Demo");

  glutDisplayFunc(Application::render);
  glutReshapeFunc(Application::resize);
}

void Application::initGraphics() {
  glShadeModel(GL_FLAT);
  glClearColor(0, 0, 0, 0);
}

void Application::resize(int width, int height) {
  Application::inst()->m_width = width;
  Application::inst()->m_height = height;

  glViewport(0, 0, width, height);

  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();

  gluOrtho2D(0, width, 0, height);
  glScalef(1, -1, 1);
  glTranslatef(0, -height, 0);

  glMatrixMode(GL_MODELVIEW);
}

void Application::render() {
  Renderer* renderer = Application::renderer();
  renderer->clear();
  renderer->identity();

  Application::inst()->onFrame();

  renderer->swap();
}

void Application::onFrame() {
  vec2 v1(2, 3);
  vec2 v2(3, 2);

  vec2 v3 = v1 + v2 * v1;

  vec3 i(1, 0, 0);
  vec3 j(0, 1, 0);
  vec3 k(0, 0, 1);

  printf("len: %f %f %f\n", 
         i.length(),
         j.length(),
         k.length());

  printf("my vector: %f, %f\n", v3.x, v3.y);
}

void Application::setupScene() {
}

Application* Application::inst() {
  return g_rootApplication;
}
  
Renderer* Application::renderer() {
  return g_rootRenderer;
}
  
} /* namespace pixelland */

