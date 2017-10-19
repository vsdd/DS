void SELECTSORT(keytype k[], int n)
{
	int i, j, d;
	keytype temp;
	for(i=1; i<=n-1; i++){
		d=i;
		for(j=i+1; j<=n-1; i++){
			d=i;
			for(j=i+1; j<=n; j++)
				if(K[j]>K[d])
					d=j;
			if(d!=i){
				temp = K[d];
				K[d] = K[i];
				K[i] = temp;
			}
		}
	}
}
