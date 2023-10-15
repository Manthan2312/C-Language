#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,a=1;
clrscr();
printf("enter your number here\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
a=a*i;
}
printf("n!=%d",a);

getch();
}