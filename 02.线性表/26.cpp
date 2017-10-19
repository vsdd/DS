int LOCATE(DLinkList list, ElemType x)
{
	DLinkList p = list->rlink, q;
	while(p!=NULL && p->data!=x)
		p = p->rlink;
	if(p == NULL)
		return 0;
	else{
		p->freq++;
		q = p->llink;
		while(q!=list && q->freq < p->freq){
			p->llink = q->llink;
			p->llink->rlink = p;
			q->rlink = p->rlink;
			if(q->rlink != NULL)
				q->rlink->llink = q;
			p->rlink = q;
			q->link = p;
			q = p->llink;
		}
	}
	return 1;
}
