#include <stdio.h>
#include <stdlib.h>

//Exercice 2

int * TabFibonacci(int n){
	int i = 0;
	int * tab=malloc(n*sizeof(int));
	if(tab==NULL){return NULL;}
	for(i = 0; i < n; i++){
		if(i<=1){tab[i] = 1;}
		else{tab[i] = tab[i-2]+tab[i-1];}
		printf("%d ,",tab[i]);		
	}
	printf("\n");
	return tab;
}

//Main
int main2(int argc, char ** argv){
	TabFibonacci(10);
}
