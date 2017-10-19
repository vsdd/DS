#define MaxN 100
void PREORDER(datatype BT[], int M)
{
	int STACK[MaxN], i, top = -1;
	i = 0;
	do{
		while(i<M&&<BT[i]!=0){
			VISIT(BT[i]);
			STACK[++top]=i;
			i = i*2 + 1;
		}
		i = STACK[top--];
		i = i*2 + 2;
	}while(!((i==M||BT[i]==0)&&top<0));
}
