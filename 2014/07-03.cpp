#include<stdio.h>
int INDEX(char str[], char substr[])
{
	int i, k;
	for(i=0; str[i]; i++)
		for(j=i, k=0; str[j] == substr[k]; j++, k++)
			if(substr[k+1] == '\0')
				return i+1;
	return 0;
}
