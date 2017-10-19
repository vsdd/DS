int EQUALBT(BTREE T1, BTREE T2)
{
	if(T1 == NULL && T2 == NULL)
		return 1;
	if(T1!=NULL && T2!=NULL &&T1->data==T2->data&&EQUALBT(T1->lchild, T2->lchild)&&EQUALBT(T1->rchild, T2->lchild))
		return 1;
	return 0;
}
