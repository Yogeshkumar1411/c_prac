#include<stdio.h>
int reverse = 0;
int rev(int num)
{
	if(num==0)
		return reverse;
	else
	{
		reverse = (num%10)+reverse*10;
		return rev(num/10);
	}
}
int main()
{
	int num;
	scanf("%d",&num);
	printf("reverse %d\n", rev(num));
}
