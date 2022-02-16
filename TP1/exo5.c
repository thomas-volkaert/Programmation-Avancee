#include <stdio.h>
#include <stdlib.h>

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

int main(int argc, char ** argv){

	
	Permutation(tab, 4);
}
