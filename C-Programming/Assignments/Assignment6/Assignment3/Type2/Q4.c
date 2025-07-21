int isprime();
void main() {
	int a = isprime();
	if(a == 1){
		printf("Num Is prime");
	}else{
		printf("Num Is not prime");
	}
}
int isprime(){
	int num, isPrime = 1;

	printf("Enter a number: ");
	scanf("%d", &num);

	if (num <= 1) {
		isPrime = 0;
	} else {
		for (int i = 2; i <= num / 2; i++) {
			if (num % i == 0) {
				isPrime = 0;
				break;
			}
		}
	}

	if (isPrime)
		return 1;
}