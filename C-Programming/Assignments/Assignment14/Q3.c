#include<stdio.h>
struct Admin{
	int id;
	char name[10];
	int salary;
	int allowance;
};
void main(){
	struct Admin a1;
	printf("Enter Id oF Admin : ");
	scanf("%d",&a1.id);
	fflush(stdin);
	printf("Enter name oF Admin : ");
	gets(a1.name);
	
	printf("Enter salary oF Admin : ");
	scanf("%d",&a1.salary);
	
	printf("Enter Allowance oF Admin : ");
	scanf("%d",&a1.allowance);
	
	printf("Id =%d name=%s salary=%d allowance=%d",a1.id,a1.name,a1.salary,a1.allowance);
}