#include <stdio.h>
#include <string.h>

char *binary_add(unsigned a, unsigned b, char *binary) {
  *binary = '\0';
  char copy_binary[100];
  int binary_num;
  int addition_num = 0;
  printf("%u %u:\n", a, b);
  if (a == 0 && b == 0) {
    sprintf(binary, "0");
    return binary;
  }
  while (a > 0 || b > 0) {
    binary_num = (a % 2) ^ (b % 2) ^ addition_num;
    printf("%u %u\n", a, b);
    int copy_addition_num = (a % 2 + b % 2 + addition_num >= 2) ? 1 : 0;
    addition_num = copy_addition_num;
    printf("%u %u", binary_num, copy_addition_num);
    sprintf(copy_binary, "%d%s", binary_num, binary);
    strcpy(binary, copy_binary);
    printf(" %s\n", binary);
    a /= 2;
    b /= 2;
  }
  if (addition_num == 1) {
    sprintf(binary, "%d%s", addition_num, binary);
  }
  return binary;
}
int main(void) {
  printf("log");
  char *binary;
  printf("log");
  printf("%s", binary_add(2409180406,3370010262, binary));
  printf("log");
  return 0;
}