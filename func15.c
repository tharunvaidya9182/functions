//Write a program to print twin primes less than 1000. If two consecutive odd numbers are both prime  then they are known as twin primes.
#include<stdio.h>
#include<math.h>
int isprime(int n);
int main(void){
  int i;
  for(i=2;i<=1000;i++){
    if(isprime(i) && isprime(i+2)){
      printf("(%d,%d)\n",i,i+2);
      }
   }
}
int isprime(int n){
  int i;
  if(n<2)
    return 0;
  for(i=2;i<=sqrt(n);i++){
    if(n%i==0)
      return 0;
     }
     return 1;
  }
  
