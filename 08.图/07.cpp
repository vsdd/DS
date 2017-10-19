void INSERTEDGE(VLink G[], int n, vertype u, vertype v, int weight)
{
	Elink *p, *q, *r;
	int upos, vpos, i;
	if(i=0; i<n; i++){
		if(G[i].vertex == u)
			upos = i;
		else
		if(G[i].vertex == v)
			vpos = i;
	}
	if(G[upos].link == NULL){
		q = (ELink *)malloc(sizeof(ELink));
		q->adjvex = vpos;
		q->weight = weight;
		q->next = NULL;
		G[upos].link = q;
	}
	else{
		p = G[upos].link;
		while(p!=NULL){
			if(p->adjvex == vpos){
				p->weight = weight;
				break;
			}
			if(vpos < p->adjvex){
				q = (ELink *)malloc(sizeof(ELink));
				q->adjvex = vpos;
				q->weight = weight;
				q->next = p;
				if(p == G[upos].link)
					G[upos].link = q;
				return;
			}
			r = p;
			p = p->next;
		}
	}
}
