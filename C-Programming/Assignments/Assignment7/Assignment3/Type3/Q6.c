void perfect(int*);
void main() {
	int num;
	printf("Enter a positive integer: ");
	scanf("%d", &num);
	perfect(&num);	
}
void perfect(int* num) {
	int  sum = 0;

	

	for (int i = 1; i < *num; i++) {
		if (*num % i == 0) {
			sum += i;
		}
	}

	if (sum == *num)
		printf("Num is a Perfect number.\n");
	else
		printf("Num is not a Perfect number");
}
