#include <iostream>

#include "vec3.h"

int main(void) {
    const int img_width = 200;
    const int img_height = 100;

    std::cout << "P3\n" << img_width << ' ' << img_height << "\n255\n";

    for (int j = img_height -1; j >= 0; --j) {
        std::cerr << "\rScanlines remaining: " << j << ' ' << std::flush;
        vec3 color;
        color[2] = 0.2;
        for (int i = 0; i < img_width; ++i) {
            color[0] = double(i) / img_width;
            color[1] = double(j) / img_height;
            color.write_color(std::cout);
        }
    }
    std::cerr << "\nDone\n";

    return 0;
}
