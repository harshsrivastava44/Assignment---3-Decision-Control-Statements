//12. Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main()
{

      char a;
      printf("enter the character : \n");
      scanf("%c",&a);
      if(a>='a'&&a<='z')
      {
        printf("Lowecase Alphabet");
      }
     if (a>='A'&&a<='Z')
     {
       printf("Uppercase Alphabet");
      }
     
      return 0;
      
    }