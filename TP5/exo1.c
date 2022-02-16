#include <stdio.h>
#include <stdlib.h>


//Affiche Tab dans l'ordre
int afficheTabOrdre(int * T, int s){
	int i;
	for(i=0;i<s;i++){	
		printf("%d \n", T[s]);
	}
}

//Main
int main(int argc, char ** argv){
	int T[]= {1,2,3,4,5,6};
	int s = 6;
	afficheTabOrdre(T,s);
}
