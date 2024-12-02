void s(struct st *p)
{
	int i=0,j;
	struct st *a[c],*t;
        while(p!=0)
	{
		a[i++]=p;
		p=p->next;
	}
	for(i=0;i<c-1;i++)
	{
		for(j=0;j<c-1;j++)
		{
			if(a[j]->mark<a[j+1]->mark)
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<c-1;i++)
                printf("|\t%d\t\t%s\t\t%f\t|\n",a[i]->roll,a[i]->name,a[i]->mark);
}
void sort(struct st *p)
{
	if(p==0)
	{
		printf("\e[1;31mNO RECORD AVAILABLE\e[1;37m\n");
		return;
	}
	printf(" _______________________________________________________ \n");
	printf("|\tROLL\t\tNAME\t\tMARK\t\t|\n");
	printf(" ------------------------------------------------------- \n");
        s(p);
	printf(" _______________________________________________________ \n");
}
