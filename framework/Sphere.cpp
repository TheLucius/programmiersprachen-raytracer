//
// Created by lucius on 28.06.21.
//

#include "Sphere.hpp"
#include "glm/vec3.hpp"
using namespace glm;
#include "math.h"

float Sphere::area(float radius) {
    float area =4*M_PI* pow(radius,2);
}

float Sphere::volume(float radius) {
    float area =4/3*M_PI * pow(radius, 3);
}