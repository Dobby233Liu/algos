#include <stdio.h>
#include <assert.h>

#pragma clang diagnostic ignored "-Wunused-value"

void test();

#define TEST void test()

#define UNIT(n) printf("\nUnit %d\n", n);

#define VOID(P) (P);
#define UNUSED VOID

int main() {
      test();
      return 0;
}
