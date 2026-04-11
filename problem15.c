#include <stdio.h>

int main() {

 int a[10], i,n = 10,res = 1;
 for(i = 1; i <= n; i++){
  if(n < 1){
   return 1;
  }
  res *= i;
  
 }
 printf("%d",res);
}