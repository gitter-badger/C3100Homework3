#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main (int argc, char * argsp[])
{
	int max =512;
	while(1)
	{
		
		printf("mysh> ");
		char * input = (char *)malloc(max);
		fgets(input,max,stdin);
		if(input[0]=='\0')
		{
			printf("There was no input");
		}
		else
		{
			input=parse(input);
		}
		printf("Your input was %s\n",input);
		printf("Output %d\n",strcmp(input,"exit"));
		if(strcmp(input,"exit")>0)
		{
			printf("I got here");
			exit(0);
		}
		free(input);
	}
	exit(0);
}
char * parse (char * input)
{
	char c, temp[512];
	int i,ctr=0;
	for(i=0;i<512;i++)
	{
		if(input[i]==' ')
		{ 
			break;
		}
		else
		{
			temp[ctr++]=input[i];	
		}	
	}
	temp[ctr]='\0';
	return &temp;
}
