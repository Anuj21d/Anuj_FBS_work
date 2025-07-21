int isprime(int);
void main() {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	int r = isprime(num);
	if(r==1){
		printf("Num Is prime");
	}else{
		printf("Num Is not prime");
	}		
}
int isprime(int num){
	int isPrime = 1;
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