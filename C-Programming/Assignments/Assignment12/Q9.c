int mystrlen(int*);
void main(){
	char str[100];
	printf("Enter first string :");
	gets(str);
	char str1[100];
	printf("Enter second string :");
	gets(str1);
	
	int a = mystrlen(str);
	int b = mystrlen(str1);
	if(a>b){
		printf("First String Is larger");
	}
	else{
		printf("Second String Is larger");
	}
}
int mystrlen(int* str){
	int i =0;
	int count=0;
	while(str[i]!='\0'){
		count++;
		i++;
	}
	return count;
}