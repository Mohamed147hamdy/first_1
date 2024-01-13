#include<stdio.h>
int fibonac(int number)
{
	do
	{
	int f ,f1=0,f2=1;
	f=f1+f2;
	f1=f2;
	f2=f;
	//printf("%4d",f);
	
	return f;
	number--;
	}while(number >0);
}

void main()
{
	int n,fib;
	printf("Enter the value :");
	scanf("%d",&n);
	fib = fibonac(5);
	printf("the fib of %d is :\n%d ",n,fib);
	
}