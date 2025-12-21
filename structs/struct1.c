#include<stdlib.h>
#include<stdio.h>

typedef struct {
	int age;
	char *name;
} node;

int main(){

	node *x = malloc(sizeof(*x));
	x->name = malloc(sizeof(10000));
	x->name = "Jeff Hammond";
	printf("The name entered is: %s\n",x->name);
	printf("The address of the node is: %p\n",x);
	printf("The address of the name is: %p\n",x->name);
	return 0;
}
