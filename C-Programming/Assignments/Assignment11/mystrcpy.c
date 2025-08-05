char* mystrchr(char* ,char*);
void main(){
	char str[10]="Anuj";
	char chr1[10];
	mystrchr(str,chr1);
	printf("str =%s\n",str);
	printf("chr1 =%s",chr1);
}
char* mystrchr(char* str,char* chr1){
	int i = 0;
	while(str[i]!='\0'){
		chr1[i]=str[i];
		i++;
	}
	chr1[i] = '\0'; 
	return '\0';
}