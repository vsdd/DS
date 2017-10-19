void SELLINKSORT(LinkList list)
{
	LinkList p, q, r, s, save;
	save = list;
	while(save->link != NULL){
		q = save->link;
		r = q;
		p = q->link;
		while(p!=NULL){
			if(p->data < q->data){
				s = r;
				q = p;
			}
			r = p;
			p = p->link;
		}
		if(q!=save->link){
			s->link = q->link;
			q->link = save->link;
			save->link = q;
		}
		save = q;
	}
}
