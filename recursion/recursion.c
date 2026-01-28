#include<stdlib.h>
#include<stdio.h>

int seriesSum(int a){
	if (a == 0)
		return 0;
	else{
		return seriesSum(a-1)+a;
	}
}

int main(int argc, char **argv){
	int input = atoi(argv[1]);
	if (argc < 2){
		printf("Input error--too few arguments\n");
		return 1;
	}

	printf("The series sum of %d is: %d\n",input, seriesSum(input));

	int z = seriesSum(5);

	printf("z is: %d\n",z);

	return 0;
}
