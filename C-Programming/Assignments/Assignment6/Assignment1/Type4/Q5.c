int vote(int);
void main(){
	int num = 16;
	int r = vote(num);
	if(r == 1){
		printf("You are eligible for vote");
	}
	else{
		printf("You are not eligible for vote");
	}
}
int vote(int num){
	if(num>=18){
		return 1;
	
}