//Write a function isValid() to find whether a date is valid. 
#include<stdio.h>
int isvalid(int d,int m,int y);
int main(void){
  int d,m,y;
  printf("enter the data/month/year: ");
  scanf("%d %d %d",&d,&m,&y);
  if(isvalid(d,m,y))
    printf("%d/%d/%d is valid", d,m,y);
  else
    printf("%d/%d/%d is not valid",d,m,y);
}
int isvalid(int d,int m,int y){
int maxdays;
  if(y<1)
    return 0;
  if(m<1 || m>12)
    return 0;
  if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    maxdays=31;
  else if(m==4|m==6||m==9||m==11)
    maxdays=30;
  else
    {
      if((y%4==0 && y%100!=0) || y%400==0)
      {
      maxdays=29;
      }else{
      maxdays=28;
      }
    }
  if(d<1 || d>maxdays)
    return 0;
  return 1;
 }
  
    
  
