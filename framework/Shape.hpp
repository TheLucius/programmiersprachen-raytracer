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

    virtual float area()const=0;
    virtual float volume()const=0;
    virtual std::ostream& print(std::ostream& shapes)const;

protected:
    Color color_;
    std::string name_;
};

std::ostream& operator<<(std::ostream& shapes, Shape const& string);


#endif //RAYTRACER_SHAPE_HPP
