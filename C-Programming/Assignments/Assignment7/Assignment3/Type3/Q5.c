void amstrong(int*);
void main(){
	int num;
	printf("Enter 3 digit Num : ");
	scanf("%d",&num);
	amstrong(&num);
	
}
void amstrong(int* num){
	int temp,sum = 0;
	temp = *num;
	
	while(temp != 0){
		int rem = temp % 10;
		sum = sum + (rem*rem*rem);
		temp /=10;
	}
	if(sum == *num)
		printf("Num Is Amstrong");
	else{
		printf("Num Is not Amstrong ");
	}
		
}