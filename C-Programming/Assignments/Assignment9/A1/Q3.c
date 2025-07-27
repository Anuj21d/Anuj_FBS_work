void leapyear(int*,int);
void main() {
	int year[] = {2000,2004,2002,2001};
	int size = sizeof(year)/sizeof(year[0]);
	leapyear(year,size);
}
void leapyear(int* year,int size) {
	for(int i = 0; i <size; i++) {
		if(year[i] % 4 == 0 && year[i] % 100 != 0 || year[i] % 400 == 0)
			printf("Year is Leap\n");
		else
			printf("year is not Leap\n");
	}

}