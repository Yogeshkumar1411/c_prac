#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	int arr[N],i,j;
	for(i=0;i<N;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<N;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(arr[i]==arr[j])
			{
				for(int k=j;k<N-1;k++)
				{
					arr[k] = arr[k+1];
				}
				j--;
				N--;
			}
		}
	}
	for(i=0;i<N;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
