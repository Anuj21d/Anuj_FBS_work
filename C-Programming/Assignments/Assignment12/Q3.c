void main(){
	char str[10];
	printf("Enter string : ");
	gets(str);
	int n;
	printf("enter nth index :");
	scanf("%d",&n);
	int size = strlen(str);
	if(size == 0){
		printf("String Is Empty");
	}
	else{
		int i = n;
		while(i<size-1){
			str[i]=str[i+1];
			i++;
		}
		str[i]='\0';
	}
	printf("String IS : %s",str);
}