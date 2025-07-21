int palindrome(int);
void main() {
	int n;
	printf("Enter an integer: ");
	scanf("%d", &n);
	int r = palindrome(n);
	if(r==1)
		printf("\nno is a palindrome.");
	else
		printf("\n no is not a palindrome.");
}
int palindrome(int n) {
	int  reversed = 0, remainder, original;
	original = n;

	while (n != 0) {
		remainder = n % 10;
		reversed = reversed * 10 + remainder;
		n /= 10;
	}

	if (original == reversed)
		return 1;

}