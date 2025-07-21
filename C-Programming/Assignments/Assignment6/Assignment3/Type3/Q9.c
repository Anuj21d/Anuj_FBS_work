void palindrome(int);
void main() {
	int n;
	printf("Enter an integer: ");
    scanf("%d", &n);
	palindrome(n);
}
void palindrome(int n){
	int  reversed = 0, remainder, original;
    original = n;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed)
        printf("\nno is a palindrome.");
    else
        printf("\n is not a palindrome.");

}