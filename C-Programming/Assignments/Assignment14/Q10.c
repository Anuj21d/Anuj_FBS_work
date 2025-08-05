#include<stdio.h>
struct Product{
	int Id;
	char name;
	int price;
};
void main(){
	struct Product p1;
	printf("Enter Id : ");
	scanf("%d",&p1.Id);
	fflush(stdin);
	printf("Enter name : ");
	gets(p1.name);
	
	printf("Enter Price : ");
	scanf("%d",&p1.price);
	
	printf("Product : /n Id :%d , Name : %s ,Price :%d",p1.Id,p1.name,p1.price);
}