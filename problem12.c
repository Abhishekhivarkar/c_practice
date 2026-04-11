
#include <stdio.h>

int main(){
 int a[3], b[3],c[6],length3,length6,i;
 length3= sizeof(a) / sizeof(a[0]);
 length6 = sizeof(c) / sizeof(c[0]);
 
 for(i = 0; i < length3; i++){
  printf("Enter 3 elements of a : ");
  scanf("%d",&a[i]);
  c[i] = a[i];
 }
 
 for(i = 0; i < length3; i++){
  printf("Enter 3 elemenys of b : ");
  scanf("%d",&b[i]);
  c[i + 3] = b[i];
 }
 
 for(i = 0; i < length6; i++){
  printf(" %d",c[i]);
 }
}

