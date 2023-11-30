#include<stdio.h>
int main()
{
	int num,i,j,sum = 0,next = 1,prev = 0;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("%d ", next);
			sum = prev+next;
			prev = next;
			next = sum;
		}
		printf("\n");
	}
}

/*
	 * 1
	 * 1   2
	 * 3   5   8
	 * 13  21 34 55*/

