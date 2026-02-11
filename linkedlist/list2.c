#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct person{
	int age;
	float weight;
	char *name;
}person;

person *randomPerson(const char* input_name){
	struct person *temp;
	temp = malloc(sizeof(person*));

	temp->age = (rand() % 100) + 1;
	temp->weight = (float) (rand() % 200) + 110;
	temp->name = malloc(sizeof(char) * 100);
	temp->name = input_name;

	return temp;

}


int main(){
	srand(time(NULL));
	
	person **list;
	list = malloc(sizeof(person*) * 3);

	const char *name_list[] = {"Jeff","Jason","Thomas"};

	int x;
	for(x=0;x<3;x++)
		printf("name_x is: %s\n",name_list[x]);

	int i;
	for(i=0;i<3;i++){
		list[i]=randomPerson(name_list[(rand() % 3)]);

	}

	for(i=0;i<3;i++)
		printf("The person is: %s\n",list[i]->name);

	//cleanup

	for(i=0;i<3;i++){
		//list[i]=NULL;
		free(list[i]);
		list[i]=NULL;
	}

	
	return 0;
}
