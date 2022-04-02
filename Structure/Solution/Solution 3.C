/* Write a program to create manu driven program to perform operation on structure.
Name : Laxman sirvi
Date : 26-02-2022 */
#include<stdio.h>
#include<conio.h>
struct emp
{
    int id,basic,pf,da,gs,net,hra;
    char name[5][50],dep[5][20];
}e[5],t;
void main()
{
    int a,b,i,j;
    char c[5],yn;
    clrscr();
    for(i=1;i<=5;i++)
    {
	if(i==1)
	{
	    printf("\n--------------------------------------------------------------------------------");
	    printf("\n\t\tEnter the detail's of %dst Employee.",i);
	    printf("\n--------------------------------------------------------------------------------\n");
	    printf("Enter E_Id : ",i);
	    scanf("%d",&e[i].id);
	    printf("Enter E_Name : ",i);
	    scanf("%s",&e[i].name);
	    printf("Enter E_Dept : ",i);
	    scanf("%s",&e[i].dep);
	    printf("Enter E_Basic Salary : ",i);
	    scanf("%d",&e[i]. basic);
	}
	else if(i==2)
	{
	    clrscr();
	    printf("\n--------------------------------------------------------------------------------");
	    printf("\n\t\tEnter the detail's of %dnd Employee.",i);
	    printf("\n--------------------------------------------------------------------------------\n");
	    printf("Enter E_Id : ",i);
	    scanf("%d",&e[i].id);
	    printf("Enter E_Name : ",i);
	    scanf("%s",&e[i].name);
	    printf("Enter E_Dept : ",i);
	    scanf("%s",&e[i].dep);
	    printf("Enter E_Basic Salary : ",i);
	    scanf("%d",&e[i]. basic);
	}
	else if(i==3)
	{
	    clrscr();
	    printf("\n--------------------------------------------------------------------------------");
	    printf("\n\t\tEnter the detail's of %drd Employee.",i);
	    printf("\n--------------------------------------------------------------------------------\n");
	    printf("Enter E_Id : ",i);
	    scanf("%d",&e[i].id);
	    printf("Enter E_Name : ",i);
	    scanf("%s",&e[i].name);
	    printf("Enter E_Dept : ",i);
	    scanf("%s",&e[i].dep);
	    printf("Enter E_Basic Salary : ",i);
	    scanf("%d",&e[i]. basic);
	}
	else
	{
	    clrscr();
	    printf("\n--------------------------------------------------------------------------------");
	    printf("\n\t\tEnter the detail's of %dth Employee.",i);
	    printf("\n--------------------------------------------------------------------------------\n");
	    printf("Enter E_Id : ",i);
	    scanf("%d",&e[i].id);
	    printf("Enter E_Name : ",i);
	    scanf("%s",&e[i].name);
	    printf("Enter E_Dept : ",i);
	    scanf("%s",&e[i].dep);
	    printf("Enter E_Basic Salary : ",i);
	    scanf("%d",&e[i]. basic);
	}
    }
    do{
    int a1=0;
    clrscr ();
    printf("\n--------------------------------------------------------------------------------");
    printf("\nE_ID\t E_Name \t E_Dept\t\t E_Basic Salary");
    printf("\n--------------------------------------------------------------------------------");
    for(i=1;i<=5;i++)
    {
	printf("\n%d\t %s\t\t %s\t\t %d",e[i].id,e[i].name,e[i].dep,e[i]. basic);
    }
    printf("\n--------------------------------------------------------------------------------");
    printf("\n\t\t\t\t--: MENU :--");
    printf("\n--------------------------------------------------------------------------------\n");
    printf("\n 1. for print salary slip. ");
    printf("\n 2. for search Emp_Base on Id.");
    printf("\n 3. for search Emp_Base on Dept.");
    printf("\n 4. for sort Emp Record by Emp_Name.");
    printf("\n 5. for sort Emp Record by Emp_Basic Salary.");
    printf("\n 6. for Exit.");
    printf("\n--------------------------------------------------------------------------------");
    printf("\nEnter your choice : ");
    scanf("%d",&a);
    for(i=1;i<=5;i++)
    {
	e[i].pf = e[i].basic/2;
	e[i].hra = (e[i].basic/100)*40;
	e[i].da = e[i].basic;
	e[i].gs = e[i].hra + e[i].da + e[i].basic;
	e[i].net = e[i].gs - e[i].pf;
    }
    clrscr();
    switch (a)
    {
	case 1:
		printf("\n--------------------------------------------------------------------------------");
		printf("\nE_ID\tE_Name\tE_Dept\t E_B Sal\tPF  \t HRA \t DA  \t G sal \t Net Sal");
		printf("\n--------------------------------------------------------------------------------");
		for(i=1;i<=5;i++)
		{
			printf("\n%d\t%s\t%s\t%d        \t%d\t%d\t%d\t%d\t%d",e[i].id,e[i].name,e[i].dep,e[i].basic,e[i].pf,e[i].hra,e[i].da,e[i].gs,e[i].net);
		}
		break;
	case 2:
		printf("Enter E_Id to see the record : ");
		scanf("%d",&b);
		for(i=1;i<=5;i++)
		{
			if(e[i].id==b)
			{
				a1=1;
				clrscr();
				printf("\n--------------------------------------------------------------------------------");
				printf("\nE_ID\tE_Name\tE_Dept\t E_B Sal\tPF  \t HRA \t DA  \t G sal \t Net Sal");
				printf("\n--------------------------------------------------------------------------------");
				printf("\n%d\t%s\t%s\t%d       \t%d\t%d\t%d\t%d\t%d",e[i].id,e[i].name,e[i].dep,e[i].basic,e[i].pf,e[i].hra,e[i].da,e[i].gs,e[i].net);
			}
		}
		if(a1==0)
		{
			clrscr();
			printf("\n\n\t\tOops! Record not found.");
		}
		break;
	case 3:
		printf("Enter E_Dept to see the record : ");
		scanf("%s",&c);
		printf("\n--------------------------------------------------------------------------------");
		printf("\nE_ID\tE_Name\tE_Dept\t E_B Sal\tPF  \t HRA \t DA  \t G sal \t Net Sal");
		printf("\n--------------------------------------------------------------------------------");
		for(i=1;i<=5;i++)
		{
			if(strcmp(e[i].dep,c)==0)
			{
				a1=1;
				printf("\n%d\t%s\t%s\t%d       \t%d\t%d\t%d\t%d\t%d",e[i].id,e[i].name,e[i].dep,e[i].basic,e[i].pf,e[i].hra,e[i].da,e[i].gs,e[i].net);
			}
		}
		if(a1==0)
		{
			clrscr();
			printf("\n\n\t\tOops! Record not found.");
		}
		break;
	case 4:
		printf("\n--------------------------------------------------------------------------------");
		printf("\nE_ID\tE_Name\tE_Dept\t E_B Sal\tPF  \t HRA \t DA  \t G sal \t Net Sal");
		printf("\n--------------------------------------------------------------------------------");
		for(i=1;i<=5;i++)
		{
			for(j=i+1;j<=5;j++)
			{
				if(strcmp(e[i].name,e[j].name)>0)
				{
					t=e[i];
					e[i]=e[j];
					e[j]=t;
				}
			}
		}
		for(i=1;i<=5;i++)
			printf("\n%d\t%s\t%s\t%d       \t%d\t%d\t%d\t%d\t%d",e[i].id,e[i].name,e[i].dep,e[i].basic,e[i].pf,e[i].hra,e[i].da,e[i].gs,e[i].net);
		break;
	case 5:
		printf("\n--------------------------------------------------------------------------------");
		printf("\nE_ID\tE_Name\tE_Dept\t E_B Sal\tPF  \t HRA \t DA  \t G sal \t Net Sal");
		printf("\n--------------------------------------------------------------------------------");
		for(i=1;i<=5;i++)
		{
			for(j=i+1;j<=5;j++)
			{
				if(e[i].basic>e[j].basic)
				{
					t=e[i];
					e[i]=e[j];
					e[j]=t;
				}
			}
		}
		for(i=1;i<=5;i++)
			printf("\n%d\t%s\t%s\t%d       \t%d\t%d\t%d\t%d\t%d",e[i].id,e[i].name,e[i].dep,e[i].basic,e[i].pf,e[i].hra,e[i].da,e[i].gs,e[i].net);
		break;
	case 6:
		exit(0);
		break;
	default :
		printf("\n\n\t\tEnter a valid choice.");
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