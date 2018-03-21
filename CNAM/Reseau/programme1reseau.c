#include <stdio.h>
#include <stdlib.h>


int main (argc, char ** argv)
{
	char ** param = argv;
	while((*param)!=NULL)
	{
		printf("%s",*param);
		param++;
	}
	for(int i = 0; argv[i]!=NULL ; i++)
	{
		printf("%s",argv[i]);
	}	
}

