#include <ctest.h>
#include <../src/deposit.h>

CTEST(simple_test, simle_sum)
{
    int result = is_correct_number("2341gf");

    // Then
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_correct_number, checkout_correctness)
{
    int result = is_correct_number("234141");
    
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(input_check, test_input)
{
    int result = check_input(1234827, 231);
    
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(calc_test, calc)
{
    double result = calc_result(567273,145);
    
    const double expected = 612654.84;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(calc_less0_days, calc)
{
    double result = calc_result(22222, -5);

    const double expected = 0.0;

    ASSERT_DBL_NEAR(expected, result);
}

CTEST(calc_more365_days, calc)
{
    double result = calc_result(22222, 366);

    const double expected = 0.0;

    ASSERT_DBL_NEAR(expected, result);
}
/////////////////////////////////
CTEST(calc_31_day_less_100000_rub, calc)
{
    double result = calc_result(50000, 31);
    const double exp = 51000;

    ASSERT_DBL_NEAR(exp, result);
}

CTEST(calc_31_day_more_100000_rub, calc)
{
    double result = calc_result(150000, 31);
    const double exp = 154500;

    ASSERT_DBL_NEAR(exp, result);
}
/////////////////////////////////
CTEST(calc_120_day_less_100000_rub, calc)
{
    double result = calc_result(50000, 31);
    const double exp = 51000;

    ASSERT_DBL_NEAR(exp, result);
}

CTEST(calc_120_day_more_100000_rub, calc)
{
    double result = calc_result(150000, 31);
    const double exp = 154500;

    ASSERT_DBL_NEAR(exp, result);
}
/////////////////////////////////
CTEST(calc_121_day_less_100000_rub, calc)
{
    double result = calc_result(50000, 121);
    const double exp = 53000;

    ASSERT_DBL_NEAR(exp, result);
}

CTEST(calc_121_day_more_100000_rub, calc)
{
    double result = calc_result(150000, 121);
    const double exp = 162000;

    ASSERT_DBL_NEAR(exp, result);
}
/////////////////////////////////
CTEST(calc_240_day_less_100000_rub, calc)
{
    double result = calc_result(50000, 121);
    const double exp = 53000;

    ASSERT_DBL_NEAR(exp, result);
}

CTEST(calc_240_day_more_100000_rub, calc)
{
    double result = calc_result(150000, 121);
    const double exp = 162000;

    ASSERT_DBL_NEAR(exp, result);
}
/////////////////////////////////
CTEST(calc_241_day_less_100000_rub, calc)
{
    double result = calc_result(50000, 241);
    const double exp = 56000;

    ASSERT_DBL_NEAR(exp, result);
}

CTEST(calc_241_day_more_100000_rub, calc)
{
    double result = calc_result(150000, 241);
    const double exp = 172500;

    ASSERT_DBL_NEAR(exp, result);
}
/////////////////////////////////

CTEST(calc_365_day_less_100000_rub, calc)
{
    double result = calc_result(50000, 241);
    const double exp = 56000;

    ASSERT_DBL_NEAR(exp, result);
}

CTEST(calc_365_day_more_100000_rub, calc)
{
    double result = calc_result(150000, 241);
    const double exp = 172500;

    ASSERT_DBL_NEAR(exp, result);
}
/////////////////////////////////
