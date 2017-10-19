void DELODD(ElemType A[], int &n)
{
	int i = 1, j = -1;
	while(i <= n){
		A[++j] = A[i];
		i+=2;
	}
	n = j+1;
}
