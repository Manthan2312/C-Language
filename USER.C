#include<stdio.h>
#include<conio.h>
int a,b,sum=0;
void enter();
void add();
void sub();
void multi();
void divi();
void mod();
void operation();

void sq();
void cb();
void en();
void mess();

void main()
{
char c;
clrscr();
printf("enter any operation\n");
scanf("%c",&c);

switch(c)
{
	case '+':add();
		 mess();
		break;
	case '-': sub();
		mess();
		break;
	case '*': multi();
		mess();
		break;
	case '/': divi();
		mess();
		break;
	case '%': mod();
		mess();
		break;
	case '!': sq();
		mess();
		break;
	case '$': cb();
		mess();
		break;
	default :printf("enter valid operation\n");
		printf("your operation is not successfull");
		break;
}


getch();
}
void operation()
{
printf(" press + for addition\n");
printf(" press - for subtraction\n");
printf(" press * for multipliction\n");
printf(" press / for divison\n");
printf(" press % for modulo\n");
printf(" press ! for square\n");
printf(" press $ for cube\n");
}




void add()
{

enter();
sum=a+b;
printf("addition= %d\n",sum);
}
void sub()
{

enter();
sum=a-b;
printf("subtraction= %d\n",sum);
 }
 void multi()
 {

enter();
sum=a*b;
printf("multipliction= %d\n",sum);
}
void divi()
{

enter();
sum=a/b;
printf("divison= %d\n",sum);
      }
void mod()
{

enter();
sum=a%b;
printf("modulo= %d\n",sum);
}
void sq()
{
en();
sum=a*a;
printf("square= %d\n",sum);
}
void cb()
{
en();
sum=a*a*a;
printf("cube= %d\n",sum);
}
void enter()
{
printf("enter your first number:\n");
scanf("%d",&a);
printf("enter your second number:\n");
scanf("%d",&b);
}
void en()
{
printf("enter your number here\n");
scanf("%d",&a);
}
void mess()
{
printf("your operation successfully done");
}


