#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int N;
	scanf("%d",&N);
	char *str = (char *)malloc(N*sizeof(char));
	scanf(" %[^\n]%*c",str);
	int i;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==' ')
		{
			str[i] = '_';
		}
	}
	printf("str = %s",str);
}
