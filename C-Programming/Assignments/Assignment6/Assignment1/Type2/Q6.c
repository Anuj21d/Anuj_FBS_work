int case1();
void main(){
	int a =case1();
	if(a==1){
		printf("Upper case");
	}else{
		printf ("lower case");
	}
}
int case1(){
	int ch;

	printf("Enter the ch:");
	scanf("%c",&ch);
	
	if(ch>='A'&& ch<='Z'){
		return 1;
	}
}