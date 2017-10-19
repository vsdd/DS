LinkList REMOVE(LinkList list)
{
	LinkList p, q, r, s;
	q = list;
	p = list->link;
	r = list;
	while(p!=NULL){
		if(p->data < q->data){
			s = r;
			q = p;
		}
		r = p;
		p = p->link;
	}
	if(q!=list){
		s->link = q->link;
		q->link = list;
		list = q;
	}
	return list;
}
