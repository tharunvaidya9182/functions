/*Two different numbers are called amicable numbers if the sum of the proper divisors of each is equal to the other number.
For example 220 and 284 are amicable numbers.
Sum of proper divisors of 220 = 1+2+ 4+ 5+ 10+ 11+ 20+ 22+ 44+ 55+110 = 284
Sum of proper divisors of 284 = 1+ 2+ 4+ 71+ 142 = 220.
Write a function to print pairs of amicable numbers in a range.*/
#include<stdio.h>
int sumPdivisors(int num);
int main(void){
  int start,end;
  printf("enter the number: ");
  scanf("%d",&start);
  printf("enter the number: ");
  scanf("%d",&end);
  int b;
  for(int a=start;a<=end;a++){
    b=sumPdivisors(a);
    if(b>a&&b<end){
      if(sumPdivisors(b)==a){
        printf("%d and %d",a,b);
        }
      }
     }
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
  
