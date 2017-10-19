BTREE PARENT(BTREE T, BTREE p)
{
	if(T == NULL)
		return NULL;
	if(T->lchild == p || T->rchild == p)
		return T;
	p = PARENT(T->lchild);
	if(p!=NULL)
		return p;
	else
		return PARENT(p->rchild);
}
