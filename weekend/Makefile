sample-ppm: raytracer
	./raytracer > img.ppm
	xdg-open img.ppm

raytracer: main.cpp vec3.h
	g++ -o raytracer main.cpp -lm

clean:
	- rm raytracer
	- rm img.ppm
