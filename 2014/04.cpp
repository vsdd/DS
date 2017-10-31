void DEGREE(VLink G[], int n)
{
	int num, i;
	VLink v;
	ELink *p;
	for(i=0; i<n; i++)
	{
		v = G[i];
		num = 0;
		p = v.link;
		while(p!=NULL)
		{
			num++;
			p = p->next;	
		}
		G[i].degree = num;
	}
}
