int factorial();
void main() {
	long a = factorial();
	printf("Factorial =  %ld", a);
}
int factorial(){
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
		return fact;
	}
}