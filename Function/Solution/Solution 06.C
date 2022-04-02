/*Write a UDF input() which take 5 integer values and pass to the even() which print even number from it using the concept of nested funtion.
Name : Laxman Sirvi
Date : 01-04-22*/
#include<stdio.h>
#include<conio.h>
void input();
void even(int []);
void main()
{
	clrscr();
	input();
	getch();
}
void input()
{
	int a[5],i;
	for(i=0;i<5;i++)
	{
		printf("Enter any integer value : ");
		scanf("%d",&a[i]);
	}
	even(a);
}
void even(int x[])
{
	int i,c=0;
	for(i=0;i<5;i++)
	{
		if(x[i]%2==0)
		{
			printf("%d,",x[i]);
			c++;
		}
	}
	if(c==1)
		printf("\b is even No. that you entered.");
	else
		printf("\b are even No. that you entered.");
}