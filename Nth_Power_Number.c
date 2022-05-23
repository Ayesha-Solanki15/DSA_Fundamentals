// This algo works in O(pov) time complexity and in case of recursion O(pov) space complexity....

// Iterative approach

#include <stdio.h>
#include <math.h>
// int main()
// {
//   int num, pow;
//   long long ans = 1;
//   int i;
//   printf("Enter a num and its power\n");
//   scanf("%d %d", &num, &pow);
//   for (i = 1; i <= pow; i++)
//   {
//     ans *= num;
//   }
//   printf("Answer is: %lld", ans);
//   return 0;
// }

// 2nd Approach

// int main(){
//   int num, pov;
//   long long ans ;
//   printf("Enter a num and its power\n");
//   scanf("%d %d", &num, &pov);
//   ans = pow(num, pov);
//   printf("Answer is: %lld", ans);
//   return 0;
// }

// Recursive Approach
 long long int calcPower(int num, int pov){
   if(pov == 0){
     return 1;
   }
   return num * calcPower(num, pov - 1);
 }
 int main(){
   int num, pov;
   long long ans ;
   printf("Enter a num and its power\n");
   scanf("%d %d", &num, &pov);
   ans = calcPower(num, pov);
   printf("Answer is : %lld", ans);
   return 0;
 }

// ***Calculating the nth power of a num in O(logn) complexity***
// long long int calcPower(int num, int pov)
// {
//   long long int partialAns;
//   if (pov == 0)
//   {
//     return 1;
//   }
//   partialAns = pow(num, pov / 2);
//   if(pov % 2){
//     return num * partialAns * partialAns;
//   }
//   return partialAns * partialAns;
// }
// int main()
// {
//   int num, pov;
//   long long ans;
//   printf("Enter a num and its power\n");
//   scanf("%d %d", &num, &pov);
//   ans = calcPower(num, pov);
//   printf("Answer is : %lld", ans );
//   return 0;
// }
