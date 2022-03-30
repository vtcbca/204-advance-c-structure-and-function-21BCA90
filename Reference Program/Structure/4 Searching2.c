Main Menu
204 PROGRAMMING SKILL
DIV-2
Stream
Classwork
People
Grades
All topics
PYTHON
SYLLABUS
PRACTICAL JOURNAL
THEORY ASSIGNMENT
PRACTICAL ASSIGNMENT
QUIZ
PROGRAMS ( User Define Function )
PROGRAMS ( Array, Structure)
MATERIAL
Google Calendar
Class Drive folder
FOR STRING AND 2D CHARACTER ARRAY
Posted May 20, 2021
PYTHON
PYTHON
UNIT 2 PYTHON FUNDAMENTAL
Posted Jun 3, 2021
PYTHON INSTALLATION
Posted Jun 2, 2021
SYLLABUS
SYLLABUS
FOR PYTHON FREE CERTIFICATION
Posted May 15, 2021
FYBCA SEM 2 SYLLABUS
Posted May 15, 2021
PRACTICAL JOURNAL
PRACTICAL JOURNAL
Part 3
Posted May 20, 2021
PART 1
Due Apr 25, 2021, 11:59 PM
PART 2
Due May 7, 2021, 11:59 PM
THEORY ASSIGNMENT
THEORY ASSIGNMENT
Assignment 2 (Function)
Due May 9, 2021, 11:59 PM
Assignment 1 ( Multidimensional Array and Structure )
Due Apr 20, 2021, 11:59 PM
PRACTICAL ASSIGNMENT
PRACTICAL ASSIGNMENT
WAP to create structure Marskeet(sid,sname,sub1,sub2,sub3,total,percentage). Enter 5 student marksheet and print it.
Due Apr 8, 2021, 10:00 AM
WAP to create structure Marksheet(sid,sname,sub1,sub2,sub3,total,percentage). Enter student detail and print marksheet
Due Apr 9, 2021, 10:00 AM
QUIZ
QUIZ
Quiz - 2 ( Structure & Union )
Edited Apr 17, 2021
QUIZ 1
Posted Apr 3, 2021
PROGRAMS ( User Define Function )
PROGRAMS ( User Define Function )
Program 31 (Pass 2d Character array) : WAP to create and print 2d character array of 5 string using UDF
Posted May 20, 2021
Program 30 ( Pass 2d integer array) : WAP to create and print 2d integer array of 5 element using UDF
Posted May 20, 2021
Program 29 (Pass Array of Structure) : WAP to create structure staff(sid,sname,dept,salary). Enter 5 records, print it and do searching based on dept.
Posted May 17, 2021
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

8SARCMBS.C
C
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
Expanded Program 14( Structure Combine Searching) WAP to create structure(id,name, due_fee) Enter 3 student details and print record where student name is "sai" and due_fee>=5000
/* WAP to create structure student(sid,sname,due_fee) enter 3 student details
   and Search the record based on student name is sai and due_fee> 5000
   Date: 13/4/2021
*/
#include<stdio.h>
#include<conio.h>
struct student
{
    int sid,due_fee;
    char sname[30];
};
void main()
{
    struct student s[3];   //array of structure
    int i,flag=0;
       
    clrscr();
    //Input 3 student details
    for(i=0;i<3;i++)
    {
	printf("\n Enter studnet id for student %d:",i+1);
	scanf("%d",&s[i].sid);
	printf("\n Enter student sname for student %d:",i+1);
	scanf("%s",s[i].sname);
	printf("\n Enter studnet due fees detail for student %d:",i+1);
	scanf("%d",&s[i].due_fee);
	
    }
    //Print 3 student details
    clrscr();
    for(i=0;i<3;i++)
       printf("\n\n%d\t%s\t%d",s[i].sid,s[i].sname,s[i].due_fee);


    //Search perticular record based on student name and due_fee ;
    
    for(i=0;i<3;i++)  // loop execute for each record
    {
       //if(s[i].sname==n)
       if(strcmp(s[i].sname,"sai")==0 && s[i].due_fee>5000)
       {
	  printf("\n\n%d \t %s",s[i].sid,s[i].fsname);
	  flag=1;
	  break;
       }
    }
    if(flag==0)
       printf("\nStudent record is not available");


    getch();
}
8SARCMBS.C
Displaying 8SARCMBS.C.
