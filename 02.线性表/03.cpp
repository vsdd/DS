int SEQSEARCH(int A[], int n, int item, int pos)
{
	if(pos>n)
		return -1;
	if(A[pos] == item)
		return pos;
	return SEQSEARCH(A, n, item, pos+1);
}
