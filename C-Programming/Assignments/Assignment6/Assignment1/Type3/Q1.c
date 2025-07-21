int evenodd(int);
void main(){
	
	int a = 3; 
	evenodd(a);
	
		
}
int evenodd(int no){

	if (no % 2 == 0){
		printf("Num Is Even");
	}else{
		printf("Num Is odd");
	}
}