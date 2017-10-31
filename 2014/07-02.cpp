#include<stdio.h>
int MINPRIME(int num)
{
	int k, j;
	k = num+1;
	while(1)
	{
		for(j=2; j<=k-1; j++)
			if(k%j == 0)
				continue;
			if(j > k-1)
				return k;
			else k++;
	}
}
