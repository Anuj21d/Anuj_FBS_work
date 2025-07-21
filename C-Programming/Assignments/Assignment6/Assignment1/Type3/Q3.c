void leapyear(int);
void main() {
	int year = 2000;
	leapyear(year);
}
void leapyear(int year) {

	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		printf("Year is Leap");
	else
		printf("year is not Leap");
}