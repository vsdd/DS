#define MaxVNum 100
void CHANGE2(VLink G[], int n, vertype V[], int A[][MaxVNum])
{
	ELink *p, *r;
	int i, j;
	for(i=0; i<n; i++){
		G[i].vertex = V[i];
		G[i].link = NULL;
		for(j=0; j<n; j++)
			if(A[i][j] != 0)
			{
				p = (ELink *)malloc(sizeof(ELink));
				p->adjvex = j;
				p->next = NULL;
				if(G[i].link == NULL)
					G[i].link = p;
				else
					r->next = p;
				r = p;
			}
	}
}
