int mystrcasecmp(char*,char*);
char flip(char);
void main() {
	char str1[] = "Hello";
	char str2[] = "hello";


	int a = mystrcasecmp(str1, str2);
	if(a == 0) {
		printf("string equal");
	} else {
		printf("String not equal");
	}
}
int mystrcasecmp(char* s1,char* s2) {
	if(strlen(s1)!=strlen(s2)) {
		return 1;
	}

	int i =0;
	while(s1[i]!='\0') {
		
		if(s1[i]!=s2[i] && s1[i]!=flip(s2[i]))
			return 1;
			
		i++;
	}
	return 0;
}
char flip(char ch) {
	if(ch>='A'&&ch<='Z') {
		ch = ch + 32;
	} else {
		ch = ch -32;
	}
	return ch;
}