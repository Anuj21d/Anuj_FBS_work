void isprime(int);
void main() {
	int n;

	printf("Enter the upper limit (n): ");
	scanf("%d", &n);
	isprime(n);
}
void isprime(int n) {


	printf("Prime numbers between 1 and %d are:\n", n);

	for (int i = 2; i <= n; i++) {
		int isPrime = 1;

		for (int j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				isPrime = 0;
				break;
			}
		}

		if (isPrime) {
			printf("%d ", i);
		}
	}
}