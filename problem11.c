
#include <stdio.h>

int main(){
 int a[5] = {1,2,3,4,5},i,b[5];
 int length = sizeof(a) / sizeof(a[0]);
 for(i = 0; i <length; i++){
  b[i] = a[i];
 }
 for(i = 0; i<length;i++){
  printf("%d",b[i]);
 }
}

