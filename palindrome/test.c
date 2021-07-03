#include "../include/tests.h"
#include "pldrm.h"

int a[8] = {1, 2, 3, 4, 4, 3, 2, 1};
int b[8] = {1, 2, 3, 4, 5, 6, 7, 8};
int c[1] = {1};
int d[2] = {1, 1};

TEST
  assert (is_palindrome(a, 8));
  assert (!is_palindrome(b, 8));
  assert (is_palindrome(c, 1));
  assert (is_palindrome(d, 2));
END_TEST
