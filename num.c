#include<stdio.h>
#include<conio.h>
void main()
{
int i,c=0,e;
clrscr();
scanf("%d",&e);
while(e!=0)
{
e=e/10;
c++;
}
printf("%d is the count value",c);
getch();
}
