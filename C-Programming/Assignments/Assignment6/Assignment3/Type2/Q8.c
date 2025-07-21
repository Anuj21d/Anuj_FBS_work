int strong();
void main() {
	int a=strong();
	if(a == 1)
	printf("NUm is a strong number");
	else
		printf("Num is not a strong number");
}
int strong(){
	int n, temp, rem, sum = 0, i, fact;
	printf("enter num : ");
	scanf("%d",&n);
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