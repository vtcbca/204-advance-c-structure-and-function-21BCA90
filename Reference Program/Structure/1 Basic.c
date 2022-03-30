/* WAP to create sturcture student(sid,sname) and print it.
  Date: 3/4/2021
*/

#include<stdio.h>
#include<conio.h>

struct student    // create datatype of student
{
   int  sid;  //struct. member
   char sname[30]; // struct member.
};

// sid and sname declare inside the structure student and it is known as structure member.

void main()
{
   struct student s,s1;  //s is a variable of student datatype.
   int a; // a is variable of integer data type
   clrscr();

   // input value into structure varible.

   printf("\n Enter student id :");
   scanf("%d",&s.sid);
   printf("\n Enter student name:");
   scanf("%s",&s.sname);
   clrscr();
   printf("\n Enter student id:");
   scanf("%d",&s1.sid);
   printf("\n Enter student name:");
   scanf("%s",s1.sname);

   //Print structure variable

   printf("\n\n%d \t %s",s.sid,s.sname);
   printf("\n\n%d \t %s",s1.sid,s1.sname);

   //sizeof structure

   printf("\n\n Size of structure student is %d",sizeof(struct student));
   printf("\n\n Size of structure student is %d",sizeof(s));

   // Memory Location of Structure variable
   printf("\n \n S variable is store at %u",&s);
   printf("\n \n S1 variable is store at %u",&s1);
	    clrscr();
   // check member store continously or random location
   printf("\n\n sid of varible s is store at %u",&s.sid);
   printf("\n\n sname of varible s is store at %u",&s.sname);
   printf("\n\n\n");
   printf("\n\n sid of varible s1 is store at %u",&s1.sid);
   printf("\n\n sname of varible s1 is store at %u",&s1.sname);

   getch();
}
