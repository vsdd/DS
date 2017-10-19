LinkList list1, list2;
void SEPARATE(LinkList list)
{
	LinkList r1, r2, p=list;
	int flag = 1;
	list1 = (LinkList)malloc(sizeof(LNode));
	list1->data = 0;
	r1 = list1;
	list2 = (LinkList)malloc(sizeof(LNode));
	list2->data = 0;
	r2 = list2;
	while(p!=NULL){
		if(flag == 1){
			r1->link = p;
			r1 = p;
			list1->data++;
			flag = 2;
		}
		else{
			r2->link = p;
			r2 = p;
			list2->data++;
			flag = 1;
		}
		p = p->link;
	}
	r1->link = list1;
	r2->link = list2;
}
