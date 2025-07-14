void main() {
	int num;
	printf("Enter Number : ");
	scanf("%d",&num);

	if(num % 3 == 0 && num % 5 == 0) {
		printf("Divisible by both");
	}else if (num % 3 == 0){
		printf("Dvisible by 3 but not by 5");
	}else if (num % 5 == 0){
		printf("Dvisible by 5 but not by 3");
	}else{
		printf("Divisible by None");
	}
}