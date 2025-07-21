int vote();
void main(){
	int a =vote();
	if(a == 1){
		printf("You are eligible for vote");
	}
	else{
		printf("You are not eligible for vote");
	}
}
int vote(){
	int num = 16;
	
	if(num>=18){
		return 1;
	}
	
}