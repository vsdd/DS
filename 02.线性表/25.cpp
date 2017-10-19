typedef struct node{
	int coef, exp;
	struct node *link;
}LNode, *LinkPoly;
LinkPoly POLY(int n)
{
	LinkPoly p, q, r, list=NULL;
	int k;
	for(k=1; k<=n; k++){
		p = (LinkPoly)malloc(sizeof(LNode));
		scanf("%d%d", &(p->exp));
		p->link = NULL;
		if(list == NULL)
			list = p;
		else{
			q = list;
			while(q!=NULL){
				if(p->exp > q->exp){
					p->link = q;
					if(q == list)
						list = p;
					else
						r->link = p;
					break;
				}
				else{
					r = q;
					q = q->link;
				}
			}
			if(q == NULL)
				r->link = p;
		}
	}
	return list;
}
