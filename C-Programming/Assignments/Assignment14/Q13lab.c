#include<stdio.h>
typedef struct employee {
	int id;
	char name[10];
	int salary;
} employee;
employee storedata();
void display(employee);
void main() {
	employee empdata[5];

	for(int i = 0; i<5; i++) {
		storedata(&empdata[i]);
	}
	fflush(stdin);
	char ch[10];
	printf("Enter Name Want To Delet :");
	gets(ch);
	for(int i = 0; i<5; i++) {
		printf("ID : %d , Name : %s , Salary : %d",empdata[i].id,empdata[i].name,empdata[i].salary);
		printf("\n");
	}

}
employee storedata(employee* temp){
	printf("Enter Id :");
	scanf("%d",&temp->id);
	fflush(stdin);
	printf("Enter Name :");
	gets(temp->name);
	printf("Enter salary :");
	scanf("%d",&temp->salary);

}