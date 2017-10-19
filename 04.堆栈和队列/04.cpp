#define MaxSize 10000
int GCD(int m, int n)
{
	int temp, STACK[MaxSize][2], top = 0;
	STACK[top][0] = m;
	STACK[top][1] = n;
	while(STACK[top][1] != 0)
		if(STACK[top][0] < STACK[top][1]){
			temp = STACK[top++][0];
			STACK[top][0] = STACK[top-1][1];
			STACK[top][1] = temp;
		}
		else{
			temp = STACK[top][0]%STACK[top++][1];
			STACK[top][0] = STACK[top-1][1];
			STACK[top][1] = temp;
		}
	return STACK[top][0];
}
