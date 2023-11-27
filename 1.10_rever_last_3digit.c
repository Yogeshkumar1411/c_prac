#include<stdio.h>
int reverse(int num)
{
	int rev = 0;
	while(num)
	{
		int rem = num%10;
		rev = rev*10+rem;
		num = num/10;
	}
	return rev;
}
int main()
{
	int num;
	scanf("%d",&num);
	int rev = reverse(num%1000);
	printf("rev %d\n",(num/1000)*1000+rev);
	
}




