#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "Shape.hpp"
#include "Sphere.hpp"
#include "Rectangle.hpp"
#include "glm/vec3.hpp"

TEST_CASE("Sphere","[Sphere]"){
    SECTION("init"){
        Sphere x = {};
        REQUIRE(x.center.x == Approx(1.0f));
        REQUIRE(x.center.y == Approx(2.0f));
        REQUIRE(x.center.z == Approx(3.0f));
        REQUIRE(x.radius == Approx(3.5f));
    }
    SECTION("area"){
        Sphere y = {{3,3,3},4.0f,"Kugel", {0,40,0}};
        REQUIRE(y.area()==Approx(201.0619f));
        Sphere z = {{3,3,3},-6.0f,"Kugel", {0,40,0}};
        REQUIRE(z.area()==Approx(452.389f));
    }
    SECTION("volume"){
        Sphere a = {{3,3,3},4.0f,"Kugel", {0,40,0}};
        REQUIRE(a.volume()==Approx(268.082f));  //for some reason the volume is equal to the area no idea why
        Sphere b = {{3,3,3},-6.0f,"Kugel", {0,40,0}};
        REQUIRE(b.volume()==Approx(904.77f));
    }
}


TEST_CASE("Rectangle","[Rec]"){
    SECTION("init"){
        Rectangle x = {};
        REQUIRE(x.min_.x == Approx(0));
        REQUIRE(x.min_.y == Approx(0));
        REQUIRE(x.min_.z == Approx(0));
        REQUIRE(x.max_.x == Approx(3));
        REQUIRE(x.max_.y == Approx(3));
        REQUIRE(x.max_.z == Approx(3));
    }
    SECTION("area"){
        Rectangle y;
        REQUIRE(y.area()==Approx(54.0f));
        Rectangle z = {{3,3,3},{5,5,5}};
        REQUIRE(z.area()==Approx(24.0f));
    }
    SECTION("volume"){
        Rectangle a = {{3,3,3},{10,10,10}};
        REQUIRE(a.volume()==Approx(343.0f));
        Rectangle b = {{0,0,0}, {5,5,5}};
        REQUIRE(b.volume()==Approx(125.0f));
    }
}


int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
