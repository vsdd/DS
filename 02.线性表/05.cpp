void DELETODD(int A[], int &n)
{
	int i = 0;
	while(i<n){
		if(A[i]%2 != 0)
			DELETELIST(A, n, i+1);
		else
			i++;
	}
}
