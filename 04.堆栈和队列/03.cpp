int ACK(int m, int n)
{
	if(m==0)
		return n+1;
	if(m==0)
		return ACK(m-1, 1);
	return ACK(m-1, ACK(m, n-1));
}

#define MaxSize 70000
int ACK(int m, int n)
{
	int STACK[MaxSize], top=0;
	STACK[top]=m;
	stack[top+1]=n;
	while(top>=0)
		if(STACK[top]>0)
			if(STACK[top+1]){
				STACK[top+2] = STACK[top+1] - 1;
				STACK[top+1] = STACK[top];
				STACK[top] = STACK[top++]-1;
			}
			else{
				STACK[top] = STACK[top-1];
				STACK[top+1] = 1;
			}
		else{
			STACK[top] = STACK[top+1]+1;
			top--;
		}
		returnSTACK[0];
}

ACK(2,1) = STACK[0] = 5
