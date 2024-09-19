//Jordan Recinos
//CSC-341
//Pointer Program Lab 4
#include <stdio.h>
#include <stdlib.h>

int x;
int y = 15;

int main(int argc, char *argv[]){
	int i;
	int z = 0;
	int *values;

	values = (int *)malloc(sizeof(int)*5);

	printf("The argc has the address %p \n", &argc);	
	printf("Local variable i in the stack has address %p \n",&i);
	printf("The heap malloc address is %p \n", &y);
	printf("The uninitialized x address is %p \n", &x);
	printf("The initialized y address is %p \n", &y);
	 
}

