//ITERATIVE APPROACH

#include<stdio.h>
#include<stdlib.h>
int main(){
  int num, temp, rev=0 ;
  printf("Enter a number for checking palindrome\n");
  scanf("%d",&num);
  temp = num;
  while(temp > 0){
    rev = rev * 10 + temp % 10;
    temp /= 10;
  }
  if( num == rev){
    printf("A Palindrome Number\n");
  }
  else {
    printf("Not a Palindrome Number\n");
  }
  return 0;
}