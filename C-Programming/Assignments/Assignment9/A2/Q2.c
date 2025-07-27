#include<stdio.h>
void tringle(int*,int*,int*);
void main() {
	int a[2],b[2],c[2];
	for(int i=0; i<2; i++) {
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(int i=0; i<2; i++) {
		printf("Enter b[%d]:",i);
		scanf("%d",&c[i]);
	}
	for(int i=0; i<2; i++) {
		printf("Enter c[%d]:",i);
		scanf("%d",&c[i]);
	}
	tringle(a,b,c);
}
void tringle(int* a,int* b,int* c) {
	for(int i=0; i<2; i++)  {

		if(a[i] == b[i] && b[i] == c[i]) {
			printf("The trangle is equilateral.\n");
		} else if(a[i]==b[i] || a[i]==c[i] || b[i]==c[i]) {
			printf("The trangle is isosceles.\n");
		} else {
			printf("The trangle is scalene.\n");
		}

	}
}
