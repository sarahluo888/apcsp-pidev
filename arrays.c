#include <stdio.h>

int arrayAdd(int* arr, int s, int n){

	for (int i = 0; i < s; i++){
arr[i]=arr[i]+n;
printf("function: %d\n", arr[i]);
}
}

int main()
{
  int arr[100];
  for (int i = 0; i < 100; i++)
  {
    arr[i] = i * i;
printf("%d\n", arr[i]);
  }
arrayAdd(arr, 100, 3);

return 0;

}
