//Write a function to find whether a character is alphanumeric.
#include<stdio.h>
char alphanumeric(char a);
int main(void){
char a;
printf("enter the char: ");
scanf(" %c",&a);
if(alphanumeric(a))
  printf("%c is alphanumeric\n",a);
else
  printf("%c is alphanumeric\n",a);
}

char alphanumeric(char a){
 if(('A' >= a && 'Z' <= a) || ('a' >= a && 'z' <= a) || (0>=a && 9<=a)){
  return 1;
  }
  else
  {
  return 0;
  }
}
