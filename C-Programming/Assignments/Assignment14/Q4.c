#include<stdio.h>
struct hr{
	int id;
	char name[10];
	int salary;
	int commission;
};
void main(){
	struct hr a1;
	printf("Enter Id : ");
	scanf("%d",&a1.id);
	fflush(stdin);
	printf("Enter name : ");
	gets(a1.name);
	
	printf("Enter salary : ");
	scanf("%d",&a1.salary);
	
	printf("Enter commission Amount : ");
	scanf("%d",&a1.commission);
	
	printf("Id =%d name=%s salary=%d commission=%d",a1.id,a1.name,a1.salary,a1.incentive,a1.commission);
}