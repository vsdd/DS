FUNC(int a[])
{
	int k;
	for(k=1; k<=10; k++)
		a[k-1] = k;
	for(k=0; k<5; k++)
		a[9-k] = a[k];
}
