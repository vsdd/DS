void PRINTELE(int k)
{
	LinkList list, p, r;
	int i, a;
	list = (LinkList)malloc(sizeof(LNode));
	list->data = 0;
	r = list;
	for(i=1; i<k; i++){
		p = (LinkList)malloc(sizeof(LNode));
		p->data = 0;
		r->link = p;
		r = p;
	}
	r->link = list;
	p = list;
	while(scanf("%d", &a) > 0){
		p->data = a;
		p = p->link;
	}
	for(i=1; i<=k; i++){
		if(p->data != 0)
			printf("%d", p->data);
		p = p->link;
	}
}
