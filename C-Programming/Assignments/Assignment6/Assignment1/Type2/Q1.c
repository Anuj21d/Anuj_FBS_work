int evenodd();
void main(){
	
	int a = evenodd();
	if(a == 1){
		printf("Num Is Even");
	}else{
		printf("Num Is odd");
	}
}
int evenodd(){
	int no = 3;
	
	if (no % 2 == 0){
		return 1;
	}
}