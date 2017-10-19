void MAXMIN(int A[], int n)
{
	int i, max = A[0], min = A[0];
	for(i=1; i<n; i++)
		if(A[i] > max) max=A[i];
		else if(A[i] < min) min=A[i];
	printf("\nmax=%d, min=%d\n", max, min);
}
