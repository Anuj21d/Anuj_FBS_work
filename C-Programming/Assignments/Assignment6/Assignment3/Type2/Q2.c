int fivetable();
void main() {
	fivetable();
}
int fivetable() {
	int a = 5;
	for(int i = 1; i<= 10; i++) {
		printf("%d\n",a * i);
	}
	return 0;
}