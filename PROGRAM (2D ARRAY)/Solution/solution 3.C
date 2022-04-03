/*Weite a program to enter two 3*3 matrix & print multiplication of it.
Name : Laxman Sirvi
Date : 26-02-22*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter value for element a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter value for element b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	clrscr();
	printf("Matrix a is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%2d  ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nMatrix b is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%2d  ",b[i][j]);
		}
		printf("\n");
	}
	printf("\nMultiplication  of two matrix is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=0;
			for(k=0;k<3;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%2d  ",c[i][j]);
		}
		printf("\n");
	}
	getch();
}
