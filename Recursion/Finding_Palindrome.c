//ITERATIVE APPROACH

#include<stdio.h>
#include<stdlib.h>
// int main(){
//   int num, temp, rev=0 ;
//   printf("Enter a number for checking palindrome\n");
//   scanf("%d",&num);
//   temp = num;
//   while(temp > 0){
//     rev = rev * 10 + temp % 10;
//     temp /= 10;
//   }
//   if( num == rev){
//     printf("A Palindrome Number\n");
//   }
//   else {
//     printf("Not a Palindrome Number\n");
//   }
//   return 0;
// }

//Recursive Approach
int rev(int num){
  int rem;
  static int sum = 0;
  if( num != 0){
    rem = num % 10;
    sum = sum * 10 + rem;
    rev(num / 10);
  }
  else {
    return sum;
  }
  return sum;
}
int findPalindrome(int num){
  if( num == rev(num)){
    return 1;
  }
  return -1;
}
int main(){
  int num, ans;
  printf("Enter a number for checking palindrome\n");
  scanf("%d",&num);
  ans = findPalindrome(num);
  if( ans == 1){
    printf("Palindrome Number\n");
  }
  else {
    printf("Not a Palindrome Number\n");
  }
  return 0;
}