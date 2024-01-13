#include<stdio.h>
void myfunc1(void);
void myfunc2(void);

void main()
{
	myfunc1();
	myfunc1();
	myfunc1();
	printf("//////////////////////\n");
	myfunc2();
	myfunc2();
	myfunc2();
}
void myfunc1(void)
{
	int x =5;   // by default is auto
	printf("local variable in myfunc1 is :%d\n",x++);
}
void myfunc2(void)
{
	static int x =5;
	printf("local variable in myfunc2 is :%d\n",x++);
}