void BUILDLIST(int A[], int n)
{
	int flag = 0, i = 0, j;
	scanf("%d", &A[0]);
	while(i < n-1){
		scanf("%d", &A[i+1]);
		for(j=0; j<i; j++)
			if(A[j] == A[i+1]) {
				flag = 1;
				break;
			}
		if(flag == 0)
			i++;
		else
			flag = 0;
	}
}
