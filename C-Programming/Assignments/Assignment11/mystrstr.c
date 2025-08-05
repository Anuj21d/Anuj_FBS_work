char* mystrstr(char*,char*);
void main() {
	char str[]="firstbit ";
	char str1[] = "bit";
	char* a = mystrstr(str,str1);
	if(a != '\0')
		printf("Substring found at position: %ld\n", a - str);
	else
		printf("Substring not found\n");
}
char* mystrstr(char* str,char* str1) {
	int i, j;

	for(i = 0; str[i] != '\0'; i++) {
		for(j = 0; str1[j] != '\0'; j++) {
			if(str[i + j] != str1[j])
				break;
		}
		if(str1[j] == '\0') {
			return &str[i];
		}
	}
	return '\0';
}