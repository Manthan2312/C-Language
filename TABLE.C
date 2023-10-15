
#include<stdio.h>
#include<conio.h>
void main()
{
int a,i=1;
clrscr();
printf("enter your number here:\n");
scanf("%d",&a);
for (i=1;i<=10;i++){
	printf("%d * %d =%d\n",a,i,a *i);
	}
getch();
}