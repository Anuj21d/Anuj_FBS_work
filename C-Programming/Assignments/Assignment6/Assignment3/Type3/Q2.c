void fivetable(int);
void main() {
	int a = 5;
	fivetable(a);
}
void fivetable(int a) {
	for(int i = 1; i<= 10; i++) {
		printf("%d\n",a * i);
	}
}