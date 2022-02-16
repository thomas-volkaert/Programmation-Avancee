#include <stdio.h>
#include <stdlib.h>

//Exercice 3

int main(){
	printf("int *: %ld octets\n",sizeof(int *));
	printf("int: %ld octets\n",sizeof(int));
	printf("void: %ld octets\n",sizeof(void));
	printf("void *: %ld octets\n",sizeof(void *));
	printf("long int: %ld octets\n",sizeof(long int));
	printf("long int *: %ld octets\n",sizeof(long int *));
}
