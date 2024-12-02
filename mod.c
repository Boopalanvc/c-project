void mname(struct st *p)
{
	char n[20];
	printf("Enter the New name :");
	scanf("%s",n);
	strcpy(p->name,n);
	printf("Record updated!\n");
}
void mmark(struct st *p)
{
	float m;
	printf("Enter the New percentage :");
	scanf("%f",&m);
	p->mark=m;
	printf("Record updated!\n");
}
void mod(struct st *p)
{
	if(p==0)
	{
        	printf("\e[1;31mNO RECORD AVAILABLE\e[1;37m\n");
		return;
	}
	int r;
	char op;
	printf("Enter the roll number to search\n");
	scanf("%d",&r);
	while(p!=0)
	{
		if(p->roll==r)
		{
			printf("Record found enter new details:\nEnter option\n");
			printf("n/N :modify name\n");
			printf("m/M :modify percentage\n");
			printf("b/B :modify both name & percentage\n");
			scanf(" %c",&op);
			if((op=='n')|(op=='N'))
			{
				mname(p);
				return;
			}
			else if((op=='m')|(op=='M'))
			{
				mmark(p);
				return;
			}
			else if((op=='b')|(op=='B'))
			{
				mname(p);
				mmark(p);
				return;
			}
		}
		p=p->next;
	}
	printf("Record with roll number %d not found.\n",r);
}
