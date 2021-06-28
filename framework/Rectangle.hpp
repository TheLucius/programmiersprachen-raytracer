//
// Created by lucius on 28.06.21.
//

#ifndef RAYTRACER_RECTANGLE_HPP
#define RAYTRACER_RECTANGLE_HPP
#include "Shape.hpp"
#include "glm/vec3.hpp"
#include "color.hpp"


class Rectangle : public Shape{
public:
    //default
    Rectangle();
    //given points
    Rectangle(glm::vec3 mini, glm::vec3 maxi);
    //given points, name and color
    Rectangle(glm::vec3 min, glm::vec3 max, std::string name, Color farbe);

    //tidy up
    ~Rectangle();

    float area()const override;
    float volume()const override;
    glm::vec3 min_;
    glm::vec3 max_;
};


#endif //RAYTRACER_RECTANGLE_HPP
