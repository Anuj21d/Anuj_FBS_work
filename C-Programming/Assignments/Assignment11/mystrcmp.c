int mystrcmp(char* ,char*);
void main(){
	char str[10]="Anuj";
	char str1[10]="Anuj1";
	int a = mystrcmp(str,str1);
	if(a==0){
		printf("String Are Same");
	}else{
		printf("String Are Not Same");
	}
}
int mystrcmp(char* str,char* str1){
	int i = 0;
	while(str[i]!='\0'){
		if(str[i]!=str1[i]){
			return str[i] - str1[i];
		}
		i++;
	} 
	return str[i] - str1[i];
}