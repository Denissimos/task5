#include <ctest.h>
#include <D.h>

CTEST(quadratic_equation_suite, two_roots_test) {
    //Given
    const float a = 2;
    const float b = 5;
    const float c = 3;

    //When
    Roots answer;
    answer = Discriminant(a, b, c);

    //Then
    const Roots expected_answer = {-3, 1/2, 49};

    ASSERT_DBL_NEAR(expected_answer.D, answer.D);
    ASSERT_DBL_NEAR(expected_answer.x1, answer.x1);
    ASSERT_DBL_NEAR(expected_answer.x2, answer.x2);
}

CTEST(quadratic_equation_suite, one_root_test) {
    //Given
    const float a = 1;
    const float b = 6;
    const float c = 9;

    //When
    Roots answer;
    answer = Discriminant(a, b, c);

    //Then
    const Roots expected_answer = {-3, -3, 0};

    ASSERT_DBL_NEAR(expected_answer.x1, answer.x1);
    ASSERT_DBL_NEAR(expected_answer.D, answer.D);
}

CTEST(quadratic_equation_suite, negative_discriminant_test) {
    //Given
    const float a = 2;
    const float b = 4;
    const float c = 7;

    //When
    Roots answer;
    answer = Discriminant(a, b, c);

    //Then
    const Roots expected_answer = {.D = -40};

    ASSERT_DBL_NEAR(expected_answer.D, answer.D);
}
