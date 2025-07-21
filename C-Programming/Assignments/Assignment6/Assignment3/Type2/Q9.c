int palindrome();
void main() {
	int a = palindrome();
	if(a==1)
	printf("\nno is a palindrome.");
    else
        printf("\n is not a palindrome.");
}
int palindrome(){
	int n, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed)
        return 1;

}