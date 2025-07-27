int evenodd(int* ,int);
void main() {
	int a[]= {2,5,3,4};
	int size = sizeof(a)/sizeof(a[0]);
	evenodd(a,size);
}
int evenodd(int* a,int size) {

	for(int i = 0 ; i<size; i++) {
		if (a[i] % 2 == 0) {
			printf("Num Is Even\n");
		} else
			printf("Num Is odd\n");
	}

}