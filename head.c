int c=1;
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct st
{
	int roll;
	char name[20];
	float mark;
	struct st*next;
};
#include"menu.c"
#include"add.c"
#include"show.c"
#include"delete.c"
#include"all.c"
#include"save.c"
#include"exit.c"
#include"mod.c"
#include"rev.c"
#include"sort.c"
struct st*hd=0;
