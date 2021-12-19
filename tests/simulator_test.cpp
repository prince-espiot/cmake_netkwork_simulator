#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../src/simulator.cpp"
#include "../src/endhost.cpp"


TEST_CASE("AddNode") { // Test Demo
    Simulator s;
    SECTION("node list should be empty") {
        REQUIRE(s.GetNodes().size() == 0);
    }

    SECTION("node list should one node") {
        s.AddNode(new EndHost());
        REQUIRE(s.GetNodes().size() == 1);
    }

    SECTION("node list should have more one nodes") {
        s.AddNode(new EndHost());
        s.AddNode(new EndHost());
        REQUIRE(s.GetNodes().size() > 1);
    }
    
}