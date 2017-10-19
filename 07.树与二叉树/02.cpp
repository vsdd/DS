int SIMILAR(BTREE T1, BTREE T2)
{
	if(T1 == NULL && T2 == NULL)
		return 1;
	if(T1 != NULL && T2 != NULL && SIMILAR(T1->lchild, T2->lchild) && SIMILAR(T1->rchild, T2->rchild))
		return 1;
	return 0;
}
