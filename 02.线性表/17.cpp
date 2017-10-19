LinkList SEARCHNODE(LinkList list, int k)
{
	LinkList p, r;
	int i;
	if(list != NULL && k>0){
		p = p->link;
		if(p == NULL){
			printf("k");
			return NULL;
		}
	}
	r = list;
	while(p->link != NULL){
		p = p->link;
		r = r->link;
	}
	return r;
}
