#include <stdio.h>

int main(){
 int a[5] = {70,50,30,60,90},i;
 int firstLargest = a[0];
 int secondLargest;
 int length = sizeof(a) / sizeof(a[0]);
 for(i = 1; i<length; i++){
 if(a[i] > firstLargest){
  secondLargest = firstLargest;
  firstLargest = a[i];
 }
 }
  printf("%d firstLargest\n",firstLargest);
printf("%d secondLargest",secondLargest);
}
