
#include "runner.h"

extern int all_tests();

int tests_run = 0;

int main(int argc, char **argv)
{
    int result = all_tests();

    if (result != 0)
        printf("PASSED\n");
    else
        printf("FAILED\n");

    printf("Tests run: %d\n", tests_run);

    return result != 0;    
}

