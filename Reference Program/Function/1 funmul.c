/* WAP to create UDF which print multiplication of 2 value
   Date:19/04/2021
*/
#include<stdio.h>
#include<conio.h>
void multiply();  //function without argument without return type.
void main()
{
     int r;
     clrscr();
     multiply(); //function call
     getch();
}
void multiply()
{
    int x,y,z;
    printf("\nEnter 2 value:");
    scanf("%d",&x,&y);
    z=x*y;
    printf("Answer is %d",z);
}
