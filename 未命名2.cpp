typedef struct student_node{
	int num ,score ;
	char name[20];
	stu *next;
}stu;

struct student_creat(){
	int num, score;
	char name[20];
	int size=sizeof(stu);
	stu *head ,*tail ,*p;
	head = tail = NULL;
	scanf("%d%d%d",&num ,name ,&score);
	while(num!=0){
		p=(stu*)malloc(size);
		strcpy(p->name , name);
		p->num =num;
		p->score =score;
		p->next = NULL;
		if(head == NULL)
			head = p ;
		else tail->next = p;
		tail = p ;
		//p  		 head =tail =p 
		//pp		 p.next = pp ,tail = pp
		//ppp		 pp.next = ppp ,tail = ppp
		//pppp 	   	ppp.next = pppp , tail =pppp
		//ppppp 	pppp.next =ppppp , tail = ppppp
		//``````
		//head = p    p->pp->ppp
		scanf("%d%s%d",&num ,name ,&score);
	}
}
