void roll(struct st **p)
{
	int ro;
	struct st *pre,*t=*p;
	printf("Enter the roll number to delete\n");
	scanf("%d",&ro);
	while(t!=0)
	{
		if(t->roll==ro)
		{
			if(*p==t)
			*p=t->next;
			else
			pre->next=t->next;

			free(t);t=NULL; 
                        printf("This %d data are delete successfully\n",ro);return;
		}
		else
		{
			pre=t;
			t=t->next;
		}
	}
}
void name(struct st **p)
{
        char na[20];
        struct st *pre,*t=*p;
        printf("Enter the name to delete\n");
        scanf("%s",na);
        while(t!=0)
        {
                if(strcmp(t->name,na)==0)
                {
                        if(*p==t)
                        *p=t->next;
                        else
                        pre->next=t->next;

                        free(t);t=NULL;
                        printf("This %s data are delete successfully\n",na);return;
                }
                else
                {
                        pre=t;
                        t=t->next;
                }
        }
}

struct st* delete(struct st*hd)
{
	if(hd==0)
	{
        	printf("\e[1;31mNO RECORD AVAILABLE\e[1;37m\n");
		return 0;
	}
	char op;
	print(hd);
	printf("R/r : Enter roll to delete\nN/n : Enter name to delete\n");
	scanf(" %c",&op);
	if((op=='r')|(op=='R'))
	roll(&hd);
	else if((op=='n')|(op=='N'))
	name(&hd);
}

