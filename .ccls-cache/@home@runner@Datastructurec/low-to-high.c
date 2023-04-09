#include <stdio.h>

void jump_from_low_to_high(int low, int high) {
  if (low > high) {
    printf("\n");
    return;
  } else {
    printf("%d ", low);
    jump_from_low_to_high(low + 2, high);
  }
}

int main(void) {
  int low, high;
  scanf("%d%d", &low, &high);
  jump_from_low_to_high(low, high);
  return 0;
}