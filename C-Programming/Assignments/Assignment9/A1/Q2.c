void pallaidrom(int*,int);
void main() {
	int num[5];
	for(int i =0; i<5; i++) {
		printf("Enter (Three Digit NO. Only) Num[%d] : ",i);
		scanf("%d",&num[i]);
	}
	int size = sizeof(num)/sizeof(num[0]);
	for(int i =0; i<5; i++) {
		printf("%d ",num[i]);
	}
	printf("\n");
	pallaidrom(num,size);
}
void pallaidrom(int* num,int size) {
	for(int i=0; i < size; i++) {
		int rev,r1,r2, r3,q1;

		r3 = num[i] % 10;
		q1 = num[i] / 10;
		r2 = q1 % 10;
		r1 = q1 / 10;

		rev = (r3 * 100) + (r2 * 10) + (r1);
		if (rev == num[i])
			printf("Num Is Pallaidrom\n");
		else
			printf("Num Is Not Pallaidrom\n");
	}
}