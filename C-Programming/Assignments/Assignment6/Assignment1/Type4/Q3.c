int leapyear(int);
void main() {
	int year = 2000;
	int r = leapyear(year);
	if(r == 1)
		printf("Year is Leap");
	else
		printf("year is not Leap");
}
int leapyear(int year) {

	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return 1;
}