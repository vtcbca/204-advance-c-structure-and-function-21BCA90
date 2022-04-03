/*Write a program to enter 5 string & print in assinding order.
Name : Laxman Sirvi
Date : 26-02-22*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,j;
	char a[5][25],b[25];
	clrscr();
	puts("Enter Strings any five string : ");
	for(i=0;i<5;i++)
	gets(a[i]);
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(strcmp(a[i],a[j])>0)
			 {
				 strcpy(b,a[i]);
				 strcpy(a[i],a[j]);
				 strcpy(a[j],b);
			 }
		}
	}
	printf("\n\n\nOrder of sorted strings : \n");
	for(i=0;i<5;i++)
	puts(a[i]);
	getch();
}