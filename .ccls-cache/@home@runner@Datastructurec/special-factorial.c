#include <stdio.h>

int factorial(int n) {
  if (n == 1) {
    return 1;
  } else {
    return n * factorial(n - 2);
  }
}

int main(void) {
  int n;
  scanf("%d", &n);
  printf("%d\n", factorial(n));
}