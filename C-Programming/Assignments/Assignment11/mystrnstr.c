char* mystrstr(char*,char*,int);
void main() {
	char str[]="firstbit ";
	char str1[] ="bit";
	char* a = mystrstr(str,str1,10);
	if(a != '\0')
		printf("Substring found at position: %ld\n", a - str);
	else
		printf("Substring not found\n");
}
char* mystrstr(char* str,char* str1,int n) {
	int i, j;
    int len1 = strlen(str);
    int len2 = strlen(str1);
	for(i = 0;  i <= n - len2 && str1[i] != '\0'; i++) {
		for(j = 0; j<len2; j++) {
			if(str[i + j] != str1[j])
				break;
		}
		if(str1[j] == '\0') {
			return &str[i];
		}
	}
	return '\0';
}