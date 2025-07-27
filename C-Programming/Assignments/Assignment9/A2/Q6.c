#include<stdio.h>
void divisible(int*);
void main() {
	int no[3];
	for(int i=0; i<3; i++) {
		printf("Enter the number[%d]:",i);
		scanf("%d",&no[i]);
	}
	divisible(no);
}
void divisible(int* no) {
	for(int i=0; i<3; i++) {
		if(no[i] % 3==0 && no[i] % 5==0) {
			printf("The number is divisible by both (3 and 5) %d\n");

		} else if(no[i]%3==0) {
			printf("The number is divisible by 3\n");
		} else if(no[i]%5==0) {
			printf("The number is divisible by 5\n");
		} else {
			printf("The number is not divisible by both\n");
		}
	}
}