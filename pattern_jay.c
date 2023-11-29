#include<stdio.h>
int main()
{
	int row,i,j,k,l;
	scanf("%d",&row);
	for(i=0;i<row;i++)
	{
		int back = row-i;
		for(k=0;k<i;k++)
		{
			printf("%d ",row-k);
		}
		for(j=0;j<2*(row-i)-1;j++)
		{
			printf("%d ",row-i);
		}
		for(l=0;l<i;l++)
		{
			printf("%d ",++back);
		}
		printf("\n");
	}
        for(i=row-1;i>=0;i--)
        {
                int back = row-i;
                for(k=0;k<i;k++)
                {
                        printf("%d ",row-k);
                }
                for(j=0;j<2*(row-i)-1;j++)
                {
                        printf("%d ",row-i);
                }
                for(l=0;l<i;l++)
                {
                        printf("%d ",++back);
                }
                printf("\n");
        }

}
