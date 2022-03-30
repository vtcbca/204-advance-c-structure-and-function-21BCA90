Program 28 (Nested Function): WAP to create structure staff(sid,sname,desig) and print it using udf.
Posted May 5, 2021
Program 27( Global Variable) : WAP to create structure staff(sid,sname,desig) and print it using udf.
Posted May 5, 2021
Program 26(Pass structure into UDF): WAP to create structure emp(eid,name) and print it using printst()
Posted May 4, 2021
Program 25(Call by Value) : WAP to swap two variable value using UDF.
Posted May 4, 2021
Program 24( Array to function): WAP to create UDF sortna which print numerical array in ascending order.
Posted Apr 29, 2021
Program 23( Array to function) : WAP to create UDF printna() to print numerical array
Posted Apr 29, 2021

FNUMARR.C
C
Program 22( Menu Driven) WAP to create menu driven program which perform arithmetic operation using UDF
Posted Apr 28, 2021
Program 21( Passing string to function) WAP to create UDF to find the length of the inputted string.
Posted Apr 27, 2021
Program 20 ( Category of Function ) : WAP to create UDF with various category of function to implement mathematical function.
Posted Apr 22, 2021
Program 19 ( Category of UDF ) : WAP to create UDF which print multiplication of 2 value.
Posted Apr 19, 2021
Program 18 : WAP to create UDF sum which take 2 integer values as input and return integer value.
Posted Apr 19, 2021
Program 17: WAP to print hello world using udf.
Posted Apr 19, 2021
PROGRAMS ( Array, Structure)
PROGRAMS ( Array, Structure)
Program 16 ( Union ) : WAP to demonstrate Union. Difference between union and structure.
Edited Apr 17, 2021
Program 15(Nested Structure) WAP to create structure student (id,name) and another structure inside it address(city,pin). Print student details.
Edited Apr 19, 2021
Program 14( Structure Combine Searching) WAP to create structure(id,name, due_fee) Enter 3 student details and print record where student name is "sai" and due_fee>=5000
Edited Apr 19, 2021
Program 13( Array OF Structure String based Searching) WAP To enter 3 student name based on structure (id,sname) and print record based on student name.
Edited Apr 17, 2021
PROGARM 12 (ASSIGNMENT 2) PRINT 5 STUDENT MARKSHEET
Posted Apr 8, 2021
PROGRAM 11 ( ASSIGNMENT 1) Print student marksheet
Posted Apr 8, 2021
Program 10 (Array of Structure Numerical Searching ) WAP to create structure student (sid,sname). Enter 5 student details and Find student record based on student id
Edited Apr 13, 2021
Program 9 ( Array Of Structure) : WAP to create structure student (sid,sname) Enter 5 student detail and print it.
Posted Apr 6, 2021
Program 8 (Structure) : WAP to create structure student (sid,sname) . Show structure variable and structure member store in memory.
Posted Apr 6, 2021
Program 7 ( Structure ) : WAP to create structure student( sid, sname) and print it.
Posted Apr 3, 2021
Program 6 (2D Char Array) : WAP to enter 5 string and print it in ascending order (Sorting of string array)
Posted Mar 30, 2021
Program 5 ( 2D Char Array) : WAP To enter any string and replace any character in string with other character
Posted Mar 30, 2021
PROGRAM 4 (2D CHAR ARRAY) : WAP TO ENTER 5 STRING AND SEARCH ANY STRING INSIDE IT.
Posted Mar 23, 2021
PROGRAM 3 (2D CHAR ARRAY) : WAP TO INITIALIAZE 2D CHARACTER ARRAY BY MUTIPLE WAY.
Posted Mar 23, 2021
PROGRAM 2 ( 2D CHAR ARRAY ) : WAP TO ENTER 5 STRING AND PRINT IT.
Posted Mar 23, 2021
PROGRAM 1 (1D CHAR ARRAY) : WAP TO ENTER STRING AND PRINT IT.
Edited Mar 23, 2021
MATERIAL
MATERIAL
Book 3( For C): Question And Answer
Edited May 4, 2021
Book 2 (For C): Programming in ANSI C by E Balagurusamy
Posted May 4, 2021
Book 1 (For C Programming) : Let us C By Yashwant Kanetkar
Posted May 4, 2021
USER DEFINE FUNCTION
Edited Apr 27, 2021
STRUCTURE AND UNION
Edited Apr 17, 2021
1 Array
Posted Mar 23, 2021
MULTIDIMENTIONAL ARRAY
Posted Mar 23, 2021
/* Demonstration of passing array to function.

   WAP to create UDF "printna" which print entire numerical array.

   NOTE: Following rules are follow when pass array to function

   Rule 1: For declaration statement.

	   When we create UDF, we take array variable as input, we have to
	   write function declaration statement as

	  <return type> <function name> (datatype [ ],[datatype sizeofarray]);

	  example: void printna(int [],int );

   Rule 2: For function call statement.

	   When we write function call statement, we just write array variable name
	   as a argument.

	   <function name> (arrayname);

	   example: printna(a,5);

   Rule 3: For function definition statement.

	   In function definition statement, define array variable name with subscript.

	   <return type> <function name> (datatype x[ ],[datatype sizeofarray])

	   example: void printna(int a[],int b);
*/

#include<stdio.h>
#include<conio.h>
void printna(int [],int ); //function declaration
void main()
{
   int a[5],i;
   clrscr();
   /* input value into array */
   for(i=0;i<5;i++)
   {
      printf("\nEnter value for a[%d]:",i);
      scanf("%d",&a[i]);
   }
   /* Print array using function */
   printna(a,5); //function call
   getch();
}
void printna(int x[],int n) // function defination header
{
  int i;
  clrscr();
  for(i=0;i<n;i++)
    printf("x[%d]:%d\n",i,x[i]);

}
