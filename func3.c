//Write a function prodDigits() that inputs a number and returns the product of digits of that number
#include<stdio.h>
int  prodDigits(int n);
int main(void){
int num,result;
printf("enter the number: ");
scanf("%d",&num);
result=prodDigits(num);
printf("product of digits=%d\n",result);
}
int prodDigits(int n){
int rem,prod=1;
while(n>0){
rem=n%10;
prod=prod*rem;
n=n/10;
}
return prod;
}
