void vote();
void main(){
	vote();
}
void vote(){
	int num = 16;
	
	if(num>=18){
		printf("You are eligible for vote");
	}
	else{
		printf("You are not eligible for vote");
	}
}