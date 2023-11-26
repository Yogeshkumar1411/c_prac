#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* strCat(char *str1,char *str2, int len1, int len2)
{
	int i,j;
	char *str = (char *)realloc(str1,len2*sizeof(char));
	for(i=len1,j=0;i<len1+len2,j<len2;i++,j++)
	{
		str[i] = str2[j];
	}
	str[i] = '\0';
	return str;
}

int main()
{
	char *str1,*str2;
	int size1,size2;
	scanf("%d%d",&size1,&size2);
	str1 = (char *)malloc(size1*sizeof(char));
	str2 = (char *)malloc(size2*sizeof(char));
	scanf(" %[^\n]%*c",str1);
	scanf(" %[^\n]%*c",str2);
	str1 = strCat(str1,str2,strlen(str1),strlen(str2));
	printf("Cat = %s\n",str1);
	free(str1);
	free(str2);
}	
