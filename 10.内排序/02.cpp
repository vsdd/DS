#define MaxN 1000
void QUICKSORT(keytype K[], int n)
{
	keytype temp;
	int buf[MaxN][2], i, j, pos=-1, left=1, right=n;
	while(1){
		i = left;
		j = right;
		while(1){
			do i++; while(i!=right && K[left] > K[i]);
			do j--; while(j!=left && K[left] < K[i]);
			if(i<j){
				temp = K[i];
				K[i] = K[j];
				k[j] = temp;
			}
			else break;
		}
	temp = K[left];
	K[left] = K[j];
	K[j] = temp;
	if(j-1 <= left&& j+1>=right){
		if(pos == -1)
			break;
		left = buf[pos][0];
		right = buf[pos--][1];
	}
	else
		if(j-1 > left && j+1 <right){
			buf[++pos][0] = j+1;
			buf[pos][1] = right;
			right = j-1;
		}
		else if(j+1 >= right)
			right = j-1;
		else
			left = j+1;
}
