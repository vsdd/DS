void HANOI(int n, char A, char B, char C)
{
	if(n == 1)
		MOVE(A, C);
	else{
		HANOI(n-1, A, C, B);
		MOVE(A, C);
		HANOI(n-1, B, A, C);
	}
}
