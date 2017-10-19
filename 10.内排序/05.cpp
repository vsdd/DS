void INSLINKSORT(DLinkList list)
{
	DLinkList p, q, r, save;
	p = list->rlink->rlink;
	while(p!=list)
	{
		q = p->llink;
		save = p->rlink;
		r = save;
		while(q!=list && p->data < q->data){
			if(r == save){
				r->llink = q;
				q->rlink = r;
			}
			r = q;
			q = q->link;
		}
		if(r!=save){
			r->llink = p;
			q->rlink = p;
			p->llink = q;
			p->rlink = r;
		}
		p = save;
	}
}
