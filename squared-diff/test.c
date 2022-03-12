#include "../include/tests.h"
#include "../include/tests_etime.h"
#include "sdif.h"

TEST {
  UNIT(1) {
    assert (SQD(100, 30) == 9100);
    assert (SQD_SLOW(100, 30) == 9100);
    assert (SQD(100, 30) == SQD_SLOW(100, 30));
  }
  UNIT(2) {
    UNIT(201)
    TEST_ETIME {
      VOID(SQD(128, 64))
    }
    UNIT(202)
    TEST_ETIME {
      VOID(SQD_SLOW(128, 64))
    }
  }
}
