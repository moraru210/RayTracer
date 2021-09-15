//
// Created by Alexandru Moraru on 14/09/2021.
//

#ifndef COMMON_RAY_H
#define COMMON_RAY_H

#include "color.h"

class ray {
 public:
  ray() {}
  ray(const point3& origin, const vec3& direction)
      : orig(origin), dir(direction)
  {}

  point3 origin() const { return orig; }
  vec3 direction() const { return dir; }

  point3 at(double t) const {
    return orig + t*dir;
  }

 public:
  point3 orig;
  vec3 dir;
};

#endif //COMMON_RAY_H