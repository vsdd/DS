#define NodeNum 100
int TESTSORTTREE(BTREE T)
{
	BTREE STACK[NodeNum], p = T;
	int top = -1;
	datatype priordata = MinValue;
	if(T!=NULL){
		do{
			while(p!=NULL){
				STACK[++top] = p;
				p = p->lchild;
			}
			p = STACK[top--];
			if(p->data < priordata)
				return 0;
			priordata = p->data;
			p = p->rchild;
		}while(!(p == NULL && top == -1));
	}
	return 1;
}
