#include<stdio.h>
int fact(int number)
{
	int fact1=1;
	for(int i =number ;i>0;i--)
	{
		fact1*=i;
		printf("%d\t",fact1);
	}
	return fact1;
}
void main()
{
	int number;
	printf("Enter the value :");
	scanf("%d",&number);
	printf("the factorial of %d  is :%d" ,number,  fact(number));
}
