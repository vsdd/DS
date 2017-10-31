#include<stdio.h>
#define N 1000
void main( )
{
	FILE *fp;
	int a[N], i, num, count;
	if(fp = fopen("file.dat","r") = NULL)
	{
		printf("Can not open file!\n")	;
		exit(0);
	}
	count = 0;
	while(fscanf(fp, "%d", &num) == 1)
	{
		a[count] = num;
		for(i=0; a[i]!=num; i++);
		if(i == count)
			count++;
	}
	fclose(fp);
}
