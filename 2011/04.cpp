#define MaxNum 50
int POSTORDER_WPL(BTREE T)
{
	BTREE STACK[MaxNum], p = T;
	int STACK2[MaxNum], flag, top = -1;
	WPL = 0;
	if(T != NULL)
	do{
		while(p != NULL)
		{
			STACK1[++top] = p;
			STACK2[top] = 0;
			p = p->lchild;
		}
		p = STACK[top];
		flag = STACK2[top--];
		if(flag == 0)
		{
			STACK1[++top] = p;
			STACK2[top] = 1;
			p = p->rchild;
		}
		else{
			if(p->lchild == NULL && p->rchild == NULL)
			WPL = WPL + p->data*(top+1);
			p = NULL;
		}while(!(p == NULL && top == -1));
		return WPL;
	}
}
