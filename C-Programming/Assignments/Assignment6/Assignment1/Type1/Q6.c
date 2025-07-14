void case1();
void main(){
	case1();
}
void case1(){
	int ch;

	printf("Enter the ch:");
	scanf("%c",&ch);
	
	if(ch>='A'&& ch<='Z'){
		printf("Upper case");
	}else{
		printf ("lower case");
	}
}