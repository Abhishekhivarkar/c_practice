#include <stdio.h>

int main(){
 int a[5],i,even = 0,odd = 0;
 
 for(i = 0;i < 5;i++){
  printf("Enter a five numbers : ");
  scanf("%d",&a[i]);
  if(a[i] % 2 == 0){
   even++;
  }else{
   odd++;
  }
 }
 
 printf("Even numbers : %d\n",even);
 printf("Even numbers : %d",odd);
}
