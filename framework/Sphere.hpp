//
// Created by lucius on 28.06.21.
//

#ifndef RAYTRACER_SPHERE_HPP
#define RAYTRACER_SPHERE_HPP
#include "Shape.hpp"
#include "glm/vec3.hpp"
using namespace glm;


class Sphere : public Shape{
public:
    vec3 center;
    float radius;

    float area(float radius);
    float volume(float radius);
};


#endif //RAYTRACER_SPHERE_HPP
