// /* Exercice 1 */
// #include <stdio.h>
// #include <stdlib.h>

// union Entier{
//     int x;
//     char tab[4];
// };

// int main(int argc, char **argv){
//     union Entier entier = { 999 };
//     if (entier.tab[0] != 0){
//         printf("small endian\n");
//     }
//     else if (entier.tab[3] != 0){
//         printf("big endian\n");
//     }
//     for(int i = 0; i < 4; i++){
//         printf("tab[%d]=%d", i, entier.tab[i]);
//     }
// }


// /* Exercice 2 - Complément à 1 ou 2? */
// #include <stdio.h>
// #include <stdlib.h>

// union Entier{
//     int x;
//     char tab[4];
// };

// int main(int argc, char **argv){
//     union Entier entier = { -5 };
//     for(int i = 3; i >= 0; i--){
//         printf("tab[%d]=%d", i, entier.tab[i]);
//     }
// }


// /* Exercice 3 */
// #include <stdio.h>
// #include <stdlib.h>

// union Entier{
//     int x;
//     char tab[4];
// };

// void printhexa(int n){
//     printf("%d = %x", n, n);
// }

// int main(int argc, char **argv){
//     union Entier entier = { 999 };
//     for(int i = 3; i >= 0; i--){
//         printhexa(entier.tab[i]);
//         printf("\t\ttab[%d]=%d\n", i, entier.tab[i]);
//     }
// }


