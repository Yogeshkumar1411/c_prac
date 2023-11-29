#include<stdio.h>
int main()
{
	int row,i,j;
	scanf("%d",&row);
	for(i=0;i<row;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=0;i<row;i++)
	{
		for(j=i;j<row-1;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
