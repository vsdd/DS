void MOVE2(int A[ ],int n,int k)
{
REVERSE(A,n-k,n-1); 
REVERSE(A,0,n-k-1); 
REVERSE(A,0,n-1); 
}
void REVERSE(int A[ ],int from,int to)
{
int i, temp;
for(i=0;i<(to-from+1)/2;i++){ 
temp=A[from+i];
A[from+i]=A[to-i];
A[to-i]=temp; 
}
}
