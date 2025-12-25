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

bool empty(node **stack){
	if(stack[0] == NULL)
		return true;
	else
		return false;
}	

int peek(node **stack){
	if(empty(stack))
		return -1;
	else{
		int i=0;
		while(stack[i] != NULL){
			//printf("stack[%d] is: %p\n",i,stack[i]);
			i++;
		}
		node *return_node = stack[--i];

		return i;
	}
}

void print_top(node **stack){
	if(peek(stack) == -1)
		printf("The stack is empty.\n");
	else
		printf("The top is: %p with %d\n",stack[peek(stack)],stack[peek(stack)]->num);


}

void push(node **stack,  int input_number){
	printf("Node with int \"%d\" is being pushed onto the stack...\n",input_number);
	int next = 1 + peek(stack);
	stack[next] = malloc(sizeof(node));
	stack[next]-> num = input_number;

	
}

node *pop(node **stack){
	if(empty(stack))
		return stack[0];
	else{
		int stack_top=peek(stack);
		node *return_node = stack[stack_top];
		printf("Node with value \"%d\" is being popped...\n",return_node->num);
		free(stack[stack_top]);
		stack[stack_top] = NULL;
		return return_node;
	}

}

int main(){
	node **stack;
	stack = initialize_stack(stack);
	push(stack,23); 
	push(stack,24);
	print_top(stack);
	pop(stack);
	print_top(stack);
	push(stack,58);
	print_top(stack);
	return 0;
}
