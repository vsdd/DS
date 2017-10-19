int LEVEL(BTREE T, BTREE p, int d)
{
	int subtreelevel;
	if(T==NULL)
		return 0;
	if(T==p)
		return d;
	if((subtreelevel = LEVEL(T->lchild, p, d+1)) > 0)
		return subtreelevel;
	else
		return LEVEL(T->rchild, p, d+1);
}
