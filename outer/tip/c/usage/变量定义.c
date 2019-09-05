#include <stdio.h>

int main()
{
    int i = 2;
    int j = 3;
    int k = 5;
    int arr[] = {1,2,i*j,i*k,j*k};

    int cy;
    for (cy = 0; cy < sizeof(arr)/sizeof(arr[0]); cy++)
      {
        printf("%d\n", arr[cy]);
      }

    return 0;
}
