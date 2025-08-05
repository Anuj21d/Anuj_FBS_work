void main(){
	char str[10];
	printf("Enter string : ");
	gets(str);
	int size = strlen(str);
	printf("After Swap");
	
	char temp = str[0];
	str[0]=str[size-1];
	str[size-1]=temp;
	
	printf("String IS : %s",str);
}