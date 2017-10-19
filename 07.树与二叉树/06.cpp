#define NodeNum 100
void ANCESTOR(BTREE T, int item)
{
	BTREE STACK1[NodeNum], p=T;
	int STACK2[NodeNum], top=-1, flag;
	if(T!=NULL && T->data != item)
		do{
			while(p!=NULL){
				STACK1[++top] = p;
				STACK2[top] = 0;
				p = p->lchild;
			}
			p = STACK1[top];
			flag = STACK[top--];
			if(flag == 0){
				STACK1[++top] = p;
				STACK2[top] = 1;
				p = p->rchild;
			}
			else{
				if(p->data == item){
					while(top!=-1)
						printf("%4d", STACK1[top--]->data);
					break;
				}
				else
					p = NULL;
			}
		}while(!(p==NULL&&top==-1));
}
