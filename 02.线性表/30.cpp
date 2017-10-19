int DMOVE(DLinkList list)
{
	DLinkList p = list->rlink, q = list->llink;
	int temp;
	if(p == list)
		return 0;
	while(p!=q){
		while(p->data > 0 && p!= list)
			p = p->rlink;
		while(q->data<0 && q!=list)
			q = q->llink;
		if(q->rlink != p){
			temp = p->data;
			p->data = q->data;
			q->data = temp;
			p = p->rlink;
			q = q->llink;
			if(q->rlink == p || (p == list && q = list))
				return 1;
		}
		else
			return 1;
	}
}
