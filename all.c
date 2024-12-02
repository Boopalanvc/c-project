struct st* all(struct st *t)
{
	char op;
	if(t==0)
	{
		printf("\e[1;31mNO RECORD AVAILABLE\e[1;37m\n");
		return 0;
	}
	else
	{
		printf("The data is deleted permently, also want delete(y/n)\n");
		scanf(" %c",&op);
		if((op=='y')|(op=='Y'))
		{
			struct st *d;
			while(t!=0)
			{
				d=t->next;
				free(t);
				t=d;
			}
			printf("All nodes is deleted sucessfully\n");
			return 0;
		}
		else 
			return 0;
	}
}
