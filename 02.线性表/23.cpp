void INVERTCIR(LinkList list)
{
	LinkList p, q, r;
	p = list->link;
	q = list;
	while(p!=list){
		r = q;
		q = p;
		p = p->link;
		q->link = r;
	}
	list->link = q;
}
