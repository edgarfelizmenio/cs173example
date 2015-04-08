
#include "componentB.h"
#include "runner.h"

int test_twoPowerOf1()
{
    _assert(powerOfTwo(1) == 2);
    return 0;
}

int test_twoPowerOf5()
{
    _assert(powerOfTwo(5) == 32);
    return 0;
}

int all_tests(){
    _verify(test_twoPowerOf1);
    _verify(test_twoPowerOf5);
}

