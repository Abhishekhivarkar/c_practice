#include <stdio.h>

int main(){
 int a[5],i,sum = 0;
 for(i = 0; i < 5; i++){
  printf("Enter a numbers : ");
  scanf("%d",&a[i]);
  sum = sum + a[i];
 }
 printf("sum is : %d",sum);
} 
