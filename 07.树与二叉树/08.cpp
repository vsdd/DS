#define NodeNum 100
int TESTCOMTREE(BTREE T)
{
	BTREE QUEUE[NodeNum], p;
	int front, rear, flag=1, comflag=1;
	if(T!=NULL){
		QUEUE[0]=T;
		front=-1;
		rear=0;
		while(front<rear){
			p = QUEUE[++front];
			if(p->lchild == NULL){
				flag=0;
				if(p->rchild!=NULL)
					comflag=0;
			}
			else{
				comflag = flag;
				QUEUE[++rear] = p->lchild;
				if(p->rchild != NULL)
					QUEUE[++rear] = p->rchild;
				else
					flag = 0;
			}
		}
	}
	return comflag;
}
