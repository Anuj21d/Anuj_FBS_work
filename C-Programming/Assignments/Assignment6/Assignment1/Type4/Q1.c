void evenodd(int);
void main() {
	int a = 3;
	int r = evenodd(a);
	if(r == 1)
		printf("Num Is Even");
	else
		printf("Num Is odd");
}
void evenodd(int no) {

	if (no % 2 == 0) {
		return 1;
	}
}