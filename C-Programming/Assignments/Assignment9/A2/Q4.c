#include<stdio.h>
void grade(int*);
void main() {
	int a[3];
	for(int i =0; i<3; i++) {
		printf("Enter marks[%d] :",i);
		scanf("%d",&a[i]);
	}
	grade(a);
}
void grade(int* a) {
	for(int i =0; i<3; i++) {

		if(a[i]>75) {
			printf("Distinction.\n");

		} else if(a[i]>65) {
			printf("First Class.\n");

		} else if(a[i]>55) {
			printf("Second Class.\n");
		} else if(a[i]>=40) {
			printf("Pass class.\n");
		} else {
			printf("Fail.\n");
		}
	}
}