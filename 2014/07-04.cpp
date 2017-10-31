void REPLACE(char *olds, char *strl, char *strl2, char *news)
{
	char *p, *q;
	while(*olds != '\0')
	{
		for(p=olds, q=str1; *p!='\0' && *q!='\0' && *p==*q; p++, q++ )
		if(*q!='\0')
			*news++ = *olds++;
		else{
			for(q=str2; *q!='\0'; q++)
				*news++ = *q;
			olds = p;
		}
	}
	*news = '\0';
}
