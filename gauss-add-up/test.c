#include "../include/tests.h"
#include "gauss.h"

TEST {
  UNIT(1) {
    assert (GAUSS_ADD_UP(100) == 5050);
    assert (GAUSS_ADD_UP(100) == gauss_add_up_slow(1, 100));
  }
  UNIT(2) {
    assert (GAUSS_ADD_UP_FROM(2, 10) == 54);
    assert (GAUSS_ADD_UP_FROM(2, 10) == gauss_add_up_slow(2, 10));
  }
}
