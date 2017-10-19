void CHANGE(int num, int r)
{
	STLink p, top = NULL;
	do{
		p = (STlink)malloc(sizof(STNode));
		p->data = num%r;
		p->link = top;
		top = p;
		num = num/r;
	}while(num!=0);
	while(top!=NULL){
		printf("%d", top->data);
		p = top;
		top = top->link;
		free(p);
	}
}


