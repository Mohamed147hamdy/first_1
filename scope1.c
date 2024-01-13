#include<stdio.h>
int i=10;  			 // global variable
void myfunc(int);
void main()
{
	int l_min=100;   // local variable
	int number =300;
	
	printf("The global scope variable is : %d\n",i);
	printf("local variable main :%d\n",l_min);
	{
		int w = 50;     // block scope
		printf("the block scope value of w is : %d\n",w);
	}
	myfunc(300);
}
void myfunc(int i)
{
	int l_func=200;     //function scopelocal variable
	
	printf("local var in main = %d\n",l_func);
	printf("parameter to function in main = %d\n",i); //function prototype
	
}