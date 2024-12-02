void print(struct st *p)
{
	if(p==0)
	{
		printf("\e[1;31mNO RECORD AVAILABLE\e[1;37m\n");
		return;
	}
	printf(" _______________________________________________________ \n");
	printf("|\tROLL\t\tNAME\t\tMARK\t\t|\n");
	printf(" ------------------------------------------------------- \n");
        while(p!=0)
        {
                printf("|\t%d\t\t%s\t\t%f\t|\n",p->roll,p->name,p->mark);
                p=p->next;
        }
	printf(" _______________________________________________________ \n");
}

