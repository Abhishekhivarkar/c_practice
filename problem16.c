#include <stdio.h>

int main() {

 int a[10], i,n = 3,m = 4,res = 1;
 for(i = 1; i <= n; i++){
  res = res * m;
 }
 printf("%d",res);
}