#include <stdio.h>
#include <stdarg.h>

double max (int nombre, ...){
    int resultat=0, m;
    int i;

    va_list ap;
    va_start(ap, nombre);
    for (i=0; i<nombre; i++){
        m = va_arg(ap, int);
        if (resultat<m){
            resultat = m;
        }
    }
    va_end(ap);
    printf("resultat = %d\n", resultat);
    return 0;
}


int main(){

    int moy = max(4,5,15,0,20);
}
