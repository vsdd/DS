ElemType FINDMIN(ElemType A[], int n)
{
	ElemType min = A[0];
	for(i=1; i<n; i++)
		if(A[i] < min) 
			min = A[i];
	return min;
}
