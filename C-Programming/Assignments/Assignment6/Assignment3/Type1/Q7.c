#include<stdio.h>
void factorial();
void main() {
	factorial();
}
void factorial(){
	int n, i;
	long fact = 1;
	printf("Enter an integer: ");
	scanf("%d", &n);

	if (n < 0)
		printf("Factorial of a negative number doesn't exist.");
	else {
		for (i = 1; i <= n; ++i) {
			fact *= i;
		}
		printf("Factorial of %d = %ld", n, fact);
	}
}