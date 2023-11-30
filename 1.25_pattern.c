#include<stdio.h>
int main()
{
	int num,i,j,k,l;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		for(j=0;j<num-i;j++)
		{
			printf(" ");
		}
	int out = num-j;
		for(k=1;k<i+1;k++)
		{
			printf("%d",out--);
		}
		for(l=2;l<i+1;l++)
		{
			printf("%d",l);
		}
		printf("\n");
	}
       for(i=num;i>=0;i--)
        {
                for(j=0;j<num-i;j++)
                {
                        printf(" ");
                }
        int out = num-j;
                for(k=1;k<i+1;k++)
                {
                        printf("%d",out--);
                }
                for(l=2;l<i+1;l++)
                {
                        printf("%d",l);
                }
                printf("\n");
        }

}	

