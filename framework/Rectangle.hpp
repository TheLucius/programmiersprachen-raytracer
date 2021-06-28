//
// Created by lucius on 28.06.21.
//

#ifndef RAYTRACER_RECTANGLE_HPP
#define RAYTRACER_RECTANGLE_HPP
#include "Shape.hpp"
#include "glm/vec3.hpp"

using namespace glm;


class Rectangle : public Shape{
public:
    Rectangle():
    min(3,3,3), max(6,6,6){}
    Rectangle(vec3 const& min, vec3 const& max):
    min{min}, max{max}{};
    float area();
    float volume();

    vec3 min;
    vec3 max;
};


#endif //RAYTRACER_RECTANGLE_HPP
