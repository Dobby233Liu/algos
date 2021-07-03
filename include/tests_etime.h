#include <time.h>

clock_t etime = 0;
float sor = 0.0f;

#define TEST_ETIME \
        etime = clock();
#define TEST_ETIME_END \
        sor = (double)(clock() - etime) / CLOCKS_PER_SEC; \
        printf ("Took %f seconds\n", sor);
