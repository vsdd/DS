void DEG(int A[][3], int n, int e, int D[])
{
	int i;
	for(i=0; i<n; i++)
		D[i]=0;
	for(i=1; i<=e; i++){
		D[A[i][0]-1]++;
		D[A[i][1]-1]++;
	}
}
