#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv)
{	
	char a ;
	FILE * fd1 = fopen("exo3.txt","r+");
	FILE * fd2 = fopen("exo3_1.txt","w+");
	if(fd1==NULL || fd2 == NULL)
	{
		perror("N'ouvre pas le fichier");
		exit(-1);
	}
	while((a=fgetc(fd1))!=EOF)
	{
		if(a != 'a' && a != 'e' && a != 'i' && a != 'o' && a != 'u' && a != 'y')		
			fwrite(&a,sizeof(char),1,fd2);
	}
	
	fclose(fd1);
	fclose(fd2);
}
