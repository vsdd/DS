#define MaxSize 100
int PAIRBRACKET(char E[])
{
	char STACK[MaxSize];
	int i = 0, top = -1;
	while(E[i] != '@'){
		if(E[i] == '(')
			STACK[++top] = E[i];
		if(E[i] == ')')
			if(top == -1)
				return 0;
			top--;
		i++;
	}
	return top == -1;
}
