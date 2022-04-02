/*WAP to create UDF strVowels which count and print total No. of vowels in string.
Name : Laxman Sirvi
Date : 02-04-22*/
#include<stdio.h>
#include<conio.h>
void strVowels();
void main()
{
	clrscr();
	strVowels();
	getch();
}
void strVowels()
{
	int i,k=0,z=0,l;
	char a[30],b[30];
	clrscr();
	printf("Enter any string : ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='e'||a[i]=='A'||a[i]=='I'||a[i]=='O'||a[i]=='E'||a[i]=='U')
		{
			b[z]=a[i];
			k++;
			z++;
		}
	}
	clrscr();
	printf("Your entered string is = %s :\nTotal No. of Vowel in string is = %d :\nThe vowel which present in string = %s :",a,k,b);
	getch();
}
