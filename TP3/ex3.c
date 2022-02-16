#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void fonction (FILE * fichier){
    int caractere = 0, mot = 0, ligne = 0, taille = 0, i;
    char *str = malloc(taille*sizeof(char));


    char compteur;
    while (compteur != EOF){
        compteur = fgetc(fichier);
        caractere++;
        if (compteur == ' '){
            mot++;
        }
    }
    compteur = 'a';
    while(compteur != EOF){
        while (compteur != '\0'){
            compteur = fgetc(fichier);
            taille++;
        }
        str = fgets(str, taille, fichier);
        compteur = str[taille-1];
        printf("%c ", compteur);
        ligne++;
    }

    printf("caratere = %d\nmot = %d\nligne = %d\n", caractere, mot, ligne);
    

}

int main(){
    FILE * fichier = fopen("fichier.txt" , "r+");
    fonction(fichier);

}
