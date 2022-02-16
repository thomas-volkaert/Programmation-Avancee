#include <stdio.h>
#include <stdlib.h>

/*Question 1

M = {6,8,-1},{12,3},{7}

*/

//Question 2
int CreerM(int * T, int n){
	int i,j,k;
	int ** M=malloc(sizeof(int));
	//if(T==NULL){return NULL;}
	for (i = 0; i < n; i++){
		for (j = 0; j < n-i-1; j++){
			for(k = 0; k < n-i-1; k++){
				M[i][j]=M[i][k]+M[i][j];
			}
		}						
				
	}
	return M
}


//Question 3
int AfficheM(int taille, int ** T)
{
	int i,j;
	if(T!=NULL){
		for (i = 0; i < taille; i++){
			for (j = 0; i < taille-i-1; j++){
				printf("%d ,",T[i][j]);
				}
		}
		printf("\n");
	return 1;		
	}

}

//Question 4
int LibereM(int taille, int * T){
	int i,j;
	if(T!=NULL){
		free(T);		
	}
}


//Main
int main(int argc, char ** argv){
	int T[4]= {4,2,6,-5};
	
}
