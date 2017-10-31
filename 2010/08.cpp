#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<alloc.h>
#define DEFLINES 10
#define MAXLEN 81

struct Tail{
	char data[MAXLEN];
	struct Tail *link;
};

main(int argc, char *argv[])
{
	char curline[MAXLEN], *filename;
	int n = DEFLINES, i;
	struct Tail *list, *ptr, *qtr;
	FILE *fp;
	
	if(argc == 3 && argv[1][0] == '-'){
		n = atoi(argv[1] + 1);
		filename = argv[2];
	}
	else if(argc == 2)
	{
		filename = argv[1];
		else
		{
			fprintf(stderr, "Usage: tail[-n]filename\n");
			exit(1);
		}
	}
	if((fp = fopen(filename, "r")) == NULL)
	{
		fprintf(stderr, "Cann't open file: %s!\n", filename);
		exit(-1);
	}
	
	list = qtr = (struct Tail *) malloc (sizof(struct Tail));
	qtr->data[0] = '\0';
	ptr->link = ptr;
	qtr = ptr;
}
ptr->link = list;

ptr = list;
while(fgets(curline, MAXLEN, fp) != NULL)
{
	strcpy(ptr->data, curline);
	ptr = ptr->link;
}

for(i=0; i<n; i++)
{
	if(ptr->data[0] != '\0')
		printf("%s", ptr->data);
	ptr = ptr->link;
}
fclose(fp);
return 0;
}
