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


CTEST(getsum, test1)
{
	ASSERT_EQUAL(9000, itog(1, 10001));
}

CTEST(getsum, test2)
{
	ASSERT_EQUAL(-1, itog(0, 10001));
}

CTEST(getsum, test3)
{
	ASSERT_EQUAL(-1, itog(1, 9999));
}

CTEST(getsum, test4)
{
	ASSERT_EQUAL(103000, itog(100, 100001));
}

CTEST(getsum, test5)
{
	ASSERT_EQUAL(-1, itog(100, 9999));
}

CTEST(getsum, test6)
{
	ASSERT_EQUAL(11200, itog(365, 10001));
}

CTEST(getsum, test7)
{
	ASSERT_EQUAL(103000, itog(31, 100001));
}

CTEST(getsum, test8)
{
	ASSERT_EQUAL(81000, itog(30, 100001));
}

CTEST(getsum, test9)
{
	ASSERT_EQUAL(108000, itog(240, 100001));
}

CTEST(getsum, test10)
{
	ASSERT_EQUAL(115000, itog(241, 100001));
}

CTEST(getsum, test11)
{
	ASSERT_EQUAL(10200, itog(31, 10001));
}

CTEST(getsum, test12)
{
	ASSERT_EQUAL(10600, itog(121, 10001));
}

CTEST(getsum, test13)
{
	ASSERT_EQUAL(10200, itog(120, 10001));
}

CTEST(getsum, test14)
{
	ASSERT_EQUAL(10600, itog(240, 10001));
}

CTEST(getsum, test15)
{
	ASSERT_EQUAL(11200, itog(241, 10001));
}

CTEST(getsum, test16)
{
	ASSERT_EQUAL(11200, itog(365, 10001));
}

CTEST(getsum, test17)
{
	ASSERT_EQUAL(-1, itog(366, 10001));
}
