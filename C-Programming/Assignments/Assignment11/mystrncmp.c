char* mystrncmp(char* ,char*,int);
void main(){
	char str[10]="Anuj";
	char str1[10]="Aanuj";
	int a = mystrncmp(str,str1,3);
	if(a==0){
		printf("String Are Same");
	}else{
		printf("String Are Not Same");
	}
}
char* mystrncmp(char* str,char* str1,int n){
	int i = 0;
	while(i<n){
		if(str[i]==str1[i]){
			i++;
		}
		else{
			return -1;
		}
	} 
	return 0;
}