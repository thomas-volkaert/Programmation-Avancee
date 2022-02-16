#include <stdio.h>
#include <stdlib.h>

int op1(int a, int b){
	if(a==b){
		return 0;
	}
	if(a<b){
		return 1;
	}
	else{
		return -1;
	} 
}

int op2(int a, int b){
	if(a==b){
		return 0;
	}
	if(a>b){
		return 1;
	}
	else{
		return -1;
	} 


}

int op3(int a, int b){
	if(a%2 == 0 && b%2 == 0 || a%2 != 0 && b%2 != 0){
		return 0;
	}

	if(a%2 == 0 && b%2 != 0){
		return 1;
	}

	else{
		return -1;
	}
}

