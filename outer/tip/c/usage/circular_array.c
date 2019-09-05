/*
 * 方法一
 * 利用for和sizeof
 */

int i;
int arr[5];
for(i = 0; i<sizeof(arr)/sizeof(arr[0]); i++)
  arr[i] = i;
