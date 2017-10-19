typedef srtuct node{
	int data;
	struct node *lchild, *rchild;
}*BTREE;

void SORTTREE(BTREE T, int item){
	BTREE p = T;
	while(p!=NULL){
		if(p->data==item)
			break;
		if(p->data < item){
			printf("%d", p->data);
			p = p->rchild;
		}
		else{
			printf("%d", p->data);
			p = p->lchild;
		}
	}
}
