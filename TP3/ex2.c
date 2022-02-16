#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char * fonction(char *chaine, int n){
    int i, taille=n;
    char *tab = malloc(sizeof(char));
    for (i=0; i<n; i++){
        if (isdigit(chaine[i]) == 0){
            taille--;
        }
    }

    for (i=0; i<n; i++){
        if (isdigit(chaine[i]) == 0){
            tab[i] = chaine[i+1];
            i++;
        }
        else{
            tab[i] =  chaine[i];
        }
    }
    for (i=0; i<taille; i++){
        printf("%c \n", tab[i]);
    }
    return tab;
}




int main(){
    char chaine[5] = "1245";
    fonction(chaine,5);



}
