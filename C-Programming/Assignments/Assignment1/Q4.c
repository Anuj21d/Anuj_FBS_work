void main(){
	int ch;
	
	printf("Enter Character : ");
	scanf("%c",&ch);
	
	if((ch >= 'A' && ch <= 'Z')||(ch >= 'a' && ch <='z')){
		if (ch == 'A'|| ch == 'E'|| ch == 'I'|| ch == 'O'|| ch== 'U'||ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch== 'u'){
			printf("Its a vowel");
		}
		else{
			printf("Its consonant");
		}
	}
	else {
		printf("Its a special character");
	}
}