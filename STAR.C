#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter your number here:\n");
scanf("%d",&a);
for (b=0;b<a;b++)
{
for (c=0;c<b+1;c++)
{
printf("*");
}
printf("\n");
}
getch();
}