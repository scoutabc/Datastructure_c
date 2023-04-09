#include <stdio.h>

int sum(int low,int high){
  if (high < low) {
    return 0;
  }
  return high + sum(low,high - 1);
}

int main(void) {
  int low,high;
  scanf("%d%d",&low,&high);
  printf("%d\n",sum(low,high));
  return 0;
}