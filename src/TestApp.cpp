
#include "TestApp.h"

namespace pixelland {

TestApp::TestApp() {}
TestApp::~TestApp() {}

void TestApp::onFrame() {
  vec2 from(10, 10);
  vec2 to(100, 100);

  Debug::drawLine(from, to);
}
  
} /* namespace pixelland */

