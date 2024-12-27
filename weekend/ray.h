#pragma once

#include "vec3.h"

class ray {
private:
    point3 orig;
    vec3 dir;

public:
    ray() {}
    ray(const point3& cons_orig, const vec3& cons_dir) : orig(cons_orig), dir(cons_dir) {}

    const point3& origin() const { return orig; }
    const point3& direction() const { return dir; }

    point3 at(double t) const { return orig + (t * dir); }

};
