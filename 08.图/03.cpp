#define MaxVNum 100
void CHANGE3(VLink G[], int n, vertype V[], int A[][MaxVNum])
{
	int i, j;
	ELink *p;
	for(i = 0; i<n; i++){
		V[i] = G[i].vertex;
		for(j=0; j<n; j++)
			if(i == j)
				A[i][j] = 0;
			else
				A[i][j] = MaxValue;
		p = G[i].link;
		while(!p = NULL){
			A[i][p->adjvex] = p->weight;
			p = p->next;
		}
	}
}
