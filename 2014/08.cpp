#include<stdio.h> 
#include<string.h>

int main(void)
{
	char str[80], substr[80];
	int num;
	printf("Input string : ");
	gets(str);
	printf("Input substring : ");
	gets(substr);
	int STRCOUNT(char *str, char *substr);
	num = STRCOUNT(str, substr);
	printf("num = %d", num);
}

int STRCOUNT(char *str, char *substr)
{
	char *p, *q;
	int num = 0;
	while(*str != '\0')
	{
		for(p=str, q=substr; *p!='\0' && *q!='\0' && *p==*q; p++, q++);
		if(*q!='\0')
				*str++;
		else
		{
			num++;
			str = p;
		}
	}
	return num;
}
