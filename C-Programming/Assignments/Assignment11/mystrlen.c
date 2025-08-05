char* mystrlen(char*);
void main(){
	char str[10]="Anuj";
	int a = mystrlen(str);
	printf("Length = %d",a);
}
char* mystrlen(char* str){
	int i = 0;
	while(str[i]!='\0'){
		i++;
	} 
	return i;
}