#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char **argv){
	char *name = "Jeff";

	char *name2 = malloc(sizeof(char*)*5);

	strncpy(name2,name,5);
	printf("Name is: %s\n",name2);
	printf("Name flow: %s\n",name2[0]);

	int *x;
	x = malloc(sizeof(int*));
	*x=7;

	printf("x is: %d\n",*x);


	return 0;
}
