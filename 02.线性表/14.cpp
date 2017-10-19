int ISSORT(LinkList list)
{
	LinkList r = list, p =list->link;
	while(p!=NULL){
		if(p->data < r->data)
			return 0;
		r = p;
		p = p->link;
	}
	return 1;
}
