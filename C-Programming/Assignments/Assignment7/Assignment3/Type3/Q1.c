void onetoten(int*);
void main() {
	int a = 1;
	onetoten(&a);
}
void onetoten(int* a) {
	for(int i = *a; i <=10; i++) {
		printf("%d\n",i);
	}
	
}