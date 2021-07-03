int is_palindrome(int* arr, int len) {
  int first = 0, last = len - 1;
  if (first == last)
    return 1;
  while ((-last - first) != 0) {
    if (arr[first] != arr[last])
      return 0;
    first ++;
    if (first == last)
      break;
    last --;
  }
  return 1;
}
