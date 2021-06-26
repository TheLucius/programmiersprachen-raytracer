#ifndef RAYTRACER_SHAPE_HPP
#define RAYTRACER_SHAPE_HPP

class Shape{
    virtual int area()==0;
    virtual int volume()==0;
};

#endif //RAYTRACER_SHAPE_HPP
