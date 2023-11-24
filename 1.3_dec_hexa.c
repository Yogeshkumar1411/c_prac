#include<stdio.h>
int main()
{
	int dec_num,size = 0,i = 0;
	printf("Enter the dec num:");
	scanf("%d",&dec_num);
	int back = dec_num;
	while(back)
	{
		size++;
		back/=2;
	}
	char hex[(size/4)+1];
	while(dec_num)
	{
		int mod = dec_num%16;
		if(mod<10)
		{
			hex[i] = mod+'0';
			i++;
		}
		else
		{
			hex[i] = mod+'A'-10;
			i++;
		}
		dec_num/=16;
	}
	for(i=sizeof(hex)/sizeof(char);i>=0;i--)
	{
		printf("%c ",hex[i]);
	}
	printf("\n");
}

