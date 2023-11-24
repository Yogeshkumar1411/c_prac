#include<stdio.h>
int main()
{
	int num,i,first = 0,second = 1,next;
	scanf("%d",&num);
	for(i=0;i<num-1;i++)
	{
		next = first + second;
		first = second;
		second = next;
	}
	printf("%d_th term of fib series = %d\n",num,first);
}
