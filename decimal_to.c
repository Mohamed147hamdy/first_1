#include<stdio.h>
void binary(int);
void main()
{
	int number ;
	printf("Enter decimal number:");
	scanf("%d",&number);
	printf("The  hex  number is :%x\n",number);
	printf("The octal number is :%o\n",number);
	printf("The binary number is :");
	binary(number);
}
void binary(int n)
{
	if (n > 0)
	{
		binary(n/2);//wwww
		printf("%d",n%2);
	}
}