#include <stdio.h>
#include <assert.h>

#define TEST int main () { \
      printf ("START OF TEST");
#define END_TEST printf("\nTest finished - Good job!\nEND OF TEST\n"); \
        return 0; \
      }
#define UNIT(n) printf("\nUnit %d\n", n);
#define UNIT_END \
      printf("\nOK\n");
#define VOID(m) m;
