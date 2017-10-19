#define MaxM 100
#define MaxM 100
void SORTROW(int A[][MaxN], int m, int n)
{
	int MINA[MaxM], ROW[MaxM], B[MaxM][MaxN], i, j, d, temp1, temp2;
	for(i=0; i<m; i++)
		if(j=1; j<n; j++)
			if(A[i][j] < A[i][d])
				d = j;
			MINA[i] = A[i][d];
}
for(i=0; i<m; i++){
	temp1=MINA[i];
	temp2=ROW[i];
	j=i-1;
	while(j>-1 && temp1<MINA[j])
	{
		MINA[j+1] = MINA[j];
		ROW[j+1]=ROW[j--];
	}
	MINA[j+1] = temp1;
	ROW[j+1]=temp2;
}
for(i=0; i<m; i++)
	for(j=0; j<n; j++)
		B[i][j]=A[ROW[i]][j];
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			A[i][j] = B[i][j];
