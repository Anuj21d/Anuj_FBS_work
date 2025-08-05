char* mystrchr(char* ,char);
void main(){
	char str[]="firstbit ";
	char ch = 'b';
	int a = mystrchr(str,ch);
	printf("%c",a);	
}
char* mystrchr(char* str,char ch){
	int i = 0;
	while(str[i]!='\0'){
		if(str[i]==ch){
			return str[i];
		}
		i++;
	}
	return '\0';
}

