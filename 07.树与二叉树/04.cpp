void RELEASE(BTREE&T)
{
	if(T!=NULL)
	{
		RELEASE(T->lchild);
		RELEASE(T->rchild);
		free(T);
	}
}
