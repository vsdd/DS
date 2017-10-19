#define NodeNum 100
void LAYERORDER(BTREE T)
{
	BTREE QUEUE[M], p;
	int front, rear;
	if(T!=NULL){
		QUEUE[0]=T;
		front = -1;
		rear = 0;
		while(front<rear){
			p = QUEUE[++front];
			printf("%d", p->data);
			if(p->lchild != NULL)
				QUEUE[++rear] = p->lchild;
			if(p->rchild != NULL)
				QUEUE[++rear] = p->rchild;
		}
	}
}
