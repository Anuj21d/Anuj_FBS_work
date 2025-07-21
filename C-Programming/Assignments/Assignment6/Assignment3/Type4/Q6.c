int perfect(int);
void main() {
	int num;
	printf("Enter a positive integer: ");
	scanf("%d", &num);
	int r = perfect(num);
	if(r==1)
		printf("Num is a Perfect number.\n");
	else
		printf("Num is not a Perfect number");
}
int perfect(int num) {
	int  sum = 0;
	for (int i = 1; i < num; i++) {
		if (num % i == 0) {
			sum += i;
		}
	}

	if (sum == num)
		return 1;
}
