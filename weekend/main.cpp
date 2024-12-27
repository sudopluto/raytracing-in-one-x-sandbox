#include <iostream>

#include "color.h"
#include "vec3.h"

int main(void) {

    auto aspect_ratio = 16.0 / 9.0;
    int img_width = 400;

    int img_height = int(img_width / aspect_ratio);
    img_height = (img_height < 1) ? 1 : img_height;

    auto viewport_height = 2.0;
    auto viewport_width = viewport_height * (double(img_width)/img_height);

    std::cout << "P3\n" << img_width << ' ' << img_height << "\n255\n";

    for (int j = 0; j < img_height; j++) {
        std::clog << "\rScanlines remaining: " << (img_height - j) << ' ' << std::flush;
        for (int i = 0; i < img_width; i++) {
            auto r = double(i) / (img_width - 1);
            auto g = double(j) / (img_height - 1);
            auto b = 0.0;
            color pixel_color(r, g, b);
            write_color(std::cout, pixel_color);
        }
    }
    std::clog << "\rDone!                 \n";

    return 0;
}
