
#include <stdio.h>

int main(){
 int a[5],total = 0;
 float result;
 for (int i = 0; i < 5; i++){
  printf("Enter a subject marks : ");
  scanf("%d",&a[i]);
  total = total + a[i];
 }
 result = (float)total / 500 * 100;
 printf("%f",result);
}

