void MODIFY(LinkList list, ElemType d, ElemType item)
{
	LinkList p = list;
	while(p!=NULL){
		if(p->data == d)
			p->data = item;
		p = p->link;
	}
}
