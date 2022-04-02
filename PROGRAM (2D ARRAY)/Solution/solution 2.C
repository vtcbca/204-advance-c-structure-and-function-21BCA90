/* Write a program to enter two 3*3 matrix & check it's a diagonal matrix or not.
Name : Laxman Sirvi
Date : 26-02-22*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j,c=0;
	clrscr();
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("enter element for a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	clrscr();
	printf("You have entered matrix is : \n");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			if(i!=j&&a[i][j]!=0)
			c=1;
		}
		printf("\n");
	}
	if(c!=1)
		printf("It's a diogonal matrix.");
	else
		printf("It's not a diogonal matrix.");
	getch();
}