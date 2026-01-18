#include<stdlib.h>
#include<stdio.h>


int main(){
	int num_floats = 20;
	float *np = malloc(sizeof(float));
	float *p = realloc(np,num_floats * sizeof(float));

	int i;
	for(i=0;i<num_floats;i++)
		p[i] = i / (float)num_floats;

	for(i=0;i<num_floats;i++)
		printf("float is: %f\n",p[i]);

	num_floats = 40;

	p = realloc(p,num_floats * sizeof(float));

	for(i=0;i<num_floats;i++)
		printf("float round 2 is: %f\n",p[i]);

	printf("\n");
	for(i=0;i<num_floats;i++)
		printf("The memory address is: %p\n",p + (i * sizeof(float)));

	printf("Size of float: %x\n",sizeof(p));

return 0;
}
