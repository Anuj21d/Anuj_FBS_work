char* mystrlow(char*);
void main() {
	char str[10]="ANUJ";
	mystrlow(str);
	printf("str = %s",str);
}
char* mystrlow(char* str) {
	int i = 0;
	while(str[i]!='\0') {
		if(str[i]>='A'&&str[i]<='Z'){
			str[i] = str[i] + 32;
		}
		i++;
	}
	str[i]='\0';
}