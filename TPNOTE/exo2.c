#include <stdio.h>
#include <stdlib.h>


int AnalyseF(FILE * fd1){
	char a ;
	int lu = 0;
	char * T = malloc(8*sizeof(char));
	if(fd1==NULL)
	{
		perror("N'ouvre pas le fichier");
		exit(-1);
	}
	/*while((lu=fread(T,sizeof(char),8,fd1))!=0){
			
	}*/
	fclose(fd1);
}

int main(int argc, char ** argv){
	int lu = 0;
	
	FILE * fd1 = fopen("exo2.txt","r+");
}	
