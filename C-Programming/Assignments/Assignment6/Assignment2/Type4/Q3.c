#include<stdio.h>
int greater(int,int);
void main() {
	int a, b;

	printf("enter the number");
	scanf("%d",&a );


	printf("enter the number");
	scanf("%d",&b );

	int r = greater(a,b);
	if(r==1) {
		printf("a is greater");
	} else {
		printf("b is greater");
	}
}
int greater(int a, int b) {
	if(a>b)
		return 1;
}