int ex(struct st *hd)
{
	char op;
	printf("S/s :save and exit\n");
	printf("E/e :exit without saving\n");
	scanf(" %c",&op);
	if((op=='s')|(op=='S'))
	{
		save(hd);
		return 0;
	}
	else if((op=='e')|(op=='E'))
	{
		printf("Are you sure want to exit without saving?(Y/N)\n");
		scanf(" %c",&op);
		if((op=='y')|(op=='Y'))
		return 0;
		else if((op=='n')|(op=='N'))
		return 1;
	}
}


