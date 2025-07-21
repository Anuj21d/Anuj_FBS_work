int amstrong();
void main(){
	int a = amstrong();
	if(a == 1)
	printf("Num Is Amstrong");
	}else{
		printf("Num Is not Amstrong ");
	}
}
int amstrong(){
	int num ,temp,sum = 0;
	
	printf("Enter 3 digit Num : ");
	scanf("%d",&num);
	
	temp = num;
	
	while(temp != 0){
		int rem = temp % 10;
		sum = sum + (rem*rem*rem);
		temp /=10;
	}
	if(sum == num)
	return 1;
		
}