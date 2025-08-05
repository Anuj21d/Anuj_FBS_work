char* mystrchr(char* ,char);
void main(){
	char str[]="firstbit";
	char ch = 'b';
	char* a = mystrchr(str,ch);
	int index = a -str;
	printf("charater found at index : %d",index);	
}
char* mystrchr(char* str,char ch){
	int i = strlen(str)-1;
	while(str[i]!='\0'){
		if(str[i]==ch){
			return &str[i];
		}
		i--;
	}
	return '\0';
}

