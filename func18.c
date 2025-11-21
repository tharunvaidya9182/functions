 //Write a function cmpDate() to compare two dates, it should return 1 if Date1 is before Date2, –1 if Date2 is before Date1 and 0 if dates are same.
#include<stdio.h>
int cmpDate(int d1,int d2,int m1,int m2,int y1,int y2);
int isValid(int d,int m,int y);
int main(void){
  int d1,m1,y1,d2,m2,y2,result;
  printf("enter the date/month/year: ");
  scanf("%d %d %d",&d1,&m1,&y1);
  printf("enter the date/month/year: ");
  scanf("%d %d %d",&d2,&m2,&y2);
  result=cmpDate(d1,d2,m1,m2,y1,y2);
  if(result==1)
    printf("Date1 is before Date2\n");
  else if(result==-1)
    printf("Date2 is before Date1\n");
  else
    printf("dates are same\n");
}
int isValid(int d,int m,int y){
int maxdays;
  if(y<1)
    return 0;
  if(m<1||m>12)
    return 0;
  if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
    maxdays=31;
  else if(m==4 || m==6 || m==9 || m==11)
    maxdays=30;
  else 
  {
    if((y%4==0 && y%100!=0) || y%400==0)
     maxdays=29;  
    else
      maxdays=28;
     }
  if(d<1 || d>maxdays)
    return 0;
  return 1;
 }
int cmpDate(int d1,int d2,int m1,int m2,int y1,int y2){
  if(d1<d2)
    return 1;
  if(d1>d2)
    return -1;
  if(m1<m2)
    return 1;
  if(m1>m1)
    return -1;
  if(y1<y2)
    return 1;
  if(y1>y2)
    return -1;
  return 0;
}
    


