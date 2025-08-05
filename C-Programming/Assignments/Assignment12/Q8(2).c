void main(){
	char str[100];
	
	printf("Enter String : ");
	gets(str);
	
	char* tok = strtok(str," ");
	int words =0;
	while(tok!='\0'){
		words++;
		tok = strtok('\0'," ");
	}
	
	printf("No of words Is : %d",words);
}