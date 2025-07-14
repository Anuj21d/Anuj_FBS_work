#include<stdio.h>
void main(){
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
			printf("Your Discounted Price Is : %d",discount);	
		}
		else{
			discount = price * 0.10;
			printf("Your Discounted Price Is : %d",discount);
		}
	}
	else if (ch == 'n'){
			if (price >= 600){
			discount = price * 0.15;
			printf("Your Discounted Price Is : %d",discount);	
		}
		else{
			printf("There Is Not Discount For You");
		}
	}
	else{
		printf("Enter Correct choice");
	}
}