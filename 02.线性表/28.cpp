int SYMMETRY(DLinkList list)
{
	DLinkList front = list, rear = list->llink;
	int flag = 0;
	while(flag == 0&& front->data == rear->data){
		front = front->rlink;
		rear = rear->llink;
		if(front == rear || front->llink == rear)
		flag = 1;
	}
	if(flag == 1)
		return 1;
	else
		return 0;
}
