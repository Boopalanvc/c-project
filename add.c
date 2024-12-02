void a(struct st **p)
{
	int r;
	char n[20];
	float m;

	FILE*fp=fopen("record.txt","r");
	if(c==1)
	{
		while((fscanf(fp,"%d %s %f\n",&r,n,&m))!=EOF)
		{
			struct st *rd=(struct st*)malloc(sizeof(struct st)),*l=*p;
			rd->roll=r;
			strcpy(rd->name,n);
			rd->mark=m;
			rd->next=0;
        		if((*p)==0)
        			(*p)=rd;
			else
			{
        			while(l->next!=0)
        				l=l->next;
			
        			l->next=rd;
			}
			c=r+1;
		}
	}	
	struct st *rd=(struct st*)malloc(sizeof(struct st)),*l=*p;
	rd->roll=c++;
	printf("Enter the name and percentage\n"); 
	scanf("%s%f",rd->name,&rd->mark);
	rd->next=0;
	if((*p)==0)
		(*p)=rd;
	else
	{
		while(l->next!=0)
			l=l->next;
		l->next=rd;
	}
	
}
struct st* add(struct st*hd)
{
	char op;
	do
	{
		a(&hd);
		printf("if you want add another record(y/n)\n");
		scanf(" %c",&op);
	}while((op=='y')|(op=='Y'));
	return hd;
}	


