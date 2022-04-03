/*Write a program to create inventory and insert 3 inventory detail.
Date : 30-03-2022
Name : laxman sirvi*/
#include<stdio.h>
#include<conio.h>
struct inventory
{
	int id,qty,rate,net;
	char name[3][50];
}i[3];
void main()
{
	int j;
	clrscr();
	for(j=1;j<=3;j++)
	{
		if(j==1)
		{
			printf("--------------------------------------------------------------------------------\n");
			printf("\t\t\t\tINVENTORY\n");
			printf("--------------------------------------------------------------------------------\n");
			printf("Enter 1st I_Id : ");
			scanf("%d",&i[j].id);
			printf("Enter 1st I_Name : ");
			scanf("%s",&i[j].name);
			printf("Enter Quantity : ");
			scanf("%d",&i[j].qty);
			printf("Enter Rate/Qty : ");
			scanf("%d",&i[j].rate);
			(i[j].net=i[j].qty*i[j].rate);
		}
		if(j==2)
		{
			clrscr();
			printf("--------------------------------------------------------------------------------\n");
			printf("\t\t\t\tINVENTORY\n");
			printf("--------------------------------------------------------------------------------\n");
			printf("Enter 2nd I_Id : ");
			scanf("%d",&i[j].id);
			printf("Enter 2nd I_Name : ");
			scanf("%s",&i[j].name);
			printf("Enter Quantity : ");
			scanf("%d",&i[j].qty);
			printf("Enter Rate/Qty : ");
			scanf("%d",&i[j].rate);
			(i[j].net=i[j].qty*i[j].rate);
		}
		if(j==3)
		{
			clrscr();
			printf("--------------------------------------------------------------------------------\n");
			printf("\t\t\t\tINVENTORY\n");
			printf("--------------------------------------------------------------------------------\n");
			printf("Enter 3rd I_Id : ");
			scanf("%d",&i[j].id);
			printf("Enter 3rd I_Name : ");
			scanf("%s",&i[j].name);
			printf("Enter Quantity : ");
			scanf("%d",&i[j].qty);
			printf("Enter Rate/Qty : ");
			scanf("%d",&i[j].rate);
			(i[j].net=i[j].qty*i[j].rate);
		}
       }
	clrscr();
	printf("__________________________________________________________________\n");
	printf("\nI.id \t I.name\t Quantity(kg)\t Rate/kg\t Net Amount\n");
	printf("__________________________________________________________________\n");
	for(j=1;j<=3;j++)
	{
		printf("%2d\t%s\t %2d\t\t %2d\t\t %2d\n",i[j].id,i[j].name,i[j].qty,i[j].rate,i[j].net);
	}
	getch();
}