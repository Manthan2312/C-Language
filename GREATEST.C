#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,d;
clrscr();
printf("enter your first number here:\n");
scanf("%d",&a);
printf("enter your second number here:\n");
scanf("%d",&b);
printf("enter your third number here:\n");
scanf("%d",&c);
printf("enter your fourth number here:\n");
scanf("%d",&d);

	if (a>b & a>c & a>d)
printf("%d is greatest number:\n",a);
	else if (b>a & b>c & b>d)
printf("%d is greatest number:\n",b);
	else if (c>a & c>b & c>d)
printf("%d is greatest number:\n",c);
	else if (d>a & d>b & d>c)
printf("%d is greatest number:\n",d);
	else if (a=b=c=d)
printf(" all numbers are same");
	else if (a=b=c=d==0)
printf("this is zero");
return 0;
}
