char* mystrncpy(char*,char*,int);
void main() {
	char str[10]="Anuj";
	char str1[10];
	mystrncpy(str,str1,3);
	printf("str1 = %s",str1);
}
char* mystrncpy(char* str,char* str1,int n ) {
	int i = 0;
	while(i<n) {
		str1[i]=str[i];
		i++;
	}
	str1[i] = '\0';
}