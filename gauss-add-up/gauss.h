#define X2(x) x * x
#define GAUSS_ADD_UP(t) X2(t) / 2 + t / 2
#define GAUSS_ADD_UP_FROM(x, y) GAUSS_ADD_UP(y) - GAUSS_ADD_UP(x)

int gauss_add_up_slow (int start_val, int until) {
  int ret = 0;
  int counter = until;
  int _mo_start = start_val - 1;
  while (counter > _mo_start) {
    ret += counter;
    counter --;
  }
  return ret;
}
