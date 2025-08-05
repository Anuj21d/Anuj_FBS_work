#include<stdio.h>
struct student{
	int rollno;
	char name[10];
	int marks;
};
void main(){
	struct student s1;
	struct student s2;
	struct student s3;
	
	printf("Enter RollNo :");
	scanf("%d",&s1.rollno);
	fflush(stdin);
	printf("Enter Name :");
	gets(s1.name);
	printf("Enter Marks :");
	scanf("%d",&s1.marks);
	
	printf("Enter RollNo :");
	scanf("%d",&s2.rollno);
	fflush(stdin);
	printf("Enter Name :");
	gets(s2.name);
	printf("Enter Marks :");
	scanf("%d",&s2.marks);
	
	printf("Enter RollNo :");
	scanf("%d",&s3.rollno);
	fflush(stdin);
	printf("Enter Name :");
	gets(s3.name);
	printf("Enter Marks :");
	scanf("%d",&s3.marks);
	printf("RollNo : %d name : %s Marks : %d\n",s1.rollno,s1.name,s1.marks);
	printf("RollNo : %d name : %s Marks : %d\n",s2.rollno,s2.name,s2.marks);
	printf("RollNo : %d name : %s Marks : %d\n",s3.rollno,s3.name,s3.marks);
}