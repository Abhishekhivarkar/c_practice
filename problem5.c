#include <stdio.h>

int main(){
 int a[5],i,sum = 0;
 int min = a[0];
 for(i = 0;i < 5;i++){
  printf("Enter a five numbers : ");
  scanf("%d",&a[i]);
  if(a[i] < min){
   min = a[i];
  }
 }
 printf("%d",min);
}
