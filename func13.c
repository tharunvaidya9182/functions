//Write a function that accepts a character, if the character is a lower case alphabet its upper case equivalent is returned otherwise the unchanged character is returned.
#include<stdio.h>
char lowercase(char a);
char uppercase(char a);
int main(void){
char ch;
printf("enter the character: ");
scanf(" %c",&ch);
if(ch>='a' && ch<='z')
 printf("%c is uppercase: %c\n",ch,lowercase(ch));
else if(ch>='A' && ch<='Z')
  printf("%c is lowercase: %c\n",ch,uppercase(ch));
else
  printf("%c is invalid\n",ch);
}
char lowercase(char ch){
  if(ch >= 'a' && ch <= 'z'){
    return ch-32;
  }
  return ch;
}
char uppercase(char ch){
if(ch >= 'A' && ch <= 'Z'){
  return ch+32;
  }
  return ch;
}

    
