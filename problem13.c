
#include <stdio.h>

int main(){
 int a[6] = {1,2,3,2,4,3},length6,i,duplicate[3],j,k = 0;
 
 length6 = sizeof(a) / sizeof(a[0]);
 
 for(i = 0; i< length6; i++){
  for(j = i + 1; j< length6; j++){
   if(a[i] == a[j]){
    duplicate[k]= a[i];
    k++;
    break;
   }
  }
 }
 for(i = 0; i < 2; i++){
  printf("%d",duplicate[i]);
 }
}

