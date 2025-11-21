//Write a function to find difference of two dates. Use functions isValid(), isLeap(), and findJulian(), cmpDate() 
#include<stdio.h>
int isValid(int d,int m,int y);
int isLeap(int y);
int cmpDate(int d1,int d2,int m1,int m2,int y1,int y2);
int findJulian(int d,int m,int y);
int dateDifference(int d1,int d2,int m1,int m2,int y1,int y2);
int daysinYear(int y);
int main(void){
  int d1,d2,m1,m2,y1,y2;
  printf("enter the date/month/year: ");
  scanf("%d %d %d",&d1,&m1,&y1);
  printf("enter the date/month/year: ");
  scanf("%d %d %d",&d2,&m2,&y2);
  if(!isValid(d1,m1,y1)|| !isValid(d2,m2,y2)){
     printf("Invalid,dates\n");
     return 0;
  }
  int result=cmpDate(d1,d2,m1,m2,y1,y2);
  if(result==1){
    printf("date1 is before date2\n");
 } else if(result==-1){
    printf("date2 is before date1\n");
  }else{
    printf("both are same");
  }
  int diff=dateDifference(d1,d2,m1,m2,y1,y1);
  printf("Difference=%d days\n", diff);
}
int isValid(int d,int m,int y){
int maxdays;
  if(y<1)
    return 0;
  if(m<1 || m>12)
    return 0;
  if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
    maxdays=31;
  else if(m==4 || m==6 || m==9 || m==11)
    maxdays=30;
  else
  {
    if(isLeap(y))
      maxdays=29;
    else
      maxdays=28;
   }
    if(d<1 || d>maxdays)
      return 0;
    return 1;
  }
int isLeap(int y){
  if((y%4==0 && y%100!=0)|| y%400==0)
    return 1;
  else
    return 0;
  }
int cmpDate(int d1,int d2,int m1,int m2,int y1,int y2){
  if(d1<d2)
    return 1;
  if(d1>d2)
    return -1;
  if(m1<m2)
    return 1;
  if(m1>m2)
    return -1;
  if(y1<y2)
    return 1;
  if(y1>y2)
    return -1;
  return 0;
}
int findJulian(int d,int m,int y){
  int dateinmonths[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
  int i,total=d;
  if(isLeap(y))
    dateinmonths[2]=29;
  for(i=0;i<m;i++){
    total=total+dateinmonths[i];
  }
  return total;
}
int daysinYear(int y){
  return isLeap(y) ? 366 : 365;
  }
int dateDifference(int d1,int d2,int m1,int m2,int y1,int y2){
  
    int jul1,jul2;
    if(cmpDate(d1,d2,m1,m2,y1,y2)==-1){
      int t;
        t=d1; d1=d2; d2=t;
        t=m1; m1=m2; m2=t;
        t=y1; y1=y2; y2=t;
       }
       jul1=findJulian(d1,m1,y1);
       jul2=findJulian(d2,m2,y2);
       if(y1==y2)
          return jul2-jul1;
       int diff = daysinYear(y1)-jul1;
       int y;
        for(y=y1+1;y<y2;y++)
          diff=diff+daysinYear(y);
        diff=diff+jul2;
        return diff;
        }
        
      
  
