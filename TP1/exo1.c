#include <stdio.h>
#include <stdlib.h>
#include "exo2.c"

//Exercice 1

int AfficheTab(int taille, int * T)
{
	int i = 0;
	if(T!=NULL){
		for (i = 0; i < taille; i++){
			printf("%d ,",T[i]);
			}
		printf("\n");
	return 1;		
	}
return 0;
}
//Exercice 4
int test(){
	void * Z = TabFibonacci(10);
	int * X = Z;
	AfficheTab(10,X);
}

int test2(){
	void * Z = TabFibonacci(10);
	int * X = Z;
	AfficheTab(8,(int *)((char *)X+8));
}

//Main
int main(int argc, char ** argv)
{
	int i;
	int * tab=malloc(sizeof(int)*15);
	if(tab==NULL){exit(-1);}
	for(i = 0; i<15 ;i++){
		tab[i]=15-i;
	}
	//AfficheTab(15,tab);
	//test();
	test2();
	free(tab);
}
