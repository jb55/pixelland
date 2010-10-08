#ifndef _PL_VECTOR_H_
#define _PL_VECTOR_H_
#pragma once

#include <math.h>

namespace pixelland {

struct vec2 
{
public:
  vec2() : x(0), y(0) {}
  vec2(float _x, float _y) : x(_x), y(_y) {}
  explicit vec2(float scalar) : x(scalar), y(scalar) {}

  vec2 operator+=(const vec2 &rhs) {
    x += rhs.x;
    y += rhs.y;
    return *this;
  }

  vec2 operator-=(const vec2 &rhs) {
    x -= rhs.x;
    y -= rhs.y;
    return *this;
  }

  vec2 operator*=(const vec2 &rhs) {
    x *= rhs.x;
    y *= rhs.y;
    return *this;
  }

  const vec2 operator-(const vec2 &other) const {
    return vec2(*this) -= other;
  }

  const vec2 operator+(const vec2 &other) const {
    return vec2(*this) += other;
  }

  const vec2 operator*(const vec2 &other) const {
    return vec2(*this) *= other;
  }

  const vec2 operator-(float scalar) const {
    return vec2(this->x - scalar, this->y - scalar);
  }

  const vec2 operator+(float scalar) const {
    return vec2(this->x + scalar, this->y + scalar);
  }

  const vec2 operator*(float scalar) const {
    return vec2(this->x * scalar, this->y * scalar);
  }

  bool operator==(const vec2 &rhs) const {
    return x == rhs.x && y == rhs.y;
  }

  bool operator!=(const vec2 &other) const {
    return !(*this == other);
  }

  float squaredLength() const {
    return (x * x) + (y * y);
  }

  float length() const {
    return sqrt(squaredLength());
  }

  float x;
  float y;
};


struct vec3
{
public:
  vec3() : x(0), y(0), z(0) {}
  vec3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
  explicit vec3(float scalar) : x(scalar), y(scalar), z(scalar) {}

  vec3 operator+=(const vec3 &rhs) {
    x += rhs.x;
    y += rhs.y;
    z += rhs.z;
    return *this;
  }

  vec3 operator-=(const vec3 &rhs) {
    x -= rhs.x;
    y -= rhs.y;
    z -= rhs.z;
    return *this;
  }

  vec3 operator*=(const vec3 &rhs) {
    x *= rhs.x;
    y *= rhs.y;
    z *= rhs.z;
    return *this;
  }

  const vec3 operator*(float scalar) const {
    return vec3(*this) *= vec3(scalar);
  }

  const vec3 operator*(const vec3 &other) const {
    return vec3(*this) *= other;
  }

  const vec3 operator-(float scalar) const {
    return vec3(*this) -= vec3(scalar);
  }

  const vec3 operator-(const vec3 &other) const {
    return vec3(*this) -= other;
  }

  const vec3 operator+(float scalar) const {
    return vec3(*this) += vec3(scalar);
  }

  const vec3 operator+(const vec3 &other) const {
    return vec3(*this) += other;
  }

  bool operator==(const vec3 &rhs) const {
    return x == rhs.x && y == rhs.y && z == rhs.z;
  }

  bool operator!=(const vec3 &other) const {
    return !(*this == other);
  }

  float squaredLength() const {
    return (x * x) + (y * y) + (z * z);
  }

  float length() const {
    return sqrt(squaredLength());
  }

  float x;
  float y;
  float z;
};

  
} /* namespace pixelland */

#endif /* _PL_VECTOR_H_ */
