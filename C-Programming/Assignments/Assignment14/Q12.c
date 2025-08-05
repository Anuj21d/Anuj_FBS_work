#include<stdio.h>
typedef struct employee {
	int id;
	char name[10];
	int salary;
} employee;

void main() {
	employee empdata[5];

	for(int i = 0; i<5; i++) {
		printf("Enter Id :");
		scanf("%d",&empdata[i].id);
		fflush(stdin);
		printf("Enter Name :");
		gets(empdata[i].name);
		printf("Enter salary :");
		scanf("%d",&empdata[i].salary);
		printf("\n");
	}
	for(int i = 0; i<5; i++) {
		printf("ID : %d , Name : %s , Salary : %d",empdata[i].id,empdata[i].name,empdata[i].salary);
		printf("\n");
	}

}
//employee storedata();
//void display(employee);
//employee storedata(){
//	employee temp;
//
//	printf("Enter Id :");
//	scanf("%d",&temp.id);
//	fflush(stdin);
//	printf("Enter Name :");
//	gets(temp.name);
//	printf("Enter salary :");
//	scanf("%d",&temp.salary);
//
//	return temp;
//}