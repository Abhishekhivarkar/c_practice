#include <stdio.h>
#include <math.h>

int power(int base, int res){
 int result = 1;
 for(int i = 1; i<=res ; i++){
  result = result * base;
 }
 return result;
}

int main(){
 int i,l,getOne,makeCube,length,count = 0,sum = 0,temp,removeOne,temp1;
 
 printf("Enter 1 number : ");
 scanf("%d",&l);
 temp = l;
 while(l != 0){
  l = l / 10;
  count++;
 }
 l = temp;
 while(l != 0){
  getOne = l % 10;
  sum = sum + power(getOne,count);
  l = l / 10;
 }

 if(sum == temp){
  printf("%d is armstrong number",temp);
 }else{
  printf("%d is not armstrong number",temp);
 }
 }

