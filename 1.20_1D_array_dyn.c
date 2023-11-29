#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr,n;
	scanf("%d",&n);
	arr = (int*)malloc(n*sizeof(int));
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int sum = 0;
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
		printf("%d ",arr[i]);
	}
	printf("\nsum = %d\n",sum);
	free(arr);
}

