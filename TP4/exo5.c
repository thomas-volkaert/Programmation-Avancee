#include <stdio.h>
#include <stdlib.h>
#include "exo4.c"

int tri(int (* fct)(int ,int ), int * T, int n){
	int i,j,k;
	int m =0;
	for(i=0;i<n-1;i++){
		m=0;
		for(j=0;j<=n-1-i;j++){
			if(fct(T[j],T[m])==1){
				m=j;
			}
		}
		k = T[m];
		T[m]=T[n-1-i];
		T[n-1-i]=k;
	}
	return T;
}

int main(int argc, char ** argv){
	int T[] = {1,3,5,2};
	tri(op1,T,4);
	
}
