
#include "componentA.h"
#include "runner.h"

int test_divide10by2()
{
    _assert(divide(10,2) == 5);
    return 0;
}

int test_divide9by3()
{
    _assert(divide(9,3) == 3);
    return 0;
}

int test_divide5by2()
{
    _assert(divide(5,2) == 2);
    return 0;
}

int all_tests()
{
    _verify(test_divide10by2);
    _verify(test_divide9by3);
    _verify(test_divide5by2);
}

