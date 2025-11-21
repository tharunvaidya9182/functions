/*Write a function to find the sum of this series up to n terms.
1 + 1/4 + 1/9 + 1/16 upto n */
#include<stdio.h>
float sumSeries(int n);
int main(void){
  int num;
  printf("enter the number: ");
  scanf("%d",&num);
  float result=sumSeries(num);
  printf("%.4f is the sum of %d terms",result,num);
}
float sumSeries(int n){
  int i;
  float sum=0.0;
  for(i=1;i<=n;i++){
    sum=sum+1.0/(i*i);
    }
    return sum;
  }

  
