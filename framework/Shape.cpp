//
// Created by lucius on 28.06.21.
//
#include "Shape.hpp"

//default constructor
Shape::Shape():
Shape::Shape{"Form", {0,20,0}}{}

//constructor for given name and color
Shape::Shape(std::string name, Color farbe):
color_{farbe},name_{name}{}

Shape::~Shape() {
    std::cout << name_ << " got deleted \n";
}