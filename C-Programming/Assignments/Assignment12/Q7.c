void main(){
	char str[10];
	char str1[10];
	printf("Enter string : ");
	gets(str);
	
	int i =0;
	int j =0;
	while(str[i]!='\0'){
		if(i%2==0){
			str1[j++]=str[i];
		}
		i++;
	}
	printf("String IS : %s",str1);
}