#include<stdio.h>
void main()
{
	int n, count = 1;
	long a, sum = 0, temp = 0;
	printf("\nInput a and n:");
	scanf("%1d,%d", &a, &n);
	while(count <= n)
	{
		temp = temp + a;
		sum = sum + temp;
		a = a*10;
		count++;
	}
	printf("%1d\n", sum);
}
