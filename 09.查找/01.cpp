int SEQSEARCH1(int A[], int n, int k, int i) 
{
	if(i>n)
		return -1;
	if(A[i] == k)
		return i;
	return SEQSEARCH1(A, n, k, i+1);
}
