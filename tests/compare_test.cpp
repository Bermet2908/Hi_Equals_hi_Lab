#define CATCH_CONFIG_MAIN
#include <catch2/catch_all.hpp>
#include "../src/compare.hpp"

TEST_CASE("Equal") {
    REQUIRE(strcmp_case_insensitive("Hi", "hi") == 0);
    REQUIRE(strcmp_case_insensitive("FIRST word", "first WORD") == 0);
}

TEST_CASE("Different letters") {
    REQUIRE(strcmp_case_insensitive("flat", "House") < 0);
    REQUIRE(strcmp_case_insensitive("House", "flat") > 0);
}

TEST_CASE("Length differences") {
    REQUIRE(strcmp_case_insensitive("bema", "bermet") < 0);
    REQUIRE(strcmp_case_insensitive("bermet", "bema") > 0);
}

TEST_CASE("Empty strings") {
    REQUIRE(strcmp_case_insensitive("", "") == 0);
    REQUIRE(strcmp_case_insensitive("", "v") < 0);
    REQUIRE(strcmp_case_insensitive("V", "") > 0);
}

TEST_CASE("Non-letters") {
    REQUIRE(strcmp_case_insensitive("123", "123") == 0);
    REQUIRE(strcmp_case_insensitive("&b", "&B") == 0);
    REQUIRE(strcmp_case_insensitive("&b", "&d") < 0);
}

