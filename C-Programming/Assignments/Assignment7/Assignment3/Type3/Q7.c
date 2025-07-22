void factorial(int*);
void main() {
	int n;
	printf("Enter an integer: ");
	scanf("%d", &n);
	factorial(&n);
}
void factorial(int* n){
	int  i;
	long fact = 1;
	if (*n < 0)
		printf("Factorial of a negative number doesn't exist.");
	else {
		for (i = 1; i <= *n; ++i) {
			fact *= i;
		}
		printf("Factorial =  %ld", fact);
	}
}