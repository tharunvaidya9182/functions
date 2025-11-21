/*5.A number is called perfect if the sum of proper divisors of that number is equal to the number.
For example 28 is a perfect number, since 1+2+4+7+14 = 28. Write a program to print all the perfect numbers in a given range.*/
#include<stdio.h>
int sumPdivisors(int n);
int main(void){
int i,start,end;
printf("enter the start number: ");
scanf("%d",&start);
printf("enter the end number: ");
scanf("%d",&end);
  for(i=start;i<=end;i++){
    if(sumPdivisors(i)==i){
      printf("%d ",i);
      }
    }
    return 0;
   }
int sumPdivisors(int n){
  int i,sum=0;
  for(i=1;i<n;i++){
    if(n%i==0){
      sum=sum+i;
      }
     } 
      return sum;
 }
