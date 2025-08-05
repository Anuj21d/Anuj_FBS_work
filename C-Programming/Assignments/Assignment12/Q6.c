void main(){
	char str[10];
	printf("Enter string : ");
	gets(str);
	
	int i =0;
	while(str[i]!='\0'){
		if(str[i]==' '){
			str[i]='$';
		}
		i++;
	}
	printf("String IS : %s",str);
}