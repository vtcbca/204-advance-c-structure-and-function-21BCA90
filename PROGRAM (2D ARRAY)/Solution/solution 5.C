/* WAP to input any  5 ch & print vowel
Name : Laxman Sirvi
Date : 26-02-22*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,j,k=0,z,l;
	char a[5][20],b[20];
	clrscr();
	printf("Enter any 5 name :\n");
	for(i=0;i<5;i++)
		gets(a[i]);
	for(i=0;i<5;i++)
		puts(a[i]);
	clrscr();

	for(i=0;i<5;i++)
	{
		l=strlen(a[i]);
		strcpy(b," ");
		for(z=0,j=0;j<l;j++)
		{

			if(a[i][j]=='a'||a[i][j]=='i'||a[i][j]=='o'||a[i][j]=='u'||a[i][j]=='e'||a[i][j]=='A'||a[i][j]=='I'||a[i][j]=='O'||a[i][j]=='E'||a[i][j]=='U')
			{
				b[z]=a[i][j];
				k++;
				z++;
			}
		}
		printf("%s : %d: %s\n",a[i],k,b);
		k=0;
	}
	getch();
}