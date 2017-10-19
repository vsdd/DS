typedef struct node{
	BTREE data;
	struct node *link;
}BLNode, *BLinkList;
int COUNT(BTREE T)
{
	BTREE p = T;
	BLinkList q, top = NULL;
	int n = 0;
	if(T!=NULL)
		do{
			while(p!=NULL){
				if(p->lchild != NULL && p->rchild == NULL || p->rchild != NULL && p->lchild == NULL)
					n++;
				q = (BLinkList)malloc(sizeof(BLNode));
				q->data = p;
				q->link = top;
				top = q;
				p = p->lchild;
			}
			p = top->data;
			q = top;
			top = top->link;
			free(q);
			p = p->rchild;
		}while(!(p==NULL&&top==NULL));
	return n;
}
