#define NodeNum 100
int GET_SUB_DEPTH(BTREE T, datatype item)
{
	BTREE STACK[M], p = T;
	int top = -1;
	if(T!=NULL)
		do{
			while(p!=NULL){
				if(p->data==item)
					return GET_DEPTH(p);
				STACK[++top] = p;
				p = p->lchild;
			}
			p = STACK[top--];
			p = p->rchild;
		}while(!(p==NULL&&top==-1));
		return 0;
}
int GET_DEPTH(BTREE p)
{
	int m, n;
	if(!p)
		return 0;
	else{
		m = GET_DEPTH(p->lchild);
		n = GET_DEPTH(p->rchild);
		return(m>n? m:n) + 1;
	}
}
