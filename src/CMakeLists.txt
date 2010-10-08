
FILE(GLOB SRCS *.cpp *.h)

ADD_EXECUTABLE(pixelland ${SRCS})

TARGET_LINK_LIBRARIES(pixelland ${CORELIBS})

SET_TARGET_PROPERTIES(pixelland 
  PROPERTIES COMPILE_FLAGS 
  "-O2 -g -Wall -pedantic"
)

