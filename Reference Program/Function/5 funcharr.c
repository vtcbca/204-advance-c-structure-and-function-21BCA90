/* WAP to create user define function to print out the length of the string
   Date:27/04/2021
*/

#include<stdio.h>
#include<conio.h>

void lenstr(char []);// function with argument without return type
//int lenstr(); // function without argument with return type.
//int lenstr(char []); // function with argument with return type.
//void lenstr(); // function without arguemnt without return type.

void main()
{
   char s[30];
   int l;
   clrscr();
   printf("\nEnter your string:");
   gets(s);
  // l=lenstr(s); //function call, s is actual argument
   lenstr(s);
  // printf("\n String %s length is %d",s,l);
   getch();
}
/*int lenstr(char str[]) //function definition header,str is formal argument
{
   int i,len=0;
   for(i=0;str[i]!='\0';i++)
	 len++;
   return len;
} */
void lenstr(char str[])
{
   int i;
   for(i=0;str[i]!='\0';i++);
   printf("\nString %s length is %d",str,i);
}
