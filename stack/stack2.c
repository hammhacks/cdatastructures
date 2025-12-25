#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int num;
}node;

void *initialize_stack(node **stack_input){
	stack_input = malloc(100*sizeof(node));
	printf("function addr: %p\n",stack_input);
	int i=0;

	return stack_input;
}


int peek(node **stack){
	int i=0;
	while(stack[i] != NULL){
		printf("stack[%d] is: %p\n",i,stack[i]);
		i++;
	}
		node *return_node = stack[--i];
	printf("the top is: %p with %d\n",return_node,return_node->num);

	return i;

}

void push(node **stack,  int input_number){
	int next = 1 + peek(stack);
	stack[next] = malloc(sizeof(node));
	stack[next]-> num = input_number;

	
}


int main(){
	node **stack;
	stack = initialize_stack(stack);
	printf("The stack has address of: %p\n",stack);
	
	stack[0] = malloc(sizeof(node));
	stack[0] -> num = 2;

	//stack[1] = malloc(sizeof(node));
	//stack[1] -> num = 3;
	
	push(stack,23); 

	peek(stack);
	
	return 0;
}
