/*Write a program to enter 5 string & search user inputed string is avalibel or not.
Name : Laxman Sirvi
Date : 26-02-22*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,k=0;
	char a[5][20],b[20];
	clrscr();
	printf("Enter five names :\n");
	for(i=0;i<5;i++)
		gets(a[i]);
	for(i=0;i<5;i++)
		puts(a[i]);
	clrscr();
	printf("Enter string which you want to serch :");
	gets(b);
	for(i=0;i<5;i++)
	{
		if(strcmp(a[i],b)==0)
			k=1;
	}
	if(k==1)
		printf("Yes it's avilable in inputed string.");
	else
		printf("It's not avilable in inputed string.");
	getch();
}