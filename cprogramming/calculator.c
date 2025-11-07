#include <stdio.h>

int main(){
	int immortan;
	int joe;
	int immortalLoch;

	printf("Enter the first number: \n");
	scanf("%d", &immortan);

	printf("Enter the second number: \n");
	scanf("%d", &joe);

	immortalLoch = immortan + joe;

	printf("The result of adding %d and %d is: %d\n", immortan, joe, immortalLoch);

	return 0;

};
