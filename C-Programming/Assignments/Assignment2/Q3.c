void main(){
	int a , b ,c;
	
	printf("Enter first Num : ");
	scanf("%d",&a);
	
	printf("Enter Second Num : ");
	scanf("%d",&b);
	
	printf("Enter Third Num : ");
	scanf("%d",&c);
	
	
	if (a>b){
		if(a>c){
			printf("First Num Is Grater");
		}
		else{
			printf("Third Num Is Grater");
		}
	}
	else{
		if(b>c){
			printf("Second Num Is Grater");
		}
		else{
			printf("Third Num Is Grater");
		}
	}
}