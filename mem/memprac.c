#include<stdio.h>
#include<stdlib.h>

struct alpha{
	int a;
	int b;
	char *name;
};

void printHello(){
	printf("Hello, World!!\n");
}

int main(){

	int i;
	for(i=0;i<9;i++){
		printHello();
		struct alpha *holder = malloc(sizeof(holder));
		holder->a = i+1;
		holder->b = i+2;
		holder->name = malloc(sizeof(char)*100);
		holder->name = "Jason";
		printf("Nums: %d and %d with %s\n",holder->a,holder->b,holder->name);

		free(holder);
		holder = NULL;
	}

	return 0;
}
