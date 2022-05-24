// Iterative Approach
#include <stdio.h>
// void reverse(int *, int);
void print(int *, int);
// int main()
// {
//   int size;
//   printf("Enter the size of an array\n");
//   scanf("%d", &size);
//   int arr[size];
//   printf("Enter the elements of the array\n");
//   for (int i = 0; i < size; i++)
//   {
//     scanf("%d", (arr + i)); // Can work with &arr[i] instead of *(arr + i)
//   }
//   // for(int i=0; i<size; i++){
//   //   printf("%d ", *(arr + i));//Same case, can use arr[i] instead of using what is being used here
//   // }
//   reverse(arr, size - 1);
//   print(arr, size - 1);
//   return 0;
// }
// void reverse(int *arr, int j)
// {
//   int i = 0, temp;
//   while (i < j)
//   {
//     temp = *(arr + i);
//     *(arr + i) = *(arr + j);
//     *(arr + j) = temp;
//     i++;
//     j--;
//   }
// }
void print(int *arr, int size)
{
  for (int i = 0; i <= size; i++)
  {
    printf("%d ", *(arr + i)); // Same case, can use arr[i] instead of using what is being used here
  }
}

//Recursive Approach
void swap( int *arr, int i, int j){
  int temp = *(arr + i);
  *(arr + i) = *(arr + j);
  *(arr + j) = temp;
}
void reverse( int *arr, int start, int end){
  if( start >= end)
    return;
  reverse( arr, start + 1, end - 1);
  swap(arr, start, end);
}
int main()
{
  int size;
  printf("Enter the size of an array\n");
  scanf("%d", &size);
  int arr[size];
  printf("Enter the elements of the array\n");
  for (int i = 0; i < size; i++)
  {
    scanf("%d", (arr + i)); // Can work with &arr[i] instead of *(arr + i)
  }
  reverse(arr, 0, size - 1);
  print(arr, size - 1);
  return 0;
}