void INSERT(ElemType A[], int &n, ElemType k)
{
	int j, low, high=n , mid;
	while(low <= high){
		mid = (low+high)/2;
		if(k<A[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	for(j = n; j >= low; j--)
		A[j+1] = A[j];
	A[low] = k;
	n++;
}
