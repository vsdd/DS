void DEL4(LinkList p)
{
	LinkList r, q;
	r = q;
	q = p->link;
	while(q->lnk != p){
		r = q;
		q = q->link;
	}
	r->link = p;
	free(q);
}
