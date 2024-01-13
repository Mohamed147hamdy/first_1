#include<stdio.h>
void power ( int number , int n);
void main ()
{
	int number , n;
	printf("Enter the value of number:");
	scanf("%d",&number);
	printf("Enter the power :");
	scanf("%d",& n);
	
	power(number,n);
}
void power ( int number , int n)
{
	int pw=1;
	for (int i =1;i<=n;i++)
	{
		pw*=number;
	}
	printf("%d",pw);
}