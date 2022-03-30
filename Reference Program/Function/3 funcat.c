/* Demonstration of Category of Function by creating mathematical UDF  which display
sum,subtraction,mul,division of two integer value.

Date: 22/4/2021

category of function
=====================

1. function without argument without return value.  // void sum(); Make variable GLOBAL whose value use in function
2. function with argument without return value. // void sum(int,int);  When use this category, we must take input value which we pass in function call
3. function without argument with return value.// int sum();   When use this category, must store function call statement into variable so it store return value.
4. function with argument with return value.// int sum(int,int);

*/

#include<stdio.h>
#include<conio.h>

/* Function declaration */

void sum(); // category 1 without argument without return value
void sub(int,int); // category 2 with argument without return value
int multiply(); // category 3 without argument with return value.
int division(int,int); // category 4 with argument with return value.

/* Function definition */

void sum()
{
   int x,y;
   printf("\n Enter value for x and y:");
   scanf("%d%d",&x,&y);
   printf("\nSum of %d and %d is %d",x,y,x+y);
}
void sub(int x,int y)  // x & y is formal variable or argument - contain zerox copy of value a and b in x and y
{
   printf("\nSubtraction of %d and %d is %d",x,y,x-y);
}
int multiply()
{
   int x,y,z;
   printf("\n Enter value for x and y:");
   scanf("%d%d",&x,&y);
   z=x*y;
   //return (x*y);
   return z;
}
int division(int x,int y)
{
    int z;
    z=x/y;
    return z;
}
void main()
{
    int a,b,r;
    clrscr();
    sum(); // function call
   // clrscr();
    printf("\nEnter 2 value for subtraction:");
    scanf("%d%d",&a,&b);
    sub(a,b)//function call    a and b is actual argument
  //  clrscr();
    r=multiply();
    printf("\n Multiply answer is %d",r);
  //  clrscr();
    r=division(a,b);
    printf("\n Division of %d and %d is %d",a,b,r);
    getch();
}
