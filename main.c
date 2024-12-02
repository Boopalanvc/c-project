#include"head.c"
int main()
{
	char op;
	while(1)
	{
		menu();
		scanf(" %c",&op);
		if((op=='a')|(op=='A'))
			hd=add(hd);
		else if((op=='s')|(op=='S'))
			print(hd);
		else if((op=='d')|(op=='D'))
			delete(hd);
		else if((op=='l')|(op=='L'))
			hd=all(hd);
		else if((op=='v')|(op=='V'))
			save(hd);
		else if((op=='m')|(op=='M'))
			mod(hd);
		else if((op=='r')|(op=='R'))
			rev(hd);
		else if((op=='t')|(op=='T'))
			sort(hd);
		else if((op=='e')|(op=='E'))
		{
			if(ex(hd)==0)
				break;
			else
				printf("Exiting canceled. please choose an option.\n");
		}
	}
	printf("\e[1;32m[Process completed]\n");
	return 0;
}
