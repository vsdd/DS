void INDERGREE(VLink G[], int n, D[])
{
	int i, k;
	ELink *p;
	for(i=0; i<n; i++){
		ID[i]=0;
		OD[i]=0;
	}
	for(i=0; i<n; i++){
		k = 0;
		p = G[i].link;
		while(p!=NULL){
			k++;
			IND[p->adjvex]++;
			p = p->next;
		}
		OD[i] = k;
	}
	for(i=0; i<n; i++)
		D[i]=ID[i]+OD[i];
}
