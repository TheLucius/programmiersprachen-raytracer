//
// Created by lucius on 28.06.21.
//

#ifndef RAYTRACER_SPHERE_HPP
#define RAYTRACER_SPHERE_HPP
#include "Shape.hpp"
#include "glm/vec3.hpp"
#include "color.hpp"



class Sphere : public Shape{
public:
    //constructors
    Sphere();
    Sphere(glm::vec3 center, float r);
    Sphere(glm::vec3 center, float radius, std::string name, Color farbe);
    //tidy up
    ~Sphere();
    float area(float radius)const override;
    float volume(float radius)const override;

    glm::vec3 center;
    float radius;
};


#endif //RAYTRACER_SPHERE_HPP
