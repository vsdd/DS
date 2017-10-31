BTREE FINDBROTHER(BTREE T, BTREE q)
{
	BTREE STACK[M], P = T;
	int top = -1;
	do{
		while(p != NULL){
			if(p->lchild == q)
				return p->rchild;
			if(p->rchild == q)
				return p->lchild;
			STACK[++top] = p;
			p = p->lchild;
		}
		p = STACK[top--];
		p = p->rchild;
	}while(p != NULL || top != -1)
}
