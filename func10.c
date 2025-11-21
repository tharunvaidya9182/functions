/*Write a function convert() that can convert inches to cms and vice versa.
The first argument should be the length to be converted and the second argument should be a character (‘i’ or ‘c’) denoting the measurement unit of the length given in first argument.*/
#include<stdio.h>
float convert(float length,char unit);
int main(void){
  float length,result;
  char unit;
  printf("enter the length: ");
  scanf("%f",&length);
  printf("enter the char: ");
  scanf(" %c",&unit);
  result=convert(length,unit);
  if(unit=='i'){
  printf("%.2f inches=%.2f cm\n",length,result);
  }else{
  printf("%.2f cm=%.2f inches\n",length,result);
  }
 } 
float convert(float length,char unit){
if(unit=='i')
  return length*2.54;
else
  return length/2.54;
}

