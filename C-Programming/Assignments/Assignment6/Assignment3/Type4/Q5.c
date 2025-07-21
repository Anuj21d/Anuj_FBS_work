int amstrong(int);
void main() {
	int num;
	printf("Enter 3 digit Num : ");
	scanf("%d",&num);
	int a = amstrong(num);
	if(a == 1)
		printf("Num Is Amstrong");
	else {
		printf("Num Is not Amstrong ");
	}

}
int amstrong(int num) {
	int temp,sum = 0;
	temp = num;

	while(temp != 0) {
		int rem = temp % 10;
		sum = sum + (rem*rem*rem);
		temp /=10;
	}
	if(sum == num)
		return 1;

}