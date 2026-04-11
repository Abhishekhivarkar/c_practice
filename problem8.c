#include <stdio.h>

int main(){
 int a[5] = {1,2,3,4,5},i;
 int target;
 printf("Enter a number for search : ");
 scanf("%d",&target);
 for(i = 0;i < 5;i++){
  if(a[i] == target){
   printf("Number found");
   break;
  }
  if(i == 4){
   printf("nor found");
  }
 }
   

}
