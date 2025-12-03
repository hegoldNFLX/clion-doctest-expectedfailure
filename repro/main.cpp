#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

// https://github.com/doctest/doctest/blob/1da23a3e8119ec5cce4f9388e91b065e20bf06f5/examples/all_features/test_cases_and_suites.cpp#L62
TEST_SUITE("test suite with a description" * doctest::description("regarding failures")) {
    TEST_CASE("fails - and its allowed" * doctest::may_fail()) { FAIL(""); }
    TEST_CASE("doesn't fail which is fine" * doctest::may_fail()) {}

    TEST_CASE("fails as it should" * doctest::should_fail()) { FAIL(""); }

    TEST_CASE("fails 1 time as it should" * doctest::expected_failures(1)) { FAIL(""); }

    TEST_CASE("passes") {}
}