void main(){
	int num;
	
	printf("Enter Num : ");
	scanf("%d",&num);
	
	if (num > 0){
		printf("Num Is positive");
	}
	else if (num < 0){
		printf("Num Is negative");
	}
	else{
		printf("Num Is Zero");
	}
}