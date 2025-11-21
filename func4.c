/*If all digits of a number n are multiplied by each other repeating with the product, the one digit number obtained at last is called the multiplicative digital root of n. The number of times digits need to be multiplied to reach one digit is called the multiplicative persistence of n.
example:
86 → 48 → 32 → 6     (MDR 6, MPersistence 3)  
341 → 12 → 2         (MDR 2, MPersistence 2)  
679 → 378 → 168 → 48 → 32 → 6   (MDR 6, MPersistence 5)
Using the function prodDigits() of previous exercise write functions MDR() and Mpersistence() that input a number and return its multiplicative digital root and multiplicative persistence respectively.*/
#include<stdio.h>
int prodDigits(int num);
int MDR(int num);
int Mpersistence(int num);
int main(void){
int num;
printf("enter the number: ");
scanf("%d",&num);
printf("MDR=%d\n",MDR(num));
printf("Mpersistence=%d\n",Mpersistence(num));
}
int prodDigits(int num){
  int prod=1;
  while(num>0){
  prod=prod*(num%10);
  num=num/10;
     }
  return prod;
  }
int MDR(int num){
  while(num>=10){
  num=prodDigits(num);
    }
  return num;
  }
int Mpersistence(int num){
  int count=0;
  while(num>=10){
  num=prodDigits(num);
  count++;
  }
  return count;
 }
