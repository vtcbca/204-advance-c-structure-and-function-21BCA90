/* WAP to create UDF evenOdd and check number is even or odd.
Name : Laxman Sirvi
Date :31-03-22*/
#include<stdio.h>
#include<conio.h>
void evenOdd();
void main()
{
	clrscr();
	evenOdd();
	getch();
}
void evenOdd()
{
	int a;
	printf("Enter any integer value : ");
	scanf("%d",&a);
	if(a%2==0)
		printf("%d is even No.",a);
	else
		printf("%d is odd No.",a);
}