#include <stdio.h>
#include <stdlib.h>

//Cf TP1 exo5
int Permutation(int * T, int n){
	if(T==NULL){return 0;}
	int * Tem=malloc(n*sizeof(int));
	if(Tem==NULL){return 0;}
	for(i = 0, i < n, i++){
		if(Tem[i]<0 || T[i]>=n){return 0;}
	}
	for(i = 0, i < n, i++){
		Tem[i]=0
	}
	for (i = 0, i < n, i++){
		Tem[T[i]]=0
	}
	for (i = 0, i < n, i++){
		if(Tem[i]!=1){return 0;}
	}
return 1
}

int main(int argc, char ** argv)
{	
	FILE * fd1 = fopen("exo5_1.txt","r+");
	FILE * fd2 = fopen("exo5_2.txt", "w+");

	if(fd1==NULL || fd2==NULL){
		perror("N'ouvre pas le fichier");
		exit(-1);
	}

	
	fclose(fd2);
	fclose(fd1);
}


