#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;
	FILE *fp;

	fp = fopen("program.txt", "w");

	if (fp == NULL){
		printf("File open failed.\n");
		exit(1);
	}

	printf("Enter a number: ");
	scanf("%d", &num);
	fprintf(fp, "%d", num);
	fprintf(fp,"\n");
	fclose(fp);

	fp = fopen("program.txt","r");
	if (fp == NULL){
		printf("error opening.\n");
		exit(1);
	}

	fscanf(fp,"%d",&num);
	printf("The value from the file: %d\n",num);
	fclose(fp);

	return 0;
}
