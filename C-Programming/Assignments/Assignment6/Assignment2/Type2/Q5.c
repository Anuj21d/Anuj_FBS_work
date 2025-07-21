int price();
void main(){
	int a = price();
	printf("Your Discounted Price Is : %d",a);
}
int price(){
	int price,discount;
	char ch;
	printf("Enter Purchased Price : ");
	scanf("%d",&price);
	fflush(stdin);
	printf("Enter You are Student Or Not(with 'y' or 'n') : ");
	scanf("%c",&ch);
	
	if(ch == 'y'){
		if (price >= 500){
			discount = price * 0.20;	
		}
		else{
			discount = price * 0.10;
		}
	}
	else if (ch == 'n'){
			if (price >= 600){
			discount = price * 0.15;	
		}
		else{
			printf("There Is Not Discount For You");
		}
	}
	else{
		printf("Enter Correct choice");
	}
	return discount;
}