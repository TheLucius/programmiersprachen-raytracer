//
// Created by lucius on 28.06.21.
//

#include "Sphere.hpp"
#include "glm/vec3.hpp"
#include "math.h"
using namespace glm;



//default mit cen 1,2,3 und
Sphere ::Sphere():
Shape::Shape{"Ball", {0,100,0}}, center{1,2,3}, radius{3.5}{}

//constructor for defualt color and name, but given center and radius
Sphere ::Sphere(vec3 center, float r):
Shape::Shape{"Ball2", {0,100,0}}, center{center}, radius{r}{}

//everything is given
Sphere ::Sphere(vec3 cen, float rad, std::string name, Color farbe):
Shape::Shape{name, farbe}, center{cen}, radius{rad}{}

//destructor
Sphere::~Sphere() {
    std::cout<<name_<<" got deleted \n";
}

//area function
float Sphere::area ()const {
    float area =4*M_PI* pow(radius,2);
    return area;
}
//volume function
float Sphere::volume ()const {
    float volume = (4/3)*M_PI * (pow(radius, 3));
    return volume;
}

std::ostream& Sphere::print(std::ostream& string)const{
    Shape::print(string);
    std::cout<<"cen: "<<center.x<<center.y<<center.z<<" "<<"Radius: "<<radius;
}