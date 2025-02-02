/*Program to implement binary search on integers */

#include <stdio.h>

int main(void) {
 int a[100], n, i, j, temp,low,high,mid,key;
  printf("enter the number of elements\n");
  scanf("%d", &n);
  printf("enter %d elements\n", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  printf("the entered elements are:\n");
  for (i = 0; i < n; i++) {
    printf("%d\t", a[i]);
  }
  for (i = 1; i < n; i++) {
    for (j = 0; j < n - i; j++) {
      if (a[j] > a[j + 1]) {
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
  printf("\nwe have sorted the entered numbers in ascending order!\n");
  for (i = 0; i < n; i++) {
    printf("%d\t", a[i]);
  }
  printf("\n"); 
  printf("enter the element to be searched\n");
  scanf("%d",&key);
  low=0;
  high=n-1;
  while(low<=high)
    {
      mid=(low + high)/2;
      if(key==a[mid])
      {
        printf("sucessful search and element is found at position=%d\n\t\t\tTHANK YOU!",mid+1);
        exit(0);
      }
      if(key>a[mid])
      {
        low=mid+1;
      }
      else
      {
        high=mid-1;
      }
    }
  printf("unsucessful search\n");
  printf("\t\t\tTHANK YOU!");
}
  