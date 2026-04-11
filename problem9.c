#include <stdio.h>

int main(){
 int a[5] = {1,2,1,4,1},i;
 int target,count = 0;
 printf("Enter a number for search : ");
 scanf("%d",&target);
 for(i = 0;i < 5;i++){
  if(a[i] == target){
   count++;
  }
 }
  printf("%d times",count);

}
