//WRITE A FUNCTION THAT INPUTS A NUMBER AND THE PRINTS THE MULTIPLICATION OF TABLE OF THAT NUMBER
#include<stdio.h>
int table(int a);
int main(void){
  int number;
  printf("enter the number: ");
  scanf("%d",&number);
  table(number);
  }
int table(int a){
    int i,sum;
    for(i=1;i<=10;i++){
      sum=a*i;
      printf("%d X %d = %d\n",a,i,sum);
      }
    }

