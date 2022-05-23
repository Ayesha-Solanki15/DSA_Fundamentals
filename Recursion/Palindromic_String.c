//ITERATIVE APPROACH

//Method - 1:
#include<stdio.h>
#include<string.h>
// int main(){
//   char str[20], temp[20] ;
//   printf("Enter a string \n");
//   scanf("%s",&str);
//   strcpy(temp,str);
//   strrev(temp);
//   // printf("%s\n", str);
//   // printf("%s\n", temp);
//   if( strcmp(str, temp) == 0){
//     printf("A Palindromic String\n");
//   }
//   else {
//     printf("Not a Palindromic String\n");
//   }
//   return 0;
// }

//Method - 2:
// #include<stdio.h>
// #include<string.h>
// int main(){
//   char str[20], temp, i ;
//   int flag= 1;
//   printf("Enter a string \n");
//   scanf("%s",&str);
//   int strLength = strlen(str);
//   // printf("%d\n",strLength);
//   for(i=0; i<strLength - 1 / 2; i++){
//     if(str[i] != str[strLength - 1 -i]){
//       flag = 0;
//       break;
//     }
//   }  
//   if( flag ){
//     printf("A Palindromic String\n");
//   }
//   else {
//     printf("Not a Palindromic String\n");
//   }
//   return 0;
// }

//RECURSIVE APPROACH

int findPalindrome(char str[20], int start, int end){
  if(start >= end){
    return 1;
  }
  if(start < end && str[start] == str[end]){
    return findPalindrome(str, start+1, end-1);
  }
  else  {
    return -1;
  }  
}
int main(){
  char str[20];
  printf("Enter a string \n");
  scanf("%s",&str);
  int ans = findPalindrome(str,0, strlen(str)-1);
  if(ans == -1){
    printf("Not a Palindromic String\n");
  }
  else {
    printf("Palindromic String\n");
  }
  return 0;
}
