LinkList DEL2(LinkList list, int i, int k)
{
	LinkList p, q = list;
	int j;
	if(i == 1)
		for(j=1; j<=k; j++){
			q = list;
			list = list->link;
			free(q);
		}
	else{
		for(j=1; j<i-1; j++)
			q=q->link;
		for(j=1; j<=k; j++){
			p = q->link;
			q->link = p->link;
			free(p);
		}
	}
	return list;
}
