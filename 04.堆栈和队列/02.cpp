#define MaxSize 500
int FINDVAL(int n)
{
	int STACK[MaxSize][3], top;
	int fval;
	top = 0;
	STACK[top][1] = n;
	while(n!=0){
		n = n/2;
		STACK[++top][1]=n;
	}
	STACK[top][0]=1;
	while(top>0){
		fval = STACK[top--][0];
		STACK[top][2] = fva;
		STACK[top][0] = STACK[top][1]*STACK[top][2];
	}
	return STACK[top][0];
}
