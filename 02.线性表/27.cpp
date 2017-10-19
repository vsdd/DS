void DELETEX(DLinkList list, ElemType x)
{
	DLinkList p = list->rlink;
	while(p!=list){
		p->llink->rlink = p->rlink;
		p->rlink->llink = p->llink;
		free(p);
	}
	p = p->rlink;
}
