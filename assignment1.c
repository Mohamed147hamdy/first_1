#include<stdio.h>
void maximum(int a,int b,int c,int d)
{
	int max =(a>b&&a>c&&a>d)? a :(b>c&&b>d) ? b : (c>d) ? c:d;
	printf("the max is :%d\n",max);
}
void minimum(int a,int b,int c,int d)
{
	int min =(a<b&&a<c&&a<d)? a :(b<c&&b<d) ? b : (c<d) ? c:d;
	printf("the min is :%d\n",min);
}
void main()
{
	int num1,num2,num3,num4;
	
	
	 printf("Enter the value of number:\n");
     scanf("%d %d %d %d",&num1,&num2,&num3,&num4);	 
	
	minimum(num1,num2,num3,num4);
	maximum(num1,num2,num3,num4);
	
}