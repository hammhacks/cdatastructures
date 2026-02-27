#include<stdio.h>
#include<stdlib.h>

struct alpha{
	int a;
	char *name;
};


int main(){

		struct alpha *holder = malloc(sizeof(holder));
		holder->a = 7;
		holder->name = malloc(sizeof(char)*100);
		holder->name = "Jason";
		printf("Num: %d  with %s\n",holder->a,holder->name);

		free(holder);
		holder = NULL;

	return 0;
}
