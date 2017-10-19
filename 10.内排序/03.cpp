void INSHEAP(keytype K[], int &n, keytype item)
{
	int i, j;
	n++;
	i = n;
	while(i!=1)
	{
		j=i/2;
		if(item<=K[j])
			break;
		K[i] = K[j];
		i = j;
	}
	K[i] = K[j];
	i = j;
}
K[i] = item;
}
