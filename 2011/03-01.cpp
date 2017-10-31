void PURGE(ElemType A[], int &n) 
{
	int i = 0, i, k;
	while(i<n)
	{
		j = j + 1;
		while(j < n)
			if(A[j] == A[i]){
				for(k=j; k<n; k++)
					A[k-1] = A[k];
				n--;
			}else
				j++;
			i++;
	}
}
