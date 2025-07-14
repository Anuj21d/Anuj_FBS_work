void leapyear();
void main(){
  leapyear();
}
void leapyear(){
		int year = 2000;
	
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		printf("Year is Leap");
	else
		printf("year is not Leap");
}