char* mystrupr(char*);
void main() {
	char str[10]="anuj";
	mystrupr(str);
	printf("str = %s",str);
}
char* mystrupr(char* str) {
	int i = 0;
	while(str[i]!='\0') {
		if(str[i]>='a'&&str[i]<='z'){
			str[i] = str[i] - 32;
		}
		i++;
	}
	str[i]='\0';
}