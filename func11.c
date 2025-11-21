/*Write a function Product() that accepts two integers and returns their product.
Don’t use the * operator. Similarly make two more functions Quotient() and Remainder() that accept two integers and return the quotient and remainder respectively, without the use of / and % operators.*/
#include<stdio.h>
int product(int a,int b);
int quotient(int a,int b);
int Remainder(int a,int b);
int main(void){
  int x,y;
  printf("enter the first_value: ");
  scanf("%d",&x);
  printf("enter the second_value: ");
  scanf("%d",&y);
  printf("%d*%d=%d\n",x,y,product(x,y));
  printf("%d/%d=%d\n",x,y,quotient(x,y));
  printf("%d%%%d=%d\n",x,y,Remainder(x,y)); 9
}
int product(int a,int b){
  int i,prod=0;
  for(i=0;i<b;i++){
    prod=prod+a;
     }
    return prod;
  }
int quotient(int a,int b){
  int count=0;
    while(a>=b){
      a=a-b;
      count=count+1;
      }
    return count;
  }
int Remainder(int a,int b){
  while(a>=b){
    a=a-b;
    }
    return a;
  }
      
    
  

