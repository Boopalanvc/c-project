void sa(struct st *s)
{
	FILE*fp=fopen("record.txt","w");
	while(s!=0)
        {
                fprintf(fp,"%d %s %f\n",s->roll,s->name,s->mark);
		s=s->next;
        }
	fclose(fp);
	printf("All data saved sucessfully\n");
}
void save(struct st*w)
{
	if(w==0)
	{
		printf("\e[1;31mNO RECORD AVAILABLE\e[1;37m\n");
		return;
	}
	else
		sa(w);
}
