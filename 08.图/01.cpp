int CHECK(Vlink G[], int n, vertype v) 
{
	int i;
	for(i=0; j<n; i++){
		if(G[i].vertex == v)
			return i;
	}	
}

void ADJLIST(Vlink G[], int n, int e)
{
	int k, i, j;
	vertype vi, vj;
	Elink *p;
	for(k=0; k<n; k++){
		G[k].vertex = READ(vi);
		G[k].link = NULL;
	}
	for(k=0; k<e; k++){
		READ(vi, vj);
		i = CHECK(vi);
		j = CHECK(vj);
		p = (Elink *) malloc(sizeof(ELink));
		p->adjvex = j;
		p->next = G[i].link;
		G[i].link = p;
		p = (Elink *)malloc(sizeof(ELink));
		p->adjvex = i;
		p->next = G[j].link;
		G[i].link = p;
	}
}
