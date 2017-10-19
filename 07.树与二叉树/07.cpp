int SEARCHPOS(datatype INOD[], int n, datatype item)
{
	int i;
	for(i=0; i<n; i++)
		if(INOD[i] == item)
			return i+1;
}

void INSERTITEM(BTREE &T, datatype item)
{
	BTRRE p, q;
	int ord;
	p = (BTNode)malloc(sizeof(BTREE));
	p->data = item;
	p->lchild = p->rchild = NULL;
	if(T==NULL)
		T = p;
	else{
		ord = SEARCHPOS(INOD, n, item);
		q = T;
		while(1)
			if(ord<SEARCHPOS(INOD, n, q->data))
				if(q->lchild != NULL)
					q=q->lchild;
				else{
					q->lchild = p;
					break;
				}
			else
				if(q->rchild != NULL)
					q = q->rchild;
				else{
					q->rchild = p;
					break;
				}
	}
}
