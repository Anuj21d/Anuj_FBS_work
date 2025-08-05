char* mystrchr(char* ,char);
void main(){
	char str[10];
	printf("Enter string : ");
	gets(str);
	char ch;
	printf("Enter character Want to search :");
	scanf("%c",&ch);
	char* a = mystrchr(str,ch);
	int index = a - str;
	printf("find at index : %d",index);	
}
char* mystrchr(char* str,char ch){
	int i = 0;
	while(str[i]!='\0'){
		if(str[i]==ch){
			return &str[i];
		}
		i++;
	}
	return '\0';
}

