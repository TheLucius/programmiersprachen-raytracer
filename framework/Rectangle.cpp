//
// Created by lucius on 28.06.21.
//

#include "Rectangle.hpp"
#include "glm/vec3.hpp"

float Rectangle::area() {
    float height = max.x - min.x;
    float length = max.y - min.y;
    float width = max.z - min.z;

    float area_one = 2*(height * length);
    float area_two = 2*(length * width);
    float area_three = 2*(height*width);

    float area = area_one + area_two + area_three;

    return area;
}

float Rectangle::volume() {
    float height = max.x - min.x;
    float length = max.y - min.y;
    float width = max.z - min.z;

    float volume = height * length * width;

    return width;
}

