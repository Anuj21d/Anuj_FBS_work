void vote(int*);
void main() {
	int num[5] = {16,18,20,15,22};
	for(int i =0; i<5; i++) {
		printf("num[%d] : %d \n",i,num[i]);
	}
	vote(num);
}
void vote(int* num) {
	for(int i=0; i<5; i++) {
		if(num[i]>=18) {
			printf("You are eligible for vote\n");
		} else {
			printf("You are not eligible for vote\n");
		}
	}
}