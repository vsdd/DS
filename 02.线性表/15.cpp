LinkList EXCHANGE(LinkList list, LinkList p)
{
	LinkList q = list;
	if(p == list){
		list = list->link;
		p->link = p->link->link;
		list->link = p;
	}
	else{
		while(q->link != p)
			q = q->link;
		q->link = p->link;
		p->link = p->link->link;
		q->link->link = p;
	}
	return list;
}
