void perfect();
void main() {
	int a = perfect();
	if(a == 1)
		printf("Num is a Perfect number.\n");
	else
		printf("Num is not a Perfect number");
}
void perfect() {
	int num, sum = 0;

	printf("Enter a positive integer: ");
	scanf("%d", &num);

	for (int i = 1; i < num; i++) {
		if (num % i == 0) {
			sum += i;
		}
	}

	if (sum == num)
		return 1;
}
