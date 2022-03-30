/* Demonstration of 2D integer array with UDF.
   WAP to print 2D array using UDF.
   Date:20/05/2021
   int a[3][3]
*/

#include<stdio.h>
#include<conio.h>

int a[3][3];

void input2d();
void print2d(); //function declaration

void main()
{
   int i,j;
   clrscr();
   /* Print 2d Array using UDF */
   input2d();
   print2d();
   getch();
}
void input2d()
{
  int i,j;
  for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
      {
	  printf("\n Enter value for a[%d][%d]:",i,j);
	  scanf("%d",&a[i][j]);
      }
   }
}
void print2d()
{
   int i,j;
   clrscr();
   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
	  printf("\n a[%d][%d]=%d",i,j,a[i][j]);
   }
}
