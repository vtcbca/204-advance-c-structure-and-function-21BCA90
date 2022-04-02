/* wap to enter two 3*3 matrix and print the sum of it
Name : Laxman Sirvi
Date : 26-02-22*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],b[3][3],i,j,c[3][3];
	clrscr();
	//logic input value into 2d array
	for(i=1;i<=3;i++) //row
	{
		for(j=1;j<=3;j++)//column
		{
			printf("\n Enter value a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=3;i++) //row
	{
		for(j=1;j<=3;j++)//column
		{
			printf("\n Enter value b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	//logic print 2d array
	printf("first matrix is \n");
	for(i=1;i<=3;i++) //row
	{
		for(j=1;j<=3;j++)//column
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
	printf("second matrix is \n");
	for(i=1;i<=3;i++) //row
	{
		for(j=1;j<=3;j++)//column
		{
			printf("%d \t",b[i][j]);
		}
		printf("\n");
	}
	// sum of matrix
	clrscr();
	printf("Sum of both matrix is \n");
	for(i=1;i<=3;i++) //row
	{
		for(j=1;j<=3;j++)//column
		{
			c[i][j]= a[i][j]+b[i][j];
			printf("%d \t",c[i][j]);
		}
		printf("\n");

	}
	getch();
}