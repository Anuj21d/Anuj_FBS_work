#include<stdio.h>
struct employee{
	int id;
	char name[10];
	int salary;
};
void main(){
	struct employee s1;
	printf("Enter Id oF employee : ");
	scanf("%d",&s1.id);
	fflush(stdin);
	printf("Enter name oF employee : ");
	gets(s1.name);
	
	printf("Enter salary oF employee : ");
	scanf("%d",&s1.salary);
	
	printf("Id = %d name =%s salary =%d",s1.id,s1.name,s1.salary);
}