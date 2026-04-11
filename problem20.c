#include <stdio.h>


int main(){
 int i,j[11],k[11],l,m,n,o;
 
 printf("Enter 1 number : ");
 scanf("%d",&l);
 printf("Enter 2 number : ");
 scanf("%d",&m);
 
 for(i = 1; i <= 10; i++){
  j[i] = l * i ;
  k[i] = m * i ;
 }
 
 for(n = 1; n <= 10;n++){
  for(o = 1; o <= 10;o++ ){
   if(j[n] == k[o]){
    printf("least mustiplier found : %d",j[n]);
    return 0;
   }
  }
 }
}