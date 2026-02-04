#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct person{
	int age;
	float weight;
	char *name;
}person;

person *randomPerson(){
	struct person *temp;

	temp->age = (rand() % 100) + 1;
	temp->weight = (float) (rand() % 200) + 110;
	temp->name = "hold";

	return temp;

}


int main(){
	srand(time(NULL));
	
	person *list;
	list = malloc(sizeof(person*));

	const char *name_list[] = {"Jeff","Jason","Thomas"};


	
	return 0;
}
