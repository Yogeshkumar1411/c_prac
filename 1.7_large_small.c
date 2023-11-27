#include<stdio.h>
#define LARGE 1
#define SMALL 2
int Pos(int arr[],int size,int flag)
{
	int i,j,pos = 0;
	switch(flag)
	{
		case LARGE:
			int large = arr[0];
			for(i=0;i<size;i++)
			{
				if(arr[i]>large)
				{
					large = arr[i];
					pos = i;
				}
			}
			break;
		case SMALL:
                        int small = arr[0];
                        for(i=0;i<size;i++)
                        {
 				if(arr[i]<small)
                                {
                                        small = arr[i];
                                        pos = i;
                                }
                        }
                        break;
		default:
			printf("Inavild flag\n");
	}
	return pos;
}
int main()
{
	int N;
	scanf("%d",&N);
	int arr[N];
	int i;
	for(i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	int LargePos = Pos(arr,sizeof(arr)/sizeof(int),LARGE);
	int SmallPos = Pos(arr,sizeof(arr)/sizeof(int),SMALL);
	int temp = arr[LargePos];
	arr[LargePos] = arr[SmallPos];
	arr[SmallPos] = temp;
	for(i=0;i<N;i++)
		printf("arr[%d] = %d\n",i,arr[i]);
}
		 

