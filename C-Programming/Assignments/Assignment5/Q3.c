void main() {
	int n;
	printf("Enter num :");
	scanf("%d",&n);

	for(int i =n; i>=1; i--) {
		for(int j=1; j<=i; j++) {
			printf("*");
		}
		printf("\n");
	}
}