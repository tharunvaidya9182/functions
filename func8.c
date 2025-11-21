//8.Write a single function to print both amicable pairs and perfect numbers.
#include<stdio.h>
int sumPdivisors(int num);
int main(void){
int start,end;
printf("enter the start number: ");
scanf("%d",&start);
printf("enter the end number: ");
scanf("%d",&end);
printf("amicable pairs between %d and %d\n",start,end);
int b;
for(int a=start;a<=end;a++){
  b=sumPdivisors(a);
  if(b>a && b<=end){
    if(sumPdivisors(b)==a){
      printf("%d and %d\n",a,b);
     }     
    }
  }
printf("perfect numbers between %d and %d\n",start,end);
for(int i=start;i<=end;i++){
  if(sumPdivisors(i)==i){
    printf("%d ",i);
    }
  }
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

