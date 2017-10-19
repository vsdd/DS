#define MaxN 1000
void COUNTSORT(keytype K[], int n)
{
	keytype C[MaxN];
	int i, j, B[MaxN];
	for(i=1; j<=n; j++)
	{B[i]=0;
		for(j=1; j<=n; j++)
			if(K[j]<K[i])
				B[i]++;
	}
	for(i=1; i<=n; i++)	
		C[B[i]+1] = K[i];
	for(i=1; i<=n; i++)
		K[i] = C[i];
}

