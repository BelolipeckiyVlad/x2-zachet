#include <ctest.h>
#include <../src/x2.h>
#include <math.h>

CTEST(Test_1_Dec, input_1_2_1)
{
    double result = Dec(1,2,1);
	
    double expected = 0;
	
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Test_2_Dec, input_2_10_3)
{
    double result = Dec(2,10,3);
	
    double expected = 76;
	
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Test_3_Dec, input_5_1_1)
{
    double result = Dec(5,1,1);
	
    double expected = -19;
	
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Test_4_kofa0, input_2_4)
{
    double result = kofa0(2,-4);
	
    double expected = 2;
	
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Test_4_kofa0, input_8_24)
{
    double result = kofa0(8,24);
	
    double expected = -3;
	
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Test_5_kofb0, input_2_8)
{
    double result = kofb0(2,-8);
	
    double expected = 2;
	
    ASSERT_DBL_NEAR(expected, result);
}


CTEST(Test_6_Dec0, input_4_2)
{
    double result = Dec0(-4,2);
	
    double expected = 1;
	
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Test_7_Dec0, input_8_1)
{
    double result = Dec0(8,1);
	
    double expected = -4;
	
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Test_8_Dec1, input_1_8_4)
{
    double result = Dec1(1,8,4);
	
    double expected = -3;
	
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Test_9_Dec1, input_1_1_9)
{
    double result = Dec1(1,1,9);
	
    double expected = 1;
	
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Test_10_Dec2, input_1_5_25)
{
    double result = Dec2(1,-5,25);
	
    double expected = 0;
	
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Test_11_Dec2, input_2_10_4)
{
    double result = Dec2(2,-10,4);
	
    double expected = 2;
	
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Test_12_Dec2, input_3_2_100)
{
    double result = Dec2(3,2,100);
	
    double expected = -2;
	
    ASSERT_DBL_NEAR(expected, result);
}








