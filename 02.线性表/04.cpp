void REVERSSE(ElemType A[], int n)
{
	ElemType temp;
	int i;
	for(i=0; i<n/2; i++){
		temp = A[i];
		A[i] = A[n-i-1];
		A[n-i-1] = temp;
	}
}
