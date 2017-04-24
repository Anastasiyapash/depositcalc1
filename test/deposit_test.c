#include <stdio.h>
#include <stdlib.h>
#include "ctest.h"
#include "deposit.h"

CTEST(Input_data, test1)
{
        ASSERT_EQUAL(0, validValue(-1, 10001));
}

CTEST(Input_data, test2)
{
	ASSERT_EQUAL(0, validValue(-1, 9999));
}

CTEST(Input_data, test3)
{
	ASSERT_EQUAL(0, validValue(10, 9999));
}

CTEST(Input_data, test4)
{
	ASSERT_EQUAL(1, validValue(1, 10001));
}

CTEST(Input_data, test5)
{
	ASSERT_EQUAL(1, validValue(365, 10001));
}

CTEST(Input_data, test6)
{
	ASSERT_EQUAL(0, validValue(366, 10001));
}


CTEST(getsum, test7)
{
	ASSERT_EQUAL(9000, getsum(1, 10000));
}

CTEST(getsum, test8)
{
	ASSERT_EQUAL(9000, getsum(0, 10000));
}

CTEST(getsum, test9)
{
	ASSERT_EQUAL(9000, getsum(1, 10000));
}

CTEST(getsum, test10)
{
	ASSERT_EQUAL(10200, getsum(100, 10000));
}

CTEST(getsum, test11)
{
	ASSERT_EQUAL(10200, getsum(100, 10000));
}

CTEST(getsum, test12)
{
	ASSERT_EQUAL(11200, getsum(365, 10000));
}

CTEST(getsum, test13)
{
	ASSERT_EQUAL(10200, getsum(31, 10000));
}

CTEST(getsum, test14)
{
	ASSERT_EQUAL(9000, getsum(30, 10000));
}

CTEST(getsum, test15)
{
	ASSERT_EQUAL(10600, getsum(240, 10000));
}

CTEST(getsum, test16)
{
	ASSERT_EQUAL(11200, getsum(241, 10000));
}

CTEST(getsum, test17)
{
	ASSERT_EQUAL(10200, getsum(31, 10000));
}

CTEST(getsum, test18)
{
	ASSERT_EQUAL(10600, getsum(121, 10000));
}

CTEST(getsum, test19)
{
	ASSERT_EQUAL(10200, getsum(120, 10000));
}

CTEST(getsum, test20)
{
	ASSERT_EQUAL(10600, getsum(240, 10000));
}

CTEST(getsum, test21)
{
	ASSERT_EQUAL(11200, getsum(241, 10000));
}

CTEST(getsum, test22)
{
	ASSERT_EQUAL(11200, getsum(365, 10000));
}

CTEST(getsum, test23)
{
	ASSERT_EQUAL(10000, getsum(366, 10000));
}
