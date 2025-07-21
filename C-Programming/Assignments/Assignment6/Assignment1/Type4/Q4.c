int check(int);
void main() {
	int ch;
	printf("Enter Character : ");
	scanf("%c",&ch);
	check(ch);
}
int check(int ch) {
	

	if((ch >= 'A' && ch <= 'Z')||(ch >= 'a' && ch <='z')) {
		if (ch == 'A'|| ch == 'E'|| ch == 'I'|| ch == 'O'|| ch== 'U'||ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch== 'u') {
			printf("Vowel");
		} else {
			printf("Its consonant");
		}
	} else {
		printf("Its Special character");
	}
	return 0;
}