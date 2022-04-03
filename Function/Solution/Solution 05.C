/* Write a menu driven program to perfrom following task using UDF and its different category.
   1. Prime No.
   2. Palindrom No.
   3. Reverse No.
   4. Armstrong No.
   5. Exit.
Name : Laxman Sirvi
Date : 31-03-22*/
#include<stdio.h>
#include<conio.h>
int menu();
void prime();
int palin(int);
int reverse();
void arm(int);
void main()
{
	int a,b,c;
	char yn;
	do
	{
		clrscr();
		c=menu();
		switch(c)
		{
			case 1:
				prime();
				break;
			case 2:
				printf("Enter any No. : ");
				scanf("%d",&a);
				b=palin(a);
				if(a==b)
				{
					printf("%d is Palindrom No.",a);
				}
				else
				{
					printf("%d is not Palindrom No.",a);
				}
				break;
			case 3:
				b=reverse();
				break;
			case 4:
				printf("Enter any No. : ");
				scanf("%d",&a);
				arm(a);
				break;
			case 5:
				exit(0);
				break;
			default:
				printf("You entered an Invalid choice!");

		}
		printf("\n________________________________________________________________________________");
		textcolor(RED);
		cprintf("\n Do you want to continue ? (Yes=Y/y,No=N/n).");
		textcolor(WHITE);
		flushall();
		scanf("%c",&yn);
	}while(yn=='y'||yn=='Y');
	getch();
}


int menu()
{
	int choice;
	printf("\n\t\t\t\t--: MENU :-- \n");
	printf("--------------------------------------------------------------------------------");
	printf("\n\t 1. Prime number");
	printf("\n\t 2. Palindrom number");
	printf("\n\t 3. Reverse number");
	printf("\n\t 4. Armstorng number");
	printf("\n\t 5. Exit");
	printf("\n--------------------------------------------------------------------------------");
	printf("\n\tEnter your choice : ");
	scanf("%d",&choice);
	printf("--------------------------------------------------------------------------------");
	return choice;
}
void prime()
{
	int p,i,c=0;
	printf("Enter any No. : ");
	scanf("%d",&p);
	for(i=1;i<=p;i++)
	{
		if(p%i==0)
			c++;
	}
	if(c==2)
		printf("%d is a prime No.",p);
	else if(p==1)
		printf("%d is a composite No.",p);
	else
		printf("%d is not a prime No.",p);
}
int palin(int x)
{
	int y=0,z=0;
	while(x!=0)
	{
		y=x%10;
		z=(z*10)+y;
		x=x/10;
	}
	return z;
}
void arm(int x)
{
	int r=x,y=0,z=0;
	while(x!=0)
	{
		y=x%10;
		z=z+(y*y*y);
		x=x/10;
	}
	if(r==z)
	{
		printf("%d is Armstrong No.",r);
	}
	else
	{
		printf("%d is not Armstrong No.",r);
	}
}
int reverse()
{
	int y=0,z=0,x;
	printf("Enter any No. : ");
	scanf("%d",&x);
	while(x!=0)
	{
		y=x%10;
		z=(z*10)+y;
		x=x/10;
	}
	printf("%d is reversed No.",z);
	return z;
}
