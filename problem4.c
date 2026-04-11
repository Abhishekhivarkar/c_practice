#include <stdio.h>

int main(){
 int a[5],i,sum = 0;
 float average;
 for(i = 0;i < 5;i++){
  printf("Enter 5 numbers : ");
  scanf("%d",&a[i]);
  sum = sum + a[i];
 }
 average = (float)sum / 5;
 printf("average is %f",average);
}