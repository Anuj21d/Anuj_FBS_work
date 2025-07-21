#include<stdio.h>
int operation();
void main() {
	int a = operation();
	printf("result = %d",a);
}
int operation() {
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
	}printf("result = %d",res); else if(Op == '-') {
		res = Num1 - Num2;
	} else if(Op == '*') {
		res = Num1 * Num2;
	} else if(Op == '%') {
		res = Num1 % Num2;
	} else if(Op == '/') {
		res = Num1 / Num2;
	} else {
		return 0;
		printf("Not Correct Operation Entered");
	}
	return res;
}