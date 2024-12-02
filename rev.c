void r(struct st *p)
{
        if(p!=0)
        {
		r(p->next);
                printf("|\t%d\t\t%s\t\t%f\t|\n",p->roll,p->name,p->mark);
        }
}
void rev(struct st *p)
{
	if(p==0)
	{
		printf("\e[1;31mNO RECORD AVAILABLE\e[1;37m\n");
		return;
	}
	printf(" _______________________________________________________ \n");
	printf("|\tROLL\t\tNAME\t\tMARK\t\t|\n");
	printf(" ------------------------------------------------------- \n");
        r(p);
	printf(" _______________________________________________________ \n");
}
