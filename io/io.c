#include<stdlib.h>
#include<stdio.h>
#include<strings.h>

void usage(int argc){
	if(argc < 2){
		printf("Error! bad input\n");
		exit(1);
	}
}

int main(int argc, char **argv){
	FILE *fptr;
	fptr = fopen("test","w+");

	usage(argc);

	fprintf(fptr, "%s", argv[1]);
	fclose(fptr);

	return 0;
}

	
