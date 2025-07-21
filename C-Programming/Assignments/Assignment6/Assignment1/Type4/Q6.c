int case1(int);
void main(){
	int ch;

	printf("Enter the ch:");
	scanf("%c",&ch);
	int r = case1(ch);
	if(r==1){
		printf("Upper case");
	}else{
		printf ("lower case");
	}
}
int case1(int ch){
	if(ch>='A'&& ch<='Z')
		return 1;
}