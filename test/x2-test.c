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





