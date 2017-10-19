void DELXY(ElemType A[], int &n, ElemType x, ElemType y)
{
	int k, pos, i=0, j=n-1;
	while(A[i]<x) i++;
	while(A[j]>y) j--;
	pos = i;
	for(k=j+1; k<n; k++)
		A[i++] = A[k];
	n = n-j+pos-1;
}
