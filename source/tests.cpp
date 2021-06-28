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


}


int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
