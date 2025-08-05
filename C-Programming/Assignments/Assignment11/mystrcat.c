char* mystrcat(char*,char*);
void main(){
	char str[10]="Anuj";
	char str1[10] ="alone";
	mystrcat(str,str1);
	printf("str= %s",str);
}
char* mystrcat(char* str,char* str1){
	int count = 0;
	while(str[count]!='\0'){
		count++;
	} 
	int i =0;
	while(str1[i]!='\0'){
		str[count+i]=str1[i];
		i++;
	}
	str[count+i]='\0';	
}