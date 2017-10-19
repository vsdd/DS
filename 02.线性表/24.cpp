LinkList CIRMODIFY(LinkList rear)
{
	LinkList p, q, r, s;
	q = rear->link;
	p = (LinkList)malloc(sizeof(LNode));
	p->data = q->data;
	r = p;
	p->link = rear->link;
	rear->link = p;
	q = q->link;
	while(q!=rear){
		s = q->link;
		p = (LinkList)malloc(sizof(LNode));
		p->data = q->data;
		p->limk = rear->link;
		rear->link = p;
		q = s;
	}
	rear = r;
	return rear;
}
