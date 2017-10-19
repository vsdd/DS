void EXCHANGE(int A[], int n)
{
	int i = 0, j = n+1, k, temp;
	while(i<n && A[i+1] <0) i++;
	while(j>1 && A[j-1] >0) j--;
	k = i+1;
	while(k<j){
		if(A[k] < 0){
			i++;
			temp = A[k];
			A[k]=A[i];
			A[i]=temp;
			k++;
		}
		else
			if(A[k] > 0){
				j--;
				temp = A[k];
				A[k] = A[i];
				A[i] = temp;
			}
			else 
				k++;
	}
}
