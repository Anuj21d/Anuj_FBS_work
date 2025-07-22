void case1(int*);
void main(){
	int ch;

	printf("Enter the ch:");
	scanf("%c",&ch);
	case1(&ch);
}
void case1(int* ch){

	
	if(*ch>='A'&& *ch<='Z'){
		printf("Upper case");
	}else{
		printf ("lower case");
	}
}