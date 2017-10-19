int DEL1(LinkList &list, int i)
{
	LinkList r, q = list;
	int k;
	if(i == 1)
		list = list->link;
	else{
		for(k=1; k<i; k++){
			r = q;
			q = q->link;
			if(q == NULL)
				return -1;
		}
		r->link = q->link;
	}
	free(q);
	return 1;
}
