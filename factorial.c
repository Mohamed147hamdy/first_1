#include<stdio.h>
/* this type of recursion is trace use repleacment call*/
int fact(int number)    
{
	if (number ==0)
		return 1 ;
	else 
		return number * fact(number-1); 
}
void main()
{
	int number ;
	printf("Enter the value of number:");
	scanf("%d",&number);
	printf("the fact number of %d is :%d",number,fact(number));
}