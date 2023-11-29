#include<stdio.h>
int sum(int a,int b)
{
	return a+b;
}
int call(int (*ptr)(int,int),int a,int b)
{
	return ptr(a,b);
}
int main()
{
	int num1 = 5;
	int num2 = 6;
	
	int (*ptr)(int,int) = sum;

	printf("%d \n",call(sum,num1,num2));
}

