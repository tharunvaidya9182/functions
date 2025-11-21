//Write a function isLeap() which inputs a year and returns 1 if the year is leap otherwise 0.
#include<stdio.h>
int isLeap(int year);
int main(void){
int year;
printf("enter the year: ");
scanf("%d",&year);
if(isLeap(year))
  printf("%d is the leap year\n",year);
else
  printf("%d is not leap year\n",year);
}
int isLeap(int year){
  if((year%4==0 && year%100!=0 ) || year %400==0)
    return 1;
  else
    return 0;
}
  
