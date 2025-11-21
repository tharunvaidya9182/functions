//Write a function sumPdivisors() that finds the sum of proper divisors of a number.proper divisors of a number are those number by which the number is divisible,except the number itself ?
#include<stdio.h>
int sumPdivisors(int num);
int main(void){
int num;
printf("enter the number: ");
scanf("%d",&num);
printf("sum of proper divisors of %d is %d\n",num,sumPdivisors(num));
return 0;
}
int sumPdivisors(int num){
int i,sum=0;
for(i=1;i<num;i++){
  if(num%i==0){
    sum=sum+i;
     }
   }
 return sum;
}

