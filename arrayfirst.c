#include <stdio.h>
int
main ()
{
  int arr[5];
  for (int i = 0; i <= 4; i++)
    {
      printf ("Enter marks for student number %d:", i);
      scanf ("%d", &arr[i]);
    }
    int product=1;
  for (int i = 0; i <= 4; i++){
       product=product*arr[i];
  }
  printf("Product of array is :%d",product);
  return 0;
}