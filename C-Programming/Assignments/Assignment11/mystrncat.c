char* mystrncat(char*,char*,int);
void main(){
	char str[10]="Anuj";
	char str1[10] ="alone";
	mystrncat(str,str1,3);
	printf("str= %s",str);
}
char* mystrncat(char* str,char* str1,int n){
	int count = 0;
	while(str[count]!='\0'){
		count++;
	} 
	int i =0;
	int j =0;
	while(j<n){
		str[count+i]=str1[j];
		i++;
		j++;
	}
	str[count+i]='\0';	
}