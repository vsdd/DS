LinkList DELMAX(LinkList list)
{
	LinkList p, q, r, s;
	q = list;
	p = list->link;
	r = list;
	while(p!=NULL){
		if(p->data > q->data){
			q = p;
			s = r;
		}
		r = p;
		p = p->link;
	}
	if(q == list)
		list = list->link;
	else
		s->link = q->link;
	free(q);
	return list;
}
