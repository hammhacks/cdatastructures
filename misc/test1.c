#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct alpha{
	int a;
	int b;
	struct alpha *n;
}alpha;

int main(int argc, char **argv){
	char *name = "Jeff";
	char *xyz = malloc(sizeof(char*)*25);
	xyz = "Jeff2";

	printf("*name is: %s\n",name);
	printf("*xyz is: %s\n",xyz);


	struct alpha *one = malloc(sizeof(struct alpha*));

	one->a=5;
	one->b=6;
	one->n = malloc(sizeof(struct alpha*));

	one->n->a=7;
	one->n->b=8;

	printf("one a is: %d\n",one->a);
	printf("one b is: %d\n",one->b);
	
	struct alpha *two = one->n;
	
	printf("two a is: %d\n",two->a);
	printf("two b is: %d\n",two->b);
	
	return 0;
}
