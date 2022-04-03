/*WAP to create UDF sort() to sorting 5 integer array.
Name : Laxman Sirvi
Date : 01-04-22*/
#include<stdio.h>
#include<conio.h>
void sort();
void main()
{
	clrscr();
	sort();
	getch();
}
void sort()
{
	int a[5],b,i,j;
	for(i=0;i<5;i++)
	{
		printf("Enter any integer value : ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				b=a[i];
				a[i]=a[j];
				a[j]=b;
			}
		}
	}
	printf("\n\n\nSorted in accending order :\n\n");
	for(i=0;i<5;i++)
	{
		printf("%d,",a[i]);
	}
	printf("\b.");
}