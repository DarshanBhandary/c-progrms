/* Program to */

#include <stdio.h>

int main(void) {
  int i, n, a[100], even = 0;
  printf("enter the no. of elements\n");
  scanf("%d", &n);
  printf("enter %d elements:\n", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  for (i = 0; i < n; i++) {
    if (a[i] % 2 == 0) {
      even = even + a[i];
    }
  }
  printf("sum of even integers is %d\n", even);
}