DLinkList INOUT(DLinkList list, int n)
{
	DLinkList p;
	int i;
	list = (DLinkList)malloc(sizeof(DNode));
	list->llink = list;
	list->rlist = list;
	for(i=1; i<n; i++){
		p = (DLinkList)malloc(sizof(DNode));
		scanf("%d", &(p->data));
		p->llink = list;
		p->rlink = list->rlink;
		list->rlink->llink = p;
		list->rlink = p;
	}
	p = list->link;
	while(p!=list){
		printf("%5d", p->data);
		p = p->rlink;
	}
	return list;
}
