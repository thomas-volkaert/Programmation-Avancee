#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv)
{	
	int i;
	int * T = malloc(512*sizeof(int));

	FILE * fd1 = fopen("exo4.txt","w+");
	if(fd1==NULL)
	{
		perror("N'ouvre pas le fichier");
		exit(-1);
	}

	for(i = 0; i < 512; i=i+1)
	{
		T[i]=i;
	}

	fwrite(T,sizeof(int),512,fd1);
	fclose(fd1);
}
