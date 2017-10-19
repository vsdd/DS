void DEL3(LinkList list)
{
	LinkList p, q, r, flag=0;
	p = list->link;
	r = list;
	while(p!=NULL){
		q = list;
		while(q!=p)
			if(q->data == p->data){
				r->link = p->link;
				free(p);
				flag = 1;
				break;
			}
			else
				q = q->link;
		if(flag){
			p = r->link;
			flag = 0;
		}
		else{
			r = p;
			p = p->link;
		}
	}
}
