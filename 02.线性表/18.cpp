LinkList COMBINE(LinkList X, LinkList Y)
{
	LinkList p, q, Z=X;
	if(X->link == NULL)
		X->link = Y;
	else{
		do{
			p = X->link;
			q = Y->link;
			X->link = Y;
			Y->link = p;
			X = p;
			Y = q;
		}while(p->link != NULL && q!=NULL);
	if(p->link == NULL)
		X->link = Y;
	}
	return Z;
}
