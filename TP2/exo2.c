#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv)
{	
	int lu = 0;
	char * T = malloc(100*sizeof(char));
	FILE * fd1 = fopen("exo2_1.txt","r+");
	FILE * fd2 = fopen("exo2_2.txt", "a+");
	if(fd1==NULL || fd2==NULL){
		perror("N'ouvre pas le fichier");
		exit(-1);
	}

	while((lu=fread(T,sizeof(char),100,fd1))!=0){
		fwrite(T,sizeof(char),lu,fd2);
	}

	fclose(fd2);
	fclose(fd1);
}
