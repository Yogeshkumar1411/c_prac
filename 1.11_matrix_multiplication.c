#include<stdio.h>
int main()
{
	int row1,column1,row2,column2;
	scanf("%d %d %d %d",&row1,&column1,&row2,&column2);
	int arr1[row1][column1],arr2[row2][column2],i,j,k,result[row1][column2];
	for(i=0;i<row1;i++)
	{
		for(j=0;j<column1;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	
	for(i=0;i<row2;i++)
	{
		for(j=0;j<column2;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	for(i=0;i<row1;i++)
	{
		for(j=0;j<column1;j++)
		{
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<row2;i++)
	{
		for(j=0;j<column2;j++)
		{
			printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}
	if(row1!=column2)
	{
		printf("Cannot multiply\n");
		return 0;
	}	
	int sum;
	for(i=0;i<row1;i++)
	{
		for(j=0;j<column2;j++)
		{
				sum = 0;
			for(k=0;k<column1;k++)
			{
				sum = arr1[i][k]*arr2[k][j]+sum;
			}
			result[i][j] = sum;
			printf(" ");
		}
			printf("\n");
	}
	for(i=0;i<row1;i++)
	{
		for(j=0;j<column1;j++)
		{
			printf("%d ",result[i][j]);
		}
		printf("\n");
	}
}
	
