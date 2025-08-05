void mystrrev(char*);
void main() {
	char str[10]="anuj";
	mystrrev(str);
	printf("str = %s",str);
}
void mystrrev(char* str) {
    int i = 0;
    int j = strlen(str) - 1;
    char temp;

    while(i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}