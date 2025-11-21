//Write a function cubesum() that accepts an integer and returns the sum of the cubes of individual digits of that number. Use this function to make functions PrintArmstrong() and isArmstrong() to print Armstrong numbers and to find whether a number is an Armstrong number
#include<stdio.h>
int cubesum(int a);
int isArmstrong(int a);
int printArmstrong(void);
int main(void){
int num,result;
printf("enter the number: ");
scanf("%d",&num);
result=cubesum(num);
printf("cube sum =%d\n",result);
if(isArmstrong(num)){
printf("%d is Armstrong\n",num);
}else{
printf("%d is not Armstrong\n",num);
 }
 printArmstrong();
}
int cubesum(int a){
int sum=0,rem;
 while(a>0){
 rem=a%10;
 sum=sum+(rem*rem*rem);
 a=a/10;
  }
  return sum;
}
int isArmstrong(int a){
  if(cubesum(a)==a){
    return 1;
  }else{
  return 0;
  }
}
int printArmstrong(void){
  int i;
  for(i=1;i<=1000;i++){
    if(isArmstrong(i))
      printf("%d ",i);
      }
      printf("\n");
    }
