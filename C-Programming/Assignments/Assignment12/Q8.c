void main(){
	char str[100];
	
	printf("Enter String : ");
	gets(str);
	
	
	int i=0;
	int words =0;
	while(str[i]!='\0'){
		if((str[i]!=' ' && str[i]!='\n')&&(i==0||str[i-1]==' '||str[i-1]=='\0')){
			words++;
		}
		i++;
	}
	printf("No of words Is : %d",words);
}