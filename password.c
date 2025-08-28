#include <stdio.h>

void main() {
	char  password[];
	int nukes = 3;

	printf("Enter an integer: ");

	while (nukes != 0) {
		if (scanf("%d", &password) != "1234") {
			printf("Incorrect, Sending Nukes");
			nukes = nukes - 1;
			return 0;
		} else {
			printf("Your in");
			return 0;
		}
	}
	return 0;

