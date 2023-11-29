#include<stdio.h>
int main()
{
	int arr[] = {45,45,56,57,58,56};
	int size = sizeof(arr)/sizeof(int);
	int i,j,index=0,k=0;
	for(i=1;i<size;i++)
	{
		if(arr[i]!=arr[index])
		{
			index++;
			arr[index] = arr[i];
		}

	}
	for(i=0;i<index;i++)
	{
		printf("%d ",arr[i]);
	}
}	
