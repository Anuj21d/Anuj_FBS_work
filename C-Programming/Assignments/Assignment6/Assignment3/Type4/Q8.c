int strong(int);
void main() {
	int n;
	printf("enter num : ");
	scanf("%d",&n);
	int r = strong(n);
	if(r==1)
		printf("NUm is a strong number");
	else
		printf("Num is not a strong number");
}
void strong(int n) {
	int n, temp, rem, sum = 0, i, fact;
	temp = n;

	while (n) {
		i = 1;
		fact = 1;
		rem = n % 10;
		while (i <= rem) {
			fact = fact * i;
			i++;
		}
		sum = sum + fact;
		n = n / 10;
	}

	if (sum == temp)
		return 1;
}