typedef enum{RED, WHITE, BLUE} color;
void HOLLANDFLAG(color K[], int n){
	int i, j, s;
	color temp;
	i=1; j=1; s=n;
	while(j<=s)
		switch(K[i]){
			case RED:
				temp = K[i];
				K[i++] = K[j];
				K[j++] = temp;
				break;
			case WHITE:
				j++;
				break;
			case BLUE:
				temp = K[j];
				K[j] = K[s];
				K[s--] = temp;
		}
}
