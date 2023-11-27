#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* strCatRec(char *str1,char *str2, int len1, int n)
{

	str1[len1] = str2[n];
	if(str2[n]=='\0')
	{
		return str1;
	}
	else
	{
		len1++;
		n++;
		return strCatRec(str1,str2,len1,n);
	}


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
        str1 = strCatRec(str1,str2,strlen(str1),0);
        printf("Cat = %s\n",str1);
        free(str1);
        free(str2);
}
