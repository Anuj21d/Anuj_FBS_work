int check();
void main() {
	int a = check();
	if(a == 1){
		printf("Vowel");
	}
}
int check() {
	int ch;

	printf("Enter Character : ");
	scanf("%c",&ch);

	if((ch >= 'A' && ch <= 'Z')||(ch >= 'a' && ch <='z')) {
		if (ch == 'A'|| ch == 'E'|| ch == 'I'|| ch == 'O'|| ch== 'U'||ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch== 'u') {
			return 1;
		} else {
			printf("Its consonant");
		}
	} else {
		return 0;
	}
}