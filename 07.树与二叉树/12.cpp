#define NodeNum 100
void PRINTLEFT(BTREE T)
{
	BTREE STACK[M], p = T;
	int top = -1;
	if(T!=NULL)
		do{
			while(p!=NULL){
				STACK[++top] = p;
				p = p->lchild;
				if(p!=NULL)
					PRINT(p->data);
			}
			p = STACK[top--];
			p = p->rchild;
		}while(!(p==NULL&&top==-1));
}
