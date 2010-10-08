#ifndef _PL_TESTAPP_H_
#define _PL_TESTAPP_H_
#pragma once

#include "Application.h"
#include "Color.h"
#include "Debug.h"

namespace pixelland {

class TestApp : public Application
{
public:
  TestApp();
  virtual ~TestApp();
  virtual void onFrame();
};
  
} /* namespace pixelland */


#endif /* _PL_TESTAPP_H_ */

