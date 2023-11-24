#include<stdio.h>
int main()
{
	int num,sum=0;
	scanf("%d",&num);
	int temp = num;
	while(temp)
	{
		int mod = temp%10;
		sum = (mod*mod*mod)+sum;
		temp = temp/10;
	}
	if(sum==num)
		printf("Armstrong\n");
	else
		printf("No\n");
}

