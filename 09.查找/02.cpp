int SEQSEARCH2(int A[], int n, int k)
{
	int temp, i = 0;
	while(A[i] != k && i<n)
		i++;
	if(i<n){
		temp = A[i];
		A[i] = A[i-1];
		A[i-1] = temp;
		return i;
	}
	else
		return 0;
}
