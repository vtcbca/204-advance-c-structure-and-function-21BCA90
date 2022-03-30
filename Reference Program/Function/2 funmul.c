/* WAP to create UDF which print multiplication of 2 value
   Date:19/04/2021
*/
#include<stdio.h>
#include<conio.h>
//int multiply(int,int);
int multiply(); //function declaration
//void multiply();
void main()
{
     int r;
     clrscr();
     r=multiply(); //function call  When function return value we have to store function call statement in variable. 
     printf("Answer is %d",r);
     getch();
}
int multiply()
{
    int x,y,z;
    printf("\nEnter 2 value:");
    scanf("%d",&x,&y);
    z=x*y;
    return z;
}
