#ifndef RAYTRACER_SHAPE_HPP
#define RAYTRACER_SHAPE_HPP
#include "color.hpp"


class Shape{

public:
    //default
    Shape();
    //default mit name und farbe
    Shape(std::string name, Color farbe);

    //destruktor
    ~Shape();
    //pure virtual methods

    virtual float area(float)const=0;
    virtual float volume(float)const=0;

protected:
    Color color_;
    std::string name_;
};



#endif //RAYTRACER_SHAPE_HPP
