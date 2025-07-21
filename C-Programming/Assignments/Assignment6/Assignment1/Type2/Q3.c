int leapyear();
void main() {
	int a = leapyear();
	if(a == 1)
		printf("Year is Leap");
	else
		printf("year is not Leap");
}
int leapyear() {
	int year = 2000;

	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return 1;
}