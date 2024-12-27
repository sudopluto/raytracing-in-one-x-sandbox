#pragma once

#include <iostream>

#include "vec3.h"

using color = vec3;

inline void write_color(std::ostream& out, const color& pixel_color) {
    auto r = pixel_color[0];
    auto g = pixel_color[1];
    auto b = pixel_color[2];

    int ir = int(255.999 * r);
    int ig = int(255.999 * g);
    int ib = int(255.999 * b);

    std::cout << ir << ' ' << ig << ' ' << ib << '\n';
}
