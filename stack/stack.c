#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int num;
	struct node *next_node;
}node;

void initialize_stack(**node stack_input){
	stack = malloc(100*sizeof(node));

	int i=0;
	for(i=0;i<100;i++)
                stack[i] = malloc(sizeof(node));

}


int main(){
	//node **stack;
	node **stack=malloc(100*sizeof(node));
	printf("The stack has address of: %p\n",stack);
	/*node *one = malloc(sizeof(node));
	one->num = 12;
	
	stack[1] = malloc(sizeof(node));
	stack[1]->num = 13;
	
	printf("the stack's first node has a value of: %d\n",stack[0]->num);
	printf("the stack's second node is: %p\n",stack[1]);
	printf("...and that value is: %d\n",stack[1]->num);
	*/

	int i=0;
	for(i=0;i<100;i++){
		stack[i] = malloc(sizeof(node));
		stack[i]->num = i+100;
		printf("Address of %d is: %p\n",i,stack[i]);
	}

	for(i=0;i<100;i++)
		printf("stack %p has i value of: %d\n",stack[i],stack[i]->num);

	return 0;
}
