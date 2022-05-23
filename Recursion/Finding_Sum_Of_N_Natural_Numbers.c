//ITERATIVE APPROACH
#include<stdio.h>
#include<stdlib.h>
// int main(){
//   int ans = 0;
//   int num;
//   printf("Enter the no upto which sum of natural numbers need to be found\n");
//   scanf("%d",&num);
//   for(int i=1; i<=num; i++){
//     ans += i;
//   }
//   printf("The sum is %d", ans);
//   return 0;
// }

//RECURSIVE APPROACH
int sum_n_natural_nos(int num){
  if( num == 1){
    return 1;
  }
  return num + sum_n_natural_nos(num - 1);
}
int main(){
  int num,ans;
  printf("Enter the no upto which sum of natural numbers need to be found\n");
  scanf("%d",&num);

  ans = sum_n_natural_nos(num);
  printf("The sum is %d", ans);
  return 0;
}