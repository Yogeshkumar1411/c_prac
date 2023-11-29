#include<stdio.h>
int main()
{
	int arr[][4] = {1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7};
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i==0||j==0||i==4-1||j==4-1)
				printf("%d ",arr[i][j]);
			else
				printf("  ");
		}
		printf("\n");
	}
}
