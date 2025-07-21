#include<stdio.h>
int operation(int,int,char);
void main() {
	int a,b;
	char oprtator ;

	printf("Enter the first number:");
	scanf("%d",& a);

	printf("Enter the second number:");
	scanf("%d",& b);

	fflush(stdin);

	printf("Enter the oprtator (+,-,*,/,%):");
	scanf("%c",& oprtator);
	int r = operation(a,b,oprtator);
	printf("%d",r);
}
int operation(int a,int b, char oprtator) {
	int res;

	if(oprtator=='+') {
		res=a+b;
		return res;
	} else if(oprtator=='-') {
		res=a-b;
		return res;
	} else if(oprtator=='*') {
		res=a*b;
		return res;
	} else if(oprtator=='/') {
		res=a/b;
		return res;
	} else if(oprtator=='%') {
		res=a%b;
		return res;
	} else {
		printf("invalid choise");
	}
}