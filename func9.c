//Using the function sumPdivisors().write a single line function isPrime() containing only a return statement. This function should return 1 if the number is prime and 0 otherwise.
#include<stdio.h>
int sumPdivisors(int n);
int isPrime(int n);
int main(void){
  int num;
  printf("enter the number: ");
  scanf("%d",&num);
  if(isPrime(num)){
    printf("%d is prime number\n",num);
    }else{
    printf("%d is not prime number\n",num);
    }
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
int isPrime(int n){
  if(sumPdivisors(n)==1){
      return 1;
    }else{
    return 0;
    }
  }
