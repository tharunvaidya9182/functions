//Write a function findJulian() that returns Julian day of a date.
#include<stdio.h>
int isLeap(int y);
int isValid(int d,int m,int y);
int findJulian(int d,int m,int y);
int main(void){
  int d,m,y;
  printf("enter the date/month/year: ");
  scanf("%d %d %d",&d,&m,&y);
  if(isValid(d,m,y)){
    printf("%d/%d/%d is valid\n",d,m,y);
 } else{
    printf("%d/%d/%d is not valid\n",d,m,y);
    }
  int result=(findJulian(d,m,y));
     printf("Juliandays=%d\n",result);
}
int isValid(int d,int m,int y){
  int maxdays;
  if(y<1)
    return 0;
  if(m < 1|| m>12)
    return 0;
  if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    maxdays=31;
  else if(m==4||m==6||m==9||m==11)
    maxdays=30;
  else{
    if(isLeap(y))
      maxdays=29;
    else
      maxdays=28;
    }
    if(d<1||d>maxdays)
      return 0;
    return 1;
  }
int isLeap(int y){
   if((y%4==0&&y%100!=0)||y%400==0)
    return 1;
  else
    return 0;
}
int findJulian(int d,int m,int y){
  int daysinmonths[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
  int i,total=d;
  if(isLeap(y))
    daysinmonths[2]=29;
  for(i=1;i<m;i++){
  total=total+daysinmonths[i];
  }
  return total;
}
  
  
