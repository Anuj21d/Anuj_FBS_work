void vote(int*);
void main(){
	int num = 16;
	vote(&num);
}
void vote(int* num){
	if(*num>=18){
		printf("You are eligible for vote");
	}
	else{
		printf("You are not eligible for vote");
	}
	
}