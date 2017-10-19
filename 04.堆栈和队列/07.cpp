void INSERT_CIRL(LinkList rear, ElemType item)
{
	LinkList p;
	p = (LinkList)malloc(sizeof(LNode));
	p->data = item;
	p->link = rear->link; rear->link = p;
	rear = p;
}

DELETE_CIRL(LinkList rear, ElemType &item)
{
	LinkList p, q;
	if(rear->link == rear)
		EMPTYMESSAGE("");
		
	else{
		p = rear->link;
		item = p->link->data;
		q = p->link;
		p->link = p->link->link;
		free(q);
	}
}
