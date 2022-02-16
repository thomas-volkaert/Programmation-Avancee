#include <stdio.h>
#include <stdarg.h>

double moyenne (int nombre, ...){
    double resultat=0;
    int i;

    va_list ap;
    va_start(ap, nombre);
    for (i=0; i<nombre; i++){
        resultat += va_arg(ap, int);
    }
    resultat = resultat/nombre;
    va_end(ap);
    printf("resultat = %lf\n", resultat);
    return 0;
}


int main(){

    int moy = moyenne(4,5,15,0,20);
}
