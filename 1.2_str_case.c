#include<stdio.h>
#define UPPERCASE 1
#define LOWERCASE 2
void changeCase(char *str,int size, int flag)
{
	int i;
	switch(flag)
	{
		case UPPERCASE:
			for(i=0;i<size;i++)
			{
				if(str[i]>=97&&str[i]<=122)
				{
					str[i] = str[i]-32;
				}
			}
			break;
		case LOWERCASE:
                        for(i=0;i<size;i++)
                        {
                                if(str[i]>=65&&str[i]<=90)
                                {
                                        str[i] = str[i]+32;
                                }         
                        }
                        break;
		default:
			printf("Invalid flag\n");
	}
}
int main()
{
	int size,flag;
	printf("Enter the size:");
	scanf("%d",&size);
	printf("\nEnter the string:");
	char str[size];
	scanf(" %[^\n]%*c",str);
	printf("\nEnter the flag 1 for UPPERCASE and 2 for LOWERCASE:");
	scanf("%d",&flag);
	changeCase(str,size,flag);
	printf("\nafter case change %s\n",str);
}

