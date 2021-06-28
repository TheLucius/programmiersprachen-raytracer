//
// Created by lucius on 28.06.21.
//

#include "Rectangle.hpp"
#include "glm/vec3.hpp"
#include "color.hpp"
using namespace glm;


//default constructor
Rectangle::Rectangle():
Shape::Shape{"Quader", {0,0,100}}, min_{0,0,0}, max_{3,3,3}{}


//given min and max
Rectangle::Rectangle(vec3 min, vec3 max):
Shape::Shape{"Quader", {0,0,100}}, min_{min}, max_{max}{}

//given everything
Rectangle::Rectangle(glm::vec3 min, glm::vec3 max, std::string name, Color color):
        Shape::Shape{name, {color}}, min_{min}, max_{max}{}

//destructor
Rectangle::~Rectangle() {
    std::cout << name_ << " got deleted! \n";
}


float Rectangle::area()const {
    float height = max_.x - min_.x;
    float length = max_.y - min_.y;
    float width = max_.z - min_.z;

    float area_one = 2*(height * length);
    float area_two = 2*(length * width);
    float area_three = 2*(height*width);

    float area = area_one + area_two + area_three;

    return area;
}

float Rectangle::volume()const {
    float height = max_.x - min_.x;
    float length = max_.y - min_.y;
    float width = max_.z - min_.z;

    float volume = height * length * width;

    return volume;
}

