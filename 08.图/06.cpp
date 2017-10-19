void DELETEE(VLink G[], int n, vertype u, vertype v)
{
	ELink *p, *q, *r;
	int upos, vpos, i;
	if(i = 0; i<n; i++){
		if(G[i].vertex == u)
			upos = i;
		if(G[i].vertex == v)
			vpos = i;
	}
	p = G[upos].link;
	while(p!=NULL)
		if(p->adjvex == vpos){
			if(p == G[upos].link)
				G[upos].link = p->next;
			else
				q->next = p->next;
			r = p;
			p = p->next;
			free(r);
			break;
		}
	else{
		q = p;
		p = p->next;
	}
}

