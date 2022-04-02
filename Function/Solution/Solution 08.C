/*WAP to implement strlen. OR create function to count string length.
Name : Laxman Sirvi
Date : 01-04-22*/
#include<stdio.h>
#include<conio.h>
void len();
void main()
{
	clrscr();
	len();
	getch();
}
void len()
{
	char c[30];
	int i,j=0;
	printf("Enter any string : ");
	gets(c);
	for(i=0;c[i]!='\0';i++)
	{
		j++;
		if(c[i]==' ')
		{
			j--;
		}
	}
	printf("\nThe length of entered string is %d.",j);
}
