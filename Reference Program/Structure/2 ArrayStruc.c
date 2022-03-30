/* WAP to create structure student(sid,sname) enter 5 student details
   and print it using array of structure
   Date: 6/4/2021
*/
#include<stdio.h>
#include<conio.h>
struct student
{
    int sid;
    char sname[30];
};
void main()
{
    struct student s[5];   //array of structure
    int a[5];
    int i;
    clrscr();
    //Input 5 student details
    for(i=0;i<5;i++)
    {
	printf("\n Enter studnet id for student %d:",i+1);
	scanf("%d",&s[i].sid);
	printf("\n Enter student sname for student %d:",i+1);
	scanf("%s",s[i].sname);
    }
    //Print 5 student details
    for(i=0;i<5;i++)
       printf("\n\n%d\t%s",s[i].sid,s[i].sname);
    getch();
}
