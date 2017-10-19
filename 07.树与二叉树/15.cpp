#define NodeNum 100
TBTREE INTHEREAD(TBTREE T)
{
	TBTREE HEAD, p=T, prior, STACK[NodeNum];
	int top = -1;
	HEAD = (TBTREE)malloc(sizeof(TBNode));
	HEAD -> lchild = T;
	HEAD -> rchild = HEAD;
	HEAD -> lbit = 1;
	HEAD -> rbit = 1;
	prior = HEAD;
	do{
		while(p!=NULL){
			STACK[++p] = p;
			p = p->lchild;
		}
		p = STACK[top--];
		if(p->lchild == NULL){
			p->lchild = prior;
			p->lbit = 0;
		}
		else
			p->lbit = 1;
			if(prior->rchild == NULL){
				prior->rchild = p;
				prior->rbit = 0;
			}
			else
				prior->rbit = 1;
			prior = p;
			p = p->rchild;
		}while(!(p==NULL && top==-1));
		prior->rchild = HEAD;
		prior->rbit = 0;
		return HEAD;
	}
}
