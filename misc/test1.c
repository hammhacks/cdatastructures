#include<stdio.h>
#include<stdlib.h>


typedef struct silly{
	int a;
	int b;
	char *name;
}silly;

int main(){
	int x=5;
	int *y=malloc(sizeof(x));

	y=&x;

	printf("y is: %d\n",*y);

	struct silly *alpha = malloc(sizeof(struct silly));
	struct silly *beta = malloc(sizeof(struct silly));

	alpha->a=20;
	alpha->b=21;
	alpha->name = "Jeff Hammondiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii";

	beta->a=30;
	beta->b=31;
	beta->name  = "Jessica Hammond";

	printf("The struct is of size: %d\n",sizeof(struct silly*));

	printf("beta name is: %s\n",beta->name);
	return 0;
}
