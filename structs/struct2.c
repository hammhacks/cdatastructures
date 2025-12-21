#include<stdlib.h>
#include<stdio.h>

typedef struct {
	int age;
	int weight;
	struct node **link;
} node;

int main(){
	node **list;
	int input_count = 3;
	list = malloc(input_count * sizeof(*list));
	node *n1 = malloc(sizeof(node));
	node *n2 = malloc(sizeof(node));
	node *n3 = malloc(sizeof(node));

	n1->age = 21;
	n2->age = 22;
	n3->age = 25;

	n1->link = (struct node **)n2;
	n2->link = (struct node **)n3;

	node *temp = n1;

	while(temp != NULL){
		printf("The node age is: %d\n",temp->age);
		temp = (node *)(temp->link);
	}
	
	return 0;
}
