int INSERTAB(ElemType A[], int n, ElemType B[], int m, int i)
{
	int j;
	for(j=n-1; j>i-2; j--)
		A[j+m] = A[j];
	for(j=0; j<m; j++)
		A[i+j-1] = B[j];
	return n+m;
}
