#include<stdio.h>
void operation();
void main() {
	operation();
}
void operation() {
	int Num1,Num2;
	int res;
	char Op;

	printf("Enter Num1 : ");
	scanf("%d",&Num1);
	printf("Enter Num2 : ");
	scanf("%d",&Num2);
	fflush(stdin);
	printf("Enter Operator (+,-,*,%,/): ");
	scanf("%c",&Op);

	if(Op == '+') {
		res = Num1 + Num2;
		printf("result = %d",res);
	} else if(Op == '-') {
		res = Num1 - Num2;
		printf("result = %d",res);
	} else if(Op == '*') {
		res = Num1 * Num2;
		printf("result = %d",res);
	} else if(Op == '%') {
		res = Num1 % Num2;
		printf("result = %d",res);
	} else if(Op == '/') {
		res = Num1 / Num2;
		printf("result = %d",res);
	} else {
		printf("Not Correct Operation Entered");
	}
}