#include<stdio.h>
struct sales{
	int id;
	char name[10];
	int salary;
	int incentive;
	int targetamu;
};
void main(){
	struct sales a1;
	printf("Enter Id : ");
	scanf("%d",&a1.id);
	fflush(stdin);
	printf("Enter name : ");
	gets(a1.name);
	
	printf("Enter salary : ");
	scanf("%d",&a1.salary);
	
	printf("Enter incentive Amount : ");
	scanf("%d",&a1.incentive);
	
	printf("Enter Targeted Amount :");
	scanf("%d",&a1.targetamu);
	printf("Id =%d name=%s salary=%d incentive=%d Target=%d",a1.id,a1.name,a1.salary,a1.incentive,a1.targetamu);
}